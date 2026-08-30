#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_019A582638BC3D1A;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_284D08B293F6D6BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF42CCB0)
#define CLASS_2_284D08B293F6D6BF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF42CD10)
#define CLASS_2_284D08B293F6D6BF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF42CE70)
#define CLASS_2_284D08B293F6D6BF_TICK_OFFSET UNITYSDK_OFFSET(0xF42CEC0)
#define CLASS_2_284D08B293F6D6BF__CTOR_OFFSET UNITYSDK_OFFSET(0xF42CC20)

inline static constexpr unsigned int Class_2_284D08B293F6D6BF_TypeDefinitionIndex = 58309;

class Class_2_284D08B293F6D6BF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* JICPMFEHCHN; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_019A582638BC3D1A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_019A582638BC3D1A*))((::PBYTE)hIl2Cpp + CLASS_2_284D08B293F6D6BF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284D08B293F6D6BF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284D08B293F6D6BF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_284D08B293F6D6BF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_284D08B293F6D6BF_TICK_OFFSET))(this, a1);
	}
};

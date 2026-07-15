#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_019A582638BC3D1A;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8BD399E5E2BA3235_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16986F10)
#define CLASS_2_8BD399E5E2BA3235_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16986F70)
#define CLASS_2_8BD399E5E2BA3235_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x169870D0)
#define CLASS_2_8BD399E5E2BA3235_TICK_OFFSET UNITYSDK_OFFSET(0x16987120)
#define CLASS_2_8BD399E5E2BA3235__CTOR_OFFSET UNITYSDK_OFFSET(0x16986E80)

inline static constexpr unsigned int Class_2_8BD399E5E2BA3235_TypeDefinitionIndex = 55578;

class Class_2_8BD399E5E2BA3235 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_019A582638BC3D1A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_019A582638BC3D1A*))((::PBYTE)hIl2Cpp + CLASS_2_8BD399E5E2BA3235__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BD399E5E2BA3235_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BD399E5E2BA3235_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BD399E5E2BA3235_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8BD399E5E2BA3235_TICK_OFFSET))(this, a1);
	}
};

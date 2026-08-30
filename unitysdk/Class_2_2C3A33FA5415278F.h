#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_27E38B1A892A490A;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropCurveMoveStart; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_2C3A33FA5415278F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160FD7E0)
#define CLASS_2_2C3A33FA5415278F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160FD880)
#define CLASS_2_2C3A33FA5415278F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x160FD830)
#define CLASS_2_2C3A33FA5415278F_TICK_OFFSET UNITYSDK_OFFSET(0x160FE4B0)
#define CLASS_2_2C3A33FA5415278F__CTOR_OFFSET UNITYSDK_OFFSET(0x160FD7D0)

inline static constexpr unsigned int Class_2_2C3A33FA5415278F_TypeDefinitionIndex = 58458;

class Class_2_2C3A33FA5415278F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
	::RPG::GameCore::PropCurveMoveStart* OFKGLJOAMLD; // 0x20
	::System::String* IJMGEMMNNPI; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveMoveStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveMoveStart*))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C3A33FA5415278F_TICK_OFFSET))(this, a1);
	}
};

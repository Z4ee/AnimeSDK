#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

namespace RPG::GameCore { class SetTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1C7370A7B506F02C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FCF410)
#define CLASS_2_1C7370A7B506F02C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19FCF4C0)
#define CLASS_2_1C7370A7B506F02C_METHOD_2_CE8256421AC52E30_OFFSET UNITYSDK_OFFSET(0x19FCF8E0)
#define CLASS_2_1C7370A7B506F02C_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x19FCF590)
#define CLASS_2_1C7370A7B506F02C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19FCF450)
#define CLASS_2_1C7370A7B506F02C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19FCFD20)
#define CLASS_2_1C7370A7B506F02C_TICK_OFFSET UNITYSDK_OFFSET(0x19FCFD70)
#define CLASS_2_1C7370A7B506F02C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCF400)

inline static constexpr unsigned int Class_2_1C7370A7B506F02C_TypeDefinitionIndex = 56618;

class Class_2_1C7370A7B506F02C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetTeamFormation* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTeamFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_2_1C7370A7B506F02C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C7370A7B506F02C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C7370A7B506F02C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C7370A7B506F02C_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C7370A7B506F02C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C7370A7B506F02C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1C7370A7B506F02C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE8256421AC52E30(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_1C7370A7B506F02C_METHOD_2_CE8256421AC52E30_OFFSET))(this, a1);
	}
};

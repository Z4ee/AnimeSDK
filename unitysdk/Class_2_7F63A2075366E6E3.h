#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterHeadAddLookAtCurve; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7F63A2075366E6E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A7E620)
#define CLASS_2_7F63A2075366E6E3_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x19A7E3D0)
#define CLASS_2_7F63A2075366E6E3_ONSKIP_OFFSET UNITYSDK_OFFSET(0x19A7E730)
#define CLASS_2_7F63A2075366E6E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A7E3F0)
#define CLASS_2_7F63A2075366E6E3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19A7E660)
#define CLASS_2_7F63A2075366E6E3_TICK_OFFSET UNITYSDK_OFFSET(0x19A7E6B0)
#define CLASS_2_7F63A2075366E6E3__CTOR_OFFSET UNITYSDK_OFFSET(0x19A7E3E0)

inline static constexpr unsigned int Class_2_7F63A2075366E6E3_TypeDefinitionIndex = 58154;

class Class_2_7F63A2075366E6E3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdventureCharacterController* NGCHOMCMKPI; // 0x18
	::RPG::GameCore::CharacterHeadAddLookAtCurve* OFKGLJOAMLD; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterHeadAddLookAtCurve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterHeadAddLookAtCurve*))((::PBYTE)hIl2Cpp + CLASS_2_7F63A2075366E6E3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F63A2075366E6E3_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F63A2075366E6E3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F63A2075366E6E3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F63A2075366E6E3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7F63A2075366E6E3_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F63A2075366E6E3_ONSKIP_OFFSET))(this);
	}
};

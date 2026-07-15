#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEnableFitToGroundIK; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E79F13371CEB364C_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x16993300)
#define CLASS_3_E79F13371CEB364C_ONSKIP_OFFSET UNITYSDK_OFFSET(0x16993310)
#define CLASS_3_E79F13371CEB364C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16993120)
#define CLASS_3_E79F13371CEB364C__CTOR_OFFSET UNITYSDK_OFFSET(0x169930F0)

inline static constexpr unsigned int Class_3_E79F13371CEB364C_TypeDefinitionIndex = 49967;

class Class_3_E79F13371CEB364C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEnableFitToGroundIK*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnableFitToGroundIK* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnableFitToGroundIK*))((::PBYTE)hIl2Cpp + CLASS_3_E79F13371CEB364C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E79F13371CEB364C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E79F13371CEB364C_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E79F13371CEB364C_ONSKIP_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3207B23A0433048D.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/RtStackSkillTargetRedirectPhase.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_9B635DC3F867E2EE;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6B0F2A7B4FC52732_METHOD_2_0EF73923CC8C9F12_OFFSET UNITYSDK_OFFSET(0x1723C8C0)
#define CLASS_2_6B0F2A7B4FC52732_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1723CA70)
#define CLASS_2_6B0F2A7B4FC52732_METHOD_2_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x1723CAD0)
#define CLASS_2_6B0F2A7B4FC52732_METHOD_2_C832B54E7C1F6D38_OFFSET UNITYSDK_OFFSET(0x1723CBC0)
#define CLASS_2_6B0F2A7B4FC52732__CTOR_OFFSET UNITYSDK_OFFSET(0x1723CE10)

inline static constexpr unsigned int Class_2_6B0F2A7B4FC52732_TypeDefinitionIndex = 53950;

class Class_2_6B0F2A7B4FC52732 : public ::Class_1_3207B23A0433048D
{
public:
	::System::Action* HPNACLGCGPB; // 0x20
	::System::Collections::Generic::List_1<::Class_1_9B635DC3F867E2EE*>* IHDKHABKMDI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B0F2A7B4FC52732__CTOR_OFFSET))(this);
	}

	::Class_1_9B635DC3F867E2EE* Method_2_0EF73923CC8C9F12(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::EntityTypeMask a2, ::RPG::GameCore::GameEntity* a3, ::System::Int32 a4, ::RPG::GameCore::RtStackSkillTargetRedirectPhase a5)
	{
		return ((::Class_1_9B635DC3F867E2EE*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::RtStackSkillTargetRedirectPhase))((::PBYTE)hIl2Cpp + CLASS_2_6B0F2A7B4FC52732_METHOD_2_0EF73923CC8C9F12_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_70437D85C11C5222(::Class_1_9B635DC3F867E2EE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9B635DC3F867E2EE*))((::PBYTE)hIl2Cpp + CLASS_2_6B0F2A7B4FC52732_METHOD_2_70437D85C11C5222_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_C832B54E7C1F6D38(::RPG::GameCore::TeamType a1, ::RPG::GameCore::EntityType a2, ::RPG::GameCore::RtStackSkillTargetRedirectPhase a3)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType, ::RPG::GameCore::RtStackSkillTargetRedirectPhase))((::PBYTE)hIl2Cpp + CLASS_2_6B0F2A7B4FC52732_METHOD_2_C832B54E7C1F6D38_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B0F2A7B4FC52732_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};

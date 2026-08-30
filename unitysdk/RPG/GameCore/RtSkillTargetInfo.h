#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSKILLTARGETINFO_METHOD_2_B5E34214AB415E53_OFFSET UNITYSDK_OFFSET(0x1D4B0AA0)
#define RPG_GAMECORE_RTSKILLTARGETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B1A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillTargetInfo_TypeDefinitionIndex = 17457;

	class RtSkillTargetInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask Team; // 0x10
		::RPG::GameCore::EntityTypeMask EntityType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PredicateConfig* Filter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLTARGETINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B5E34214AB415E53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillTargetInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillTargetInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLTARGETINFO_METHOD_2_B5E34214AB415E53_OFFSET))(a1, a2);
		}
	};
}

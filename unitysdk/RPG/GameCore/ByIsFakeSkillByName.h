#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_4EEB3AB386CEF9F4_OFFSET UNITYSDK_OFFSET(0x1CF3B240)
#define RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_726EE8F616116C85_OFFSET UNITYSDK_OFFSET(0x1CF3B2A0)
#define RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_DB436A1AB89C214F_OFFSET UNITYSDK_OFFSET(0x1CF3B080)
#define RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_F45B0F7FC9441B02_OFFSET UNITYSDK_OFFSET(0x1CF3AFE0)
#define RPG_GAMECORE_BYISFAKESKILLBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3B040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFakeSkillByName_TypeDefinitionIndex = 22749;

	class ByIsFakeSkillByName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* TriggerKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F45B0F7FC9441B02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFakeSkillByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFakeSkillByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_F45B0F7FC9441B02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB436A1AB89C214F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_DB436A1AB89C214F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4EEB3AB386CEF9F4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillByName*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_4EEB3AB386CEF9F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_726EE8F616116C85(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_726EE8F616116C85_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_9A4EE7D11517190F_OFFSET UNITYSDK_OFFSET(0x1BBDE450)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_9C4725DF47580BB3_OFFSET UNITYSDK_OFFSET(0x1BBDE2A0)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_ADD14FBC7B6F023A_OFFSET UNITYSDK_OFFSET(0x1BBDE260)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_C7E7B2C754D86189_OFFSET UNITYSDK_OFFSET(0x1BBDE420)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDE290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasCharacterRevived_TypeDefinitionIndex = 22800;

	class ByHasCharacterRevived : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ADD14FBC7B6F023A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasCharacterRevived*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasCharacterRevived*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_ADD14FBC7B6F023A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9C4725DF47580BB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_9C4725DF47580BB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C7E7B2C754D86189(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_C7E7B2C754D86189_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A4EE7D11517190F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_METHOD_4_9A4EE7D11517190F_OFFSET))(a1, a2);
		}
	};
}

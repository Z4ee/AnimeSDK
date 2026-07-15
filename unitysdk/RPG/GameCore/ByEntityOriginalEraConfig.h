#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_1765F9201E875351_OFFSET UNITYSDK_OFFSET(0x1A8C0B80)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_4CB63D77556D47EB_OFFSET UNITYSDK_OFFSET(0x1A8C0D00)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_81F18523203E6084_OFFSET UNITYSDK_OFFSET(0x1A8C0D30)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_AD264757BE844D14_OFFSET UNITYSDK_OFFSET(0x1A8C0B40)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C0B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEntityOriginalEraConfig_TypeDefinitionIndex = 21523;

	class ByEntityOriginalEraConfig : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AD264757BE844D14(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityOriginalEraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityOriginalEraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_AD264757BE844D14_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1765F9201E875351(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_1765F9201E875351_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4CB63D77556D47EB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_4CB63D77556D47EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_81F18523203E6084(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_81F18523203E6084_OFFSET))(a1, a2);
		}
	};
}

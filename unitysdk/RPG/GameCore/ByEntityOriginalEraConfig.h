#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_1765F9201E875351_OFFSET UNITYSDK_OFFSET(0x19548E00)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_3F3E74D4F1F76F17_OFFSET UNITYSDK_OFFSET(0x19549000)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_A0F446E6BA71734E_OFFSET UNITYSDK_OFFSET(0x19548F80)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_D1FF48EB1D9404C7_OFFSET UNITYSDK_OFFSET(0x19548D30)
#define RPG_GAMECORE_BYENTITYORIGINALERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19548DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByEntityOriginalEraConfig_TypeDefinitionIndex = 21108;

	class ByEntityOriginalEraConfig : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1FF48EB1D9404C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityOriginalEraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityOriginalEraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_D1FF48EB1D9404C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1765F9201E875351(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_1765F9201E875351_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A0F446E6BA71734E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_A0F446E6BA71734E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3F3E74D4F1F76F17(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByEntityOriginalEraConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByEntityOriginalEraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYENTITYORIGINALERACONFIG_METHOD_4_3F3E74D4F1F76F17_OFFSET))(a1, a2);
		}
	};
}

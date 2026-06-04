#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_2B79E0AA305CE3CB_OFFSET UNITYSDK_OFFSET(0x19C151A0)
#define RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_879CC8C5E7F577A6_OFFSET UNITYSDK_OFFSET(0x19C15010)
#define RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_E172B2C343178AF8_OFFSET UNITYSDK_OFFSET(0x19C14F40)
#define RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_FA04D0FBC4458EF7_OFFSET UNITYSDK_OFFSET(0x19C15220)
#define RPG_GAMECORE_ST_BYINAISTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x19C14FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByInAIStatus_TypeDefinitionIndex = 18962;

	class ST_ByInAIStatus : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AIStatus>* States; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E172B2C343178AF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAIStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAIStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_E172B2C343178AF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_879CC8C5E7F577A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_879CC8C5E7F577A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2B79E0AA305CE3CB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAIStatus*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAIStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_2B79E0AA305CE3CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA04D0FBC4458EF7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByInAIStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByInAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYINAISTATUS_METHOD_4_FA04D0FBC4458EF7_OFFSET))(a1, a2);
		}
	};
}

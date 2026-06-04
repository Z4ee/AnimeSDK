#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_33DDE9D21AB46FFB_OFFSET UNITYSDK_OFFSET(0x19AA5E30)
#define RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_4EBBBF23158BB193_OFFSET UNITYSDK_OFFSET(0x19AA5C60)
#define RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_6FBB28C8D5B23760_OFFSET UNITYSDK_OFFSET(0x19AA5EB0)
#define RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_80157F4BA9507377_OFFSET UNITYSDK_OFFSET(0x19AA5B90)
#define RPG_GAMECORE_RA_BYAISTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA5C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByAIStatus_TypeDefinitionIndex = 18925;

	class RA_ByAIStatus : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AIStatus>* Status; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_80157F4BA9507377(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByAIStatus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByAIStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_80157F4BA9507377_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4EBBBF23158BB193(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_4EBBBF23158BB193_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33DDE9D21AB46FFB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_33DDE9D21AB46FFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6FBB28C8D5B23760(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByAIStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByAIStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYAISTATUS_METHOD_4_6FBB28C8D5B23760_OFFSET))(a1, a2);
		}
	};
}

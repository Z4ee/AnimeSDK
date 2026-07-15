#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_18BE1406EF5D374D_OFFSET UNITYSDK_OFFSET(0x1B2AB890)
#define RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_5487B853AA0A77E7_OFFSET UNITYSDK_OFFSET(0x1B2ABA10)
#define RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_6A43A69B7439DB68_OFFSET UNITYSDK_OFFSET(0x1B2AB850)
#define RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_9096EAF1E0519739_OFFSET UNITYSDK_OFFSET(0x1B2ABA40)
#define RPG_GAMECORE_BYISTURNACTIONENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AB880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTurnActionEntity_TypeDefinitionIndex = 21732;

	class ByIsTurnActionEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6A43A69B7439DB68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_6A43A69B7439DB68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_18BE1406EF5D374D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_18BE1406EF5D374D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5487B853AA0A77E7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_5487B853AA0A77E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9096EAF1E0519739(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_9096EAF1E0519739_OFFSET))(a1, a2);
		}
	};
}

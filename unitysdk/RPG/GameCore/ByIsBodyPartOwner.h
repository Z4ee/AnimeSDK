#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_28EF945A458F7FBA_OFFSET UNITYSDK_OFFSET(0x1955BA40)
#define RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_B18BBDB612DCA333_OFFSET UNITYSDK_OFFSET(0x1955B7F0)
#define RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_D66BD13C5CDDF0D5_OFFSET UNITYSDK_OFFSET(0x1955B8C0)
#define RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_E19B808986913B0F_OFFSET UNITYSDK_OFFSET(0x1955BAC0)
#define RPG_GAMECORE_BYISBODYPARTOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1955B870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsBodyPartOwner_TypeDefinitionIndex = 22041;

	class ByIsBodyPartOwner : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTOWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B18BBDB612DCA333(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPartOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPartOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_B18BBDB612DCA333_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D66BD13C5CDDF0D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsBodyPartOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsBodyPartOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_D66BD13C5CDDF0D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_28EF945A458F7FBA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartOwner*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_28EF945A458F7FBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E19B808986913B0F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsBodyPartOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsBodyPartOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISBODYPARTOWNER_METHOD_4_E19B808986913B0F_OFFSET))(a1, a2);
		}
	};
}

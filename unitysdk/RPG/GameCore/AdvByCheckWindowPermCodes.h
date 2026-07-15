#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_1832781DF3867706_OFFSET UNITYSDK_OFFSET(0x1BE0ED20)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_1A816B1836FE4006_OFFSET UNITYSDK_OFFSET(0x1BE0EAB0)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_2550AC7A27BD3EC8_OFFSET UNITYSDK_OFFSET(0x1BE0ECF0)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_B27BE0FFD600B053_OFFSET UNITYSDK_OFFSET(0x1BE0EA70)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0EAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckWindowPermCodes_TypeDefinitionIndex = 20491;

	class AdvByCheckWindowPermCodes : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x20
		::RPG::GameCore::DynamicString* EntityID; // 0x28
		::Il2CppArray<::System::Int32>* PermCodes; // 0x30
		::Il2CppArray<::System::Boolean>* MatchMask; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B27BE0FFD600B053(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckWindowPermCodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_B27BE0FFD600B053_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A816B1836FE4006(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_1A816B1836FE4006_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2550AC7A27BD3EC8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_2550AC7A27BD3EC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1832781DF3867706(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_1832781DF3867706_OFFSET))(a1, a2);
		}
	};
}

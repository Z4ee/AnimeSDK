#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_18E5F7A4E63E9107_OFFSET UNITYSDK_OFFSET(0x19416DA0)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_1A816B1836FE4006_OFFSET UNITYSDK_OFFSET(0x19416E70)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_237A39D55F058880_OFFSET UNITYSDK_OFFSET(0x194170B0)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_A32DA0E3BDDD8E77_OFFSET UNITYSDK_OFFSET(0x19417130)
#define RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES__CTOR_OFFSET UNITYSDK_OFFSET(0x19416E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckWindowPermCodes_TypeDefinitionIndex = 20119;

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

		static ::System::Void Method_4_18E5F7A4E63E9107(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckWindowPermCodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_18E5F7A4E63E9107_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A816B1836FE4006(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_1A816B1836FE4006_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_237A39D55F058880(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_237A39D55F058880_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A32DA0E3BDDD8E77(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKWINDOWPERMCODES_METHOD_4_A32DA0E3BDDD8E77_OFFSET))(a1, a2);
		}
	};
}

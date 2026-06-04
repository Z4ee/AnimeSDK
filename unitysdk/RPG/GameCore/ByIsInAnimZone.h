#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINANIMZONE_METHOD_4_6F7617736B908B52_OFFSET UNITYSDK_OFFSET(0x19565880)
#define RPG_GAMECORE_BYISINANIMZONE_METHOD_4_B695D30DB5B3DCC9_OFFSET UNITYSDK_OFFSET(0x19565630)
#define RPG_GAMECORE_BYISINANIMZONE_METHOD_4_B9DB4CDBE408E815_OFFSET UNITYSDK_OFFSET(0x19565560)
#define RPG_GAMECORE_BYISINANIMZONE_METHOD_4_CC0D5604183B5F45_OFFSET UNITYSDK_OFFSET(0x19565800)
#define RPG_GAMECORE_BYISINANIMZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x195655E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInAnimZone_TypeDefinitionIndex = 19105;

	class ByIsInAnimZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AnimZoneType AnimZone; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B9DB4CDBE408E815(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInAnimZone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInAnimZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_METHOD_4_B9DB4CDBE408E815_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B695D30DB5B3DCC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_METHOD_4_B695D30DB5B3DCC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC0D5604183B5F45(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_METHOD_4_CC0D5604183B5F45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6F7617736B908B52(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_METHOD_4_6F7617736B908B52_OFFSET))(a1, a2);
		}
	};
}

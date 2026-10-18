#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINANIMZONE_METHOD_4_11C65EC5ED91E9C9_OFFSET UNITYSDK_OFFSET(0x1D516BB0)
#define RPG_GAMECORE_BYISINANIMZONE_METHOD_4_52C02FA23CF48614_OFFSET UNITYSDK_OFFSET(0x1D5169A0)
#define RPG_GAMECORE_BYISINANIMZONE_METHOD_4_A1660B9018A62E4F_OFFSET UNITYSDK_OFFSET(0x1D516BE0)
#define RPG_GAMECORE_BYISINANIMZONE_METHOD_4_B695D30DB5B3DCC9_OFFSET UNITYSDK_OFFSET(0x1D5169E0)
#define RPG_GAMECORE_BYISINANIMZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5169D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInAnimZone_TypeDefinitionIndex = 20242;

	class ByIsInAnimZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AnimZoneType AnimZone; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_52C02FA23CF48614(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInAnimZone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInAnimZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_METHOD_4_52C02FA23CF48614_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B695D30DB5B3DCC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_METHOD_4_B695D30DB5B3DCC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_11C65EC5ED91E9C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_METHOD_4_11C65EC5ED91E9C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A1660B9018A62E4F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInAnimZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInAnimZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINANIMZONE_METHOD_4_A1660B9018A62E4F_OFFSET))(a1, a2);
		}
	};
}

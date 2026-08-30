#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_51799AF880ACA9BF_OFFSET UNITYSDK_OFFSET(0x1BBDC1D0)
#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_6FA76718FCA90D2A_OFFSET UNITYSDK_OFFSET(0x1BBDBEE0)
#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_946F750F9C3A0BCF_OFFSET UNITYSDK_OFFSET(0x1BBDBF30)
#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_AA5B20464B6F5139_OFFSET UNITYSDK_OFFSET(0x1BBDC190)
#define RPG_GAMECORE_BYGRIDFIGHTHASTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDBF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightHasTrait_TypeDefinitionIndex = 22274;

	class ByGridFightHasTrait : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* TeamTrait; // 0x28
		::System::Boolean IncludeOtherEffect; // 0x30
		::System::Boolean IncludeInactiveTrait; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6FA76718FCA90D2A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightHasTrait*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightHasTrait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_6FA76718FCA90D2A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_946F750F9C3A0BCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_946F750F9C3A0BCF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AA5B20464B6F5139(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasTrait*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasTrait*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_AA5B20464B6F5139_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_51799AF880ACA9BF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTHASTRAIT_METHOD_4_51799AF880ACA9BF_OFFSET))(a1, a2);
		}
	};
}

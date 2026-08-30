#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYANGLE_METHOD_4_5E04DB5671B246CA_OFFSET UNITYSDK_OFFSET(0x1C2F1330)
#define RPG_GAMECORE_BYANGLE_METHOD_4_8F4C6CC360E9A88D_OFFSET UNITYSDK_OFFSET(0x1C2F12E0)
#define RPG_GAMECORE_BYANGLE_METHOD_4_CBB22071F6830F22_OFFSET UNITYSDK_OFFSET(0x1C2F15E0)
#define RPG_GAMECORE_BYANGLE_METHOD_4_DAC56FFE8AD81304_OFFSET UNITYSDK_OFFSET(0x1C2F15A0)
#define RPG_GAMECORE_BYANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F1320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAngle_TypeDefinitionIndex = 20537;

	class ByAngle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F4C6CC360E9A88D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAngle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAngle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_METHOD_4_8F4C6CC360E9A88D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E04DB5671B246CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAngle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_METHOD_4_5E04DB5671B246CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DAC56FFE8AD81304(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_METHOD_4_DAC56FFE8AD81304_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CBB22071F6830F22(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAngle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYANGLE_METHOD_4_CBB22071F6830F22_OFFSET))(a1, a2);
		}
	};
}

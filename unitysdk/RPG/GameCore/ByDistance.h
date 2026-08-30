#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDISTANCE_METHOD_4_1344447CA47347D4_OFFSET UNITYSDK_OFFSET(0x1CF17060)
#define RPG_GAMECORE_BYDISTANCE_METHOD_4_3AC116D65CDC79AB_OFFSET UNITYSDK_OFFSET(0x1CF16D00)
#define RPG_GAMECORE_BYDISTANCE_METHOD_4_3ED5690476160643_OFFSET UNITYSDK_OFFSET(0x1CF17020)
#define RPG_GAMECORE_BYDISTANCE_METHOD_4_E839AE69916489E1_OFFSET UNITYSDK_OFFSET(0x1CF16D50)
#define RPG_GAMECORE_BYDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF16D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDistance_TypeDefinitionIndex = 20534;

	class ByDistance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* From; // 0x20
		::RPG::GameCore::TargetEvaluator* To; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38
		::System::Boolean IgnoreRadius; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3AC116D65CDC79AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDistance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_METHOD_4_3AC116D65CDC79AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E839AE69916489E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDistance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_METHOD_4_E839AE69916489E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3ED5690476160643(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_METHOD_4_3ED5690476160643_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1344447CA47347D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDistance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDistance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDISTANCE_METHOD_4_1344447CA47347D4_OFFSET))(a1, a2);
		}
	};
}

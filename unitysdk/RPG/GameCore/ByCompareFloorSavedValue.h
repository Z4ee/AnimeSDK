#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_A9E27D1B3D9E87E6_OFFSET UNITYSDK_OFFSET(0x1C31C680)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_B3E889328DB9628A_OFFSET UNITYSDK_OFFSET(0x1C31C8C0)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_B8EA647FB64463AD_OFFSET UNITYSDK_OFFSET(0x1C31C900)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_F4226F49FDBCBC9B_OFFSET UNITYSDK_OFFSET(0x1C31C630)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C31C670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorSavedValue_TypeDefinitionIndex = 20467;

	class ByCompareFloorSavedValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::DynamicString* DynamicName; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Int16 CompareValue; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F4226F49FDBCBC9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorSavedValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorSavedValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_F4226F49FDBCBC9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A9E27D1B3D9E87E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_A9E27D1B3D9E87E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3E889328DB9628A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_B3E889328DB9628A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8EA647FB64463AD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_B8EA647FB64463AD_OFFSET))(a1, a2);
		}
	};
}

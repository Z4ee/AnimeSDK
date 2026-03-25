#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_A9E27D1B3D9E87E6_OFFSET UNITYSDK_OFFSET(0x17009790)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_EE9AA4D90B96F610_OFFSET UNITYSDK_OFFSET(0x170096B0)
#define RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17009730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorSavedValue_TypeDefinitionIndex = 19024;

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

		static ::System::Void Method_4_EE9AA4D90B96F610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorSavedValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorSavedValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_EE9AA4D90B96F610_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A9E27D1B3D9E87E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorSavedValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorSavedValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORSAVEDVALUE_METHOD_4_A9E27D1B3D9E87E6_OFFSET))(a1, a2);
		}
	};
}

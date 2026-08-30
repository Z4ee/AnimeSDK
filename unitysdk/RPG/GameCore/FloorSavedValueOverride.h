#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FLOORSAVEDVALUEOVERRIDE_METHOD_2_E13950717E34196E_OFFSET UNITYSDK_OFFSET(0x1DCAEC30)
#define RPG_GAMECORE_FLOORSAVEDVALUEOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAED80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorSavedValueOverride_TypeDefinitionIndex = 20064;

	class FloorSavedValueOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int16 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSAVEDVALUEOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E13950717E34196E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorSavedValueOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorSavedValueOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSAVEDVALUEOVERRIDE_METHOD_2_E13950717E34196E_OFFSET))(a1, a2);
		}
	};
}

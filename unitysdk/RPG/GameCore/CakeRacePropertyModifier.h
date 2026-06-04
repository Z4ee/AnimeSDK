#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/RPG/GameCore/CakeRacePropertyOperation.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEPROPERTYMODIFIER_METHOD_2_E72DEFCEA3501C78_OFFSET UNITYSDK_OFFSET(0x195F0380)
#define RPG_GAMECORE_CAKERACEPROPERTYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x195F0500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRacePropertyModifier_TypeDefinitionIndex = 17423;

	class CakeRacePropertyModifier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceProperty Property; // 0x10
		::RPG::GameCore::CakeRacePropertyOperation Operation; // 0x14
		::System::Int32 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPROPERTYMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E72DEFCEA3501C78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRacePropertyModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRacePropertyModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPROPERTYMODIFIER_METHOD_2_E72DEFCEA3501C78_OFFSET))(a1, a2);
		}
	};
}

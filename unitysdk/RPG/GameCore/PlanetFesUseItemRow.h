#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesItemUseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESUSEITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C0BC80)
#define RPG_GAMECORE_PLANETFESUSEITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0BE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesUseItemRow_TypeDefinitionIndex = 11584;

	class PlanetFesUseItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UseParams; // 0x10
		::RPG::GameCore::PlanetFesItemUseType UseType; // 0x18
		::System::UInt32 ItemID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESUSEITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesUseItemRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesUseItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESUSEITEMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

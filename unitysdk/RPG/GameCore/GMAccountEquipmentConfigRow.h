#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18937960)
#define RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18937B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GMAccountEquipmentConfigRow_TypeDefinitionIndex = 12616;

	class GMAccountEquipmentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemEquipmentNum; // 0x10
		::System::UInt32 ItemEquipmentID; // 0x14
		::System::UInt32 ItemEquipmentLevel; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GMAccountEquipmentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GMAccountEquipmentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x197AC330)
#define RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x197AC520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GMAccountEquipmentConfigRow_TypeDefinitionIndex = 12706;

	class GMAccountEquipmentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemEquipmentNum; // 0x10
		::System::UInt32 ItemEquipmentLevel; // 0x14
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 ItemEquipmentID; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GMAccountEquipmentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GMAccountEquipmentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GMACCOUNTEQUIPMENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

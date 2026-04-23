#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EQUIPMENTEXPTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188B48F0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188B4F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentExpTypeRow_TypeDefinitionIndex = 12520;

	class EquipmentExpTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 Exp; // 0x14
		::System::UInt32 ExpType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EquipmentExpTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EquipmentExpTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

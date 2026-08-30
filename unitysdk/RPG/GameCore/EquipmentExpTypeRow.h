#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_EQUIPMENTEXPTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CAFA0)
#define RPG_GAMECORE_EQUIPMENTEXPTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CB600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentExpTypeRow_TypeDefinitionIndex = 13136;

	class EquipmentExpTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 ExpType; // 0x14
		::System::UInt32 Level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EquipmentExpTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EquipmentExpTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXPTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

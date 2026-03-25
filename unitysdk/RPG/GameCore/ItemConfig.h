#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ITEMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172C7BD0)
#define RPG_GAMECORE_ITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172C7CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemConfig_TypeDefinitionIndex = 11917;

	class ItemConfig : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 ItemNum; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ItemConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}

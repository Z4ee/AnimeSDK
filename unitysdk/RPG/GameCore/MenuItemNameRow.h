#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MENUITEMNAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173CF2C0)
#define RPG_GAMECORE_MENUITEMNAMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173CF440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MenuItemNameRow_TypeDefinitionIndex = 11977;

	class MenuItemNameRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID TextID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMNAMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MenuItemNameRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MenuItemNameRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMNAMEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

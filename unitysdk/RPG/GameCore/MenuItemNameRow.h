#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MENUITEMNAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D286140)
#define RPG_GAMECORE_MENUITEMNAMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2862C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MenuItemNameRow_TypeDefinitionIndex = 13026;

	class MenuItemNameRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID TextID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMNAMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MenuItemNameRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MenuItemNameRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMNAMEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

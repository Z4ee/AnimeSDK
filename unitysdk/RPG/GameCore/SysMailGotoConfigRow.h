#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SYSMAILGOTOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ECC360)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECC950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SysMailGotoConfigRow_TypeDefinitionIndex = 14407;

	class SysMailGotoConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID GotoBtnName; // 0x10
		::System::UInt32 GotoID; // 0x20
		::System::UInt32 TemplateID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SysMailGotoConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SysMailGotoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

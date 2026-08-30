#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SYSMAILGOTOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E15EB10)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E15F4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SysMailGotoConfigRow_TypeDefinitionIndex = 15039;

	class SysMailGotoConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 GotoID; // 0x10
		::System::UInt32 TemplateID; // 0x14
		::RPG::Client::TextID GotoBtnName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SysMailGotoConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SysMailGotoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

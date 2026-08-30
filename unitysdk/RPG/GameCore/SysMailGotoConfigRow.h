#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SYSMAILGOTOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D59B3D0)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D59BD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SysMailGotoConfigRow_TypeDefinitionIndex = 15039;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SysMailGotoConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SysMailGotoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

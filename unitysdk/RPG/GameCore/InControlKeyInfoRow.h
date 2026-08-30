#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_INCONTROLKEYINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D219E30)
#define RPG_GAMECORE_INCONTROLKEYINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D21A580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlKeyInfoRow_TypeDefinitionIndex = 13710;

	class InControlKeyInfoRow : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Boolean isSettingKey; // 0x18
		::RPG::Client::TextID keyStringGermany; // 0x20
		::RPG::Client::TextID keyStringFrance; // 0x30
		::RPG::Client::TextID keyString; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InControlKeyInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InControlKeyInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSUSERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189FCF80)
#define RPG_GAMECORE_HELIOBUSUSERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189FD5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusUserRow_TypeDefinitionIndex = 13012;

	class HeliobusUserRow : public ::System::Object
	{
	public:
		::System::String* UserIconPath; // 0x10
		::RPG::Client::TextID HeliobusUserName; // 0x18
		::System::UInt32 HeliobusUserID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::HeliobusUserRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HeliobusUserRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MailType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SYSMAILROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D59A440)
#define RPG_GAMECORE_SYSMAILROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D59BD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SysMailRow_TypeDefinitionIndex = 15038;

	class SysMailRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID MailSender; // 0x10
		::RPG::Client::TextID MailDetail; // 0x20
		::System::UInt32 MailLifeTime; // 0x30
		::RPG::Client::TextID MailTitle; // 0x38
		::System::UInt32 MailID; // 0x48
		::RPG::GameCore::MailType Type; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SysMailRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SysMailRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

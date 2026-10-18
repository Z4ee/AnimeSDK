#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEAVATARPROPERTYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74A1A0)
#define RPG_GAMECORE_IDLELIVEAVATARPROPERTYCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D74A6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarPropertyConfigRow_TypeDefinitionIndex = 11712;

	class IdleLiveAvatarPropertyConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::FixPoint SupportPowerFactor; // 0x18
		::System::UInt32 Order; // 0x20
		::System::Boolean IsDisplay; // 0x24
		::RPG::Client::TextID PropertyName; // 0x28
		::RPG::GameCore::FixPoint BackgroundPowerFactor; // 0x38
		::RPG::GameCore::FixPoint CaptainPowerFactor; // 0x40
		::RPG::GameCore::FixPoint FrontPowerFactor; // 0x48
		::RPG::Client::TextID PropertyDesc; // 0x50
		::RPG::GameCore::IdleLiveAvatarPropertyType BaseProperty; // 0x60
		::RPG::GameCore::IdleLiveAvatarPropertyType PropertyType; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARPROPERTYCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARPROPERTYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

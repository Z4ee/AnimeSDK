#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SFXPlayType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SFXCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4BA300)
#define RPG_GAMECORE_SFXCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BA4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SFXConfigRow_TypeDefinitionIndex = 14920;

	class SFXConfigRow : public ::System::Object
	{
	public:
		::System::String* SFXPath; // 0x10
		::System::Boolean IsPlayerInvolved; // 0x18
		::RPG::GameCore::SFXPlayType SFXType; // 0x1C
		::System::UInt32 SFXID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SFXCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SFXConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SFXConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SFXCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

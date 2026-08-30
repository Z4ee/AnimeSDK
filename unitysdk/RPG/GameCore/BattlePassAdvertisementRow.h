#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2FEC70)
#define RPG_GAMECORE_BATTLEPASSADVERTISEMENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2FF380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassAdvertisementRow_TypeDefinitionIndex = 12783;

	class BattlePassAdvertisementRow : public ::System::Object
	{
	public:
		::System::String* IconBundlePath; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::RPG::Client::TextID Title; // 0x28
		::System::UInt32 ID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePassAdvertisementRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePassAdvertisementRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSADVERTISEMENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

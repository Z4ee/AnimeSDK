#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESAVATAREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D33BDC0)
#define RPG_GAMECORE_PLANETFESAVATAREVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D33C0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarEventRow_TypeDefinitionIndex = 12155;

	class PlanetFesAvatarEventRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x18
		::Il2CppArray<::System::UInt32>* EventOptionIDList; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::Client::TextID EventContent; // 0x30
		::System::UInt32 AvatarID; // 0x40
		::System::UInt32 ID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesAvatarEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAvatarEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

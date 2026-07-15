#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DECALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C0FE660)
#define RPG_GAMECORE_DECALCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FEEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecalConfigRow_TypeDefinitionIndex = 11882;

	class DecalConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* BgPath; // 0x18
		::System::String* Comment; // 0x20
		::System::String* FigurePath; // 0x28
		::System::String* TextureMapPath; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 DecalID; // 0x48
		::System::UInt32 UnlockMission; // 0x4C
		::RPG::Client::TextID Desc; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DecalConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecalConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

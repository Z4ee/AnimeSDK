#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESBUFFDESCOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174B83A0)
#define RPG_GAMECORE_PLANETFESBUFFDESCOVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174B8520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBuffDescOverrideRow_TypeDefinitionIndex = 11208;

	class PlanetFesBuffDescOverrideRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Decription; // 0x10
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUFFDESCOVERRIDEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBUFFDESCOVERRIDEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

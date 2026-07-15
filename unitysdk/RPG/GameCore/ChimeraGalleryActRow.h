#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAGALLERYACTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C24AF60)
#define RPG_GAMECORE_CHIMERAGALLERYACTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24B150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraGalleryActRow_TypeDefinitionIndex = 12557;

	class ChimeraGalleryActRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::Single Sort; // 0x18
		::System::UInt32 ActID; // 0x1C
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAGALLERYACTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraGalleryActRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraGalleryActRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAGALLERYACTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

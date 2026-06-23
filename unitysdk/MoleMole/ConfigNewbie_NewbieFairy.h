#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGNEWBIE_NEWBIEFAIRY_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x8C75D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_NewbieFairy_TypeDefinitionIndex = 49755;

	struct alignas(8) ConfigNewbie_NewbieFairy
	{
		::System::Int32 FairyId; // 0x10
		::System::Int32 FairyDelay; // 0x14
		::System::String* FairyWidgetPrefab; // 0x18
		::System::String* NextKey; // 0x20

		/*
		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_NEWBIEFAIRY_LOADFROMBYTES_OFFSET))(this, flexMap);
		}
		*/
	};
}

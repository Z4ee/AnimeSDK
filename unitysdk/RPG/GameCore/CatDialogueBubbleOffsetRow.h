#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CATDIALOGUEBUBBLEOFFSETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B70B400)
#define RPG_GAMECORE_CATDIALOGUEBUBBLEOFFSETROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B70B610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CatDialogueBubbleOffsetRow_TypeDefinitionIndex = 12443;

	class CatDialogueBubbleOffsetRow : public ::System::Object
	{
	public:
		::System::Single BubbleOffsetY; // 0x10
		::System::Single BubbleOffsetX; // 0x14
		::System::Single BubbleOffsetZ; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::GameCore::BubbleType BubbleType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CATDIALOGUEBUBBLEOFFSETROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CatDialogueBubbleOffsetRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CatDialogueBubbleOffsetRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CATDIALOGUEBUBBLEOFFSETROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_NAVMAPSUBTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199CAA30)
#define RPG_GAMECORE_NAVMAPSUBTABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199CB020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NavMapSubTabRow_TypeDefinitionIndex = 13334;

	class NavMapSubTabRow : public ::System::Object
	{
	public:
		::System::String* UnlockConditionExpression; // 0x10
		::System::UInt32 FloorID; // 0x18
		::System::UInt32 MenuSortID; // 0x1C
		::System::UInt32 NavMapTabID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NavMapSubTabRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NavMapSubTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

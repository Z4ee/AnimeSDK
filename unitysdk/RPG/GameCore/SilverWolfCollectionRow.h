#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolfCollectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SILVERWOLFCOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BE4B1D0)
#define RPG_GAMECORE_SILVERWOLFCOLLECTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE4B360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfCollectionRow_TypeDefinitionIndex = 11872;

	class SilverWolfCollectionRow : public ::System::Object
	{
	public:
		::System::UInt32 TypeParam; // 0x10
		::RPG::GameCore::SilverWolfCollectionType Type; // 0x14
		::System::UInt32 PositionID; // 0x18
		::System::UInt32 QuestID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFCOLLECTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SilverWolfCollectionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SilverWolfCollectionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFCOLLECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

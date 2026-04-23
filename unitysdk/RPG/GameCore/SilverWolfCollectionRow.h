#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolfCollectionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SILVERWOLFCOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E6BFE0)
#define RPG_GAMECORE_SILVERWOLFCOLLECTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6C170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfCollectionRow_TypeDefinitionIndex = 11673;

	class SilverWolfCollectionRow : public ::System::Object
	{
	public:
		::System::UInt32 TypeParam; // 0x10
		::System::UInt32 PositionID; // 0x14
		::RPG::GameCore::SilverWolfCollectionType Type; // 0x18
		::System::UInt32 QuestID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFCOLLECTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SilverWolfCollectionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SilverWolfCollectionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFCOLLECTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

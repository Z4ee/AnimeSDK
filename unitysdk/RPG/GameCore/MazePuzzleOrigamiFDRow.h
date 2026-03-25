#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEORIGAMIFDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173C9160)
#define RPG_GAMECORE_MAZEPUZZLEORIGAMIFDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173C93E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleOrigamiFDRow_TypeDefinitionIndex = 12871;

	class MazePuzzleOrigamiFDRow : public ::System::Object
	{
	public:
		::System::String* FDSGP; // 0x10
		::System::UInt32 FDEntityID; // 0x18
		::System::UInt32 MainPropID; // 0x1C
		::System::UInt32 FDContainerID; // 0x20
		::System::UInt32 ColonyID; // 0x24
		::System::UInt32 GroupID; // 0x28
		::System::UInt32 FloorID; // 0x2C
		::System::UInt32 FDSGPValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEORIGAMIFDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazePuzzleOrigamiFDRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleOrigamiFDRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEORIGAMIFDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

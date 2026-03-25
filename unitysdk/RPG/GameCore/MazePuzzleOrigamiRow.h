#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEPUZZLEORIGAMIROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173C93F0)
#define RPG_GAMECORE_MAZEPUZZLEORIGAMIROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173C9800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleOrigamiRow_TypeDefinitionIndex = 12868;

	class MazePuzzleOrigamiRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropState>* MainPropStateList; // 0x10
		::System::UInt32 NpcInstanceID; // 0x18
		::System::UInt32 NpcGroupID; // 0x1C
		::System::UInt32 ColonyID; // 0x20
		::System::UInt32 MirrorGroupID; // 0x24
		::System::UInt32 MainPropID; // 0x28
		::RPG::GameCore::PropState TargetSubPropState; // 0x2C
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 SubPropID; // 0x34
		::System::UInt32 MirrorMainPropID; // 0x38
		::RPG::GameCore::PropState CreateNpcPropState; // 0x3C
		::System::UInt32 FloorID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEORIGAMIROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazePuzzleOrigamiRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleOrigamiRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEORIGAMIROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

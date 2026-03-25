#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEFLOORUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173C3170)
#define RPG_GAMECORE_MAZEFLOORUNLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173C32A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeFloorUnlockRow_TypeDefinitionIndex = 12855;

	class MazeFloorUnlockRow : public ::System::Object
	{
	public:
		::System::String* UnlockConditionExpression; // 0x10
		::System::UInt32 FloorID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORUNLOCKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazeFloorUnlockRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeFloorUnlockRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORUNLOCKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

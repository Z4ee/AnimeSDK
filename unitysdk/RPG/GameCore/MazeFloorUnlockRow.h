#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEFLOORUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF4B3C0)
#define RPG_GAMECORE_MAZEFLOORUNLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4B4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeFloorUnlockRow_TypeDefinitionIndex = 13540;

	class MazeFloorUnlockRow : public ::System::Object
	{
	public:
		::System::String* UnlockConditionExpression; // 0x10
		::System::UInt32 FloorID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORUNLOCKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeFloorUnlockRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeFloorUnlockRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEFLOORUNLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

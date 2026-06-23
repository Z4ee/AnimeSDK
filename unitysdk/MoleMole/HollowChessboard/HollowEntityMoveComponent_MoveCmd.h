#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd_Dir.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_176;
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_FROMGRIDDIR_OFFSET UNITYSDK_OFFSET(0x19131410)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_GETTARGETINDEX_OFFSET UNITYSDK_OFFSET(0x86BA50)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_GET_GRIDDIR_OFFSET UNITYSDK_OFFSET(0x86BA80)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_ISDIRMOVE_OFFSET UNITYSDK_OFFSET(0x86BA30)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_TOGRIDDIR_OFFSET UNITYSDK_OFFSET(0x1911A5E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x86BA40)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x86BAD0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityMoveComponent_MoveCmd_TypeDefinitionIndex = 52587;

	struct alignas(4) HollowEntityMoveComponent_MoveCmd
	{
		::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir dir; // 0x10
		::MoleMole::HollowChessboard::HollowCell targetIndex; // 0x14
		::System::Int32 distance; // 0x20
		::System::Boolean waitForPush; // 0x24

		::System::Boolean IsDirMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_ISDIRMOVE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_TOSTRING_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowCell GetTargetIndex(::MoleMole::HollowChessboard::HollowCell currentIndex, ::Class_0_16E4307DCC419505_176* chessboard)
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Class_0_16E4307DCC419505_176*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_GETTARGETINDEX_OFFSET))(this, currentIndex, chessboard);
		}

		::Share::GridDir get_GridDir()
		{
			return ((::Share::GridDir(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_GET_GRIDDIR_OFFSET))(this);
		}

		static ::Share::GridDir ToGridDir(::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir dir)
		{
			return ((::Share::GridDir(*)(::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_TOGRIDDIR_OFFSET))(dir);
		}

		/*
		static ::System::Nullable_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir> FromGridDir(::Share::GridDir dir)
		{
			return ((::System::Nullable_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>(*)(::Share::GridDir))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD_FROMGRIDDIR_OFFSET))(dir);
		}
		*/

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWENTITYMOVECOMPONENT_MOVECMD___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

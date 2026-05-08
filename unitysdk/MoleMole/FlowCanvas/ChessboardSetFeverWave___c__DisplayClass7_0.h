#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_11287F05B515FFA7.h"
#include "unitysdk/System/Object.h"

class Class_5_8A5B236F53009830;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14275270)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE___C__DISPLAYCLASS7_0__START_B__0_OFFSET UNITYSDK_OFFSET(0x14275280)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardSetFeverWave___c__DisplayClass7_0_TypeDefinitionIndex = 46738;

	class ChessboardSetFeverWave___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::Class_5_8A5B236F53009830* targetgeometryComponent; // 0x10
		::MoleMole::HollowChessboard::HollowEntity* targetgeometryEntity; // 0x18
		::Struct_2_11287F05B515FFA7 handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _Start_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETFEVERWAVE___C__DISPLAYCLASS7_0__START_B__0_OFFSET))(this);
		}
	};
}

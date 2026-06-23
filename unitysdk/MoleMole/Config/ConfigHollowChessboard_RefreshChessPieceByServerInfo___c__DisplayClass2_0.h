#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBigTVMoveRunContext; }
namespace MoleMole::Config { class ConfigHollowChessboard_RefreshChessPieceByServerInfo; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10D09CE0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO___C__DISPLAYCLASS2_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x10D09D00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_RefreshChessPieceByServerInfo___c__DisplayClass2_0_TypeDefinitionIndex = 64414;

	class ConfigHollowChessboard_RefreshChessPieceByServerInfo___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase*>* endCallback; // 0x10
		::MoleMole::Config::ConfigHollowChessboard_RefreshChessPieceByServerInfo* __4__this; // 0x18
		::Class_5_A6F8D19602712D95* chessPiece; // 0x20
		::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVMoveRunContext* TVMovecontext; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_REFRESHCHESSPIECEBYSERVERINFO___C__DISPLAYCLASS2_0__RUN_B__0_OFFSET))(this);
		}
	};
}

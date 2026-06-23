#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ChessBoardChessAnimItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM_CUSTOMADDFUNCTION_OFFSET UNITYSDK_OFFSET(0x17D4CC40)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x17D4CB60)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4CCB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardChessAnim_TypeDefinitionIndex = 66735;

	class ConfigChessboardChessAnim : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* PivotCellKey; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::ChessBoardChessAnimItem*>* ChessBoardChessAnimGroup; // 0x20
		::System::Boolean UseSpecific; // 0x28
		::System::Boolean UseCustomPivot; // 0x29
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x2C
		::System::Single OverrideWaitTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::MoleMole::Config::ChessBoardChessAnimItem* CustomAddFunction()
		{
			return ((::MoleMole::Config::ChessBoardChessAnimItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCHESSANIM_CUSTOMADDFUNCTION_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ChessBoardIconAnimItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM_CUSTOMADDFUNCTION_OFFSET UNITYSDK_OFFSET(0x1485F7E0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1485F760)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1485F860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardIconAnim_TypeDefinitionIndex = 53090;

	class ConfigChessboardIconAnim : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ChessBoardIconAnimItem*>* ChessBoardIconAnimGroup; // 0x18
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x20
		::System::Single OverrideWaitTime; // 0x24
		::System::Boolean UseSpecific; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::MoleMole::Config::ChessBoardIconAnimItem* CustomAddFunction()
		{
			return ((::MoleMole::Config::ChessBoardIconAnimItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDICONANIM_CUSTOMADDFUNCTION_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGVIEWRANGECHANGECHESSBOARD_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1A35D370)
#define MOLEMOLE_CONFIG_CONFIGVIEWRANGECHANGECHESSBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35D430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewRangeChangeChessboard_TypeDefinitionIndex = 70505;

	class ConfigViewRangeChangeChessboard : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		// static const ::System::String* CHESSBOARD_NEW_UID_LIST; // 0x0
		// static const ::System::String* CHESSBOARD_REMOVED_UID_LIST; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWRANGECHANGECHESSBOARD__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWRANGECHANGECHESSBOARD_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"

class Class_1_D72537470FC2F779;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCLEARUIPOSTPROCESS_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BD54310)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDCLEARUIPOSTPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD543D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardClearUiPostProcess_TypeDefinitionIndex = 57927;

	class ConfigChessboardClearUiPostProcess : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* key; // 0x18
		::MoleMole::Config::ScreenEffectType type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCLEARUIPOSTPROCESS__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDCLEARUIPOSTPROCESS_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

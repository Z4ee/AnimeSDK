#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class Class_1_D72537470FC2F779;

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDENTERBATTLEPREVVIDEO_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B8F5760)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDENTERBATTLEPREVVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F5820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardEnterBattlePrevVideo_TypeDefinitionIndex = 46148;

	class ConfigChessboardEnterBattlePrevVideo : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDENTERBATTLEPREVVIDEO__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDENTERBATTLEPREVVIDEO_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}

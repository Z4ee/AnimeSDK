#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_GENERALVIRTUALPLAYBTNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1821BBF0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralVirtualPlayBtnContext_TypeDefinitionIndex = 40346;

	class GeneralVirtualPlayBtnContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath IconPath; // 0x28
		::MoleMole::LogicButtonInputType LogicButtonInputType; // 0x38

		::System::Void _ctor(::MoleMole::LogicButtonInputType logicButtonInputType, ::Foundation::AssetPath iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALVIRTUALPLAYBTNCONTEXT__CTOR_OFFSET))(this, logicButtonInputType, iconPath);
		}
	};
}

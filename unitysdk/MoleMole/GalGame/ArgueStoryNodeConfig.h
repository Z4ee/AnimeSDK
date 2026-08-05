#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class ArgueGeneralUIStateConfig; }
namespace MoleMole::GalGame { class ArgueSplitScreenMoveConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B17F00)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ArgueStoryNodeConfig_TypeDefinitionIndex = 53457;

	class ArgueStoryNodeConfig : public ::System::Object
	{
	public:
		::MoleMole::GalGame::ArgueSplitScreenMoveConfig* SplitScreenMoveConfig; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GalGame::ArgueGeneralUIStateConfig*>* UISwitchList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESTORYNODECONFIG__CTOR_OFFSET))(this);
		}
	};
}

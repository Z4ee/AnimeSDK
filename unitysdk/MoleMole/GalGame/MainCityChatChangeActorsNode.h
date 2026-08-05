#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class Class_1_2D5DADE6FF36AA79;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x144D94C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x144D9430)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatChangeActorsNode_TypeDefinitionIndex = 48099;

	class MainCityChatChangeActorsNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>* Params; // 0x18
		::System::String* TransformKey; // 0x20
		::System::Int32 TransitionID; // 0x28
		::System::Int32 TargetTag; // 0x2C
		::System::UInt32 CameraX; // 0x30
		::System::UInt32 CameraY; // 0x34
		::System::Boolean ResetCamera; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE__CTOR_OFFSET))(this);
		}

		::Class_1_2D5DADE6FF36AA79* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::Class_1_2D5DADE6FF36AA79*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}

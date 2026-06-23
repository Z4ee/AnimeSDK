#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A033220)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatScript_TypeDefinitionIndex = 85266;

	class MainCityChatScript : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatPlayableNodeBase*>*>* storySections; // 0x58
		::System::Int32 startPlayIndex; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSCRIPT__CTOR_OFFSET))(this);
		}
	};
}

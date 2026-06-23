#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::GalGame { class GalPlayableNodeBase; }
namespace MoleMole::GalGame { class GalPlayableSegment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x15129B30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalScript_TypeDefinitionIndex = 46007;

	class GalScript : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalPlayableNodeBase*>*>* storySections; // 0x58
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalPlayableSegment*>*>* storySegment; // 0x60
		::System::Int32 startPlayIndex; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* soundActions; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSCRIPT__CTOR_OFFSET))(this);
		}
	};
}

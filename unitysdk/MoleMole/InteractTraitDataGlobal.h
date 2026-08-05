#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/InteractantTagListEntry.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_INTERACTTRAITDATAGLOBAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF6CA0)

namespace MoleMole
{
	inline static constexpr unsigned int InteractTraitDataGlobal_TypeDefinitionIndex = 42112;

	class InteractTraitDataGlobal : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>* ZoneTagWhiteLists; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>* ZoneTagBlackLists; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* TagWhiteLists; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* TagBlackLists; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATAGLOBAL__CTOR_OFFSET))(this);
		}
	};
}

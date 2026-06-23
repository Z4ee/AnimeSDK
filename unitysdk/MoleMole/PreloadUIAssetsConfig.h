#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class PreloadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PRELOADUIASSETSCONFIG_REMOVEREPEATEDS_OFFSET UNITYSDK_OFFSET(0x19173DD0)
#define MOLEMOLE_PRELOADUIASSETSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19173FA0)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadUIAssetsConfig_TypeDefinitionIndex = 59103;

	class PreloadUIAssetsConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* BasicAssets; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* Additional01Assets; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* Additional02Assets; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADUIASSETSCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void RemoveRepeateds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADUIASSETSCONFIG_REMOVEREPEATEDS_OFFSET))(this);
		}
	};
}

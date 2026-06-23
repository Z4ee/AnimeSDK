#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_TAGLIBRARYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170CE760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TagLibraryConfig_TypeDefinitionIndex = 67702;

	class TagLibraryConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* TagLibrary; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* ZoneTagLibrary; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGLIBRARYCONFIG__CTOR_OFFSET))(this);
		}
	};
}

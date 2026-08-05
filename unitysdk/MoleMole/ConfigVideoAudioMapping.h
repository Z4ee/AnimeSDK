#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigVideoAudioMapping_VideoAudioEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGVIDEOAUDIOMAPPING_BUILDMAP_OFFSET UNITYSDK_OFFSET(0x1922C5C0)
#define MOLEMOLE_CONFIGVIDEOAUDIOMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1922C7E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigVideoAudioMapping_TypeDefinitionIndex = 40757;

	class ConfigVideoAudioMapping : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ConfigVideoAudioMapping_VideoAudioEntry*>* entries; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVIDEOAUDIOMAPPING__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigVideoAudioMapping_VideoAudioEntry*>* BuildMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigVideoAudioMapping_VideoAudioEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVIDEOAUDIOMAPPING_BUILDMAP_OFFSET))(this);
		}
	};
}

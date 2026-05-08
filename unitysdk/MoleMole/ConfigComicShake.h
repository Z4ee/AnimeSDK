#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigComicShakeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGCOMICSHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x153D5300)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigComicShake_TypeDefinitionIndex = 75852;

	class ConfigComicShake : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigComicShakeData*>* configShakeDictionary; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCOMICSHAKE__CTOR_OFFSET))(this);
		}
	};
}

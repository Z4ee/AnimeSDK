#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class LanguageVideo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGLANGUAGEVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3631F0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLanguageVideo_TypeDefinitionIndex = 55571;

	class ConfigLanguageVideo : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>* configVideos; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLANGUAGEVIDEO__CTOR_OFFSET))(this);
		}
	};
}

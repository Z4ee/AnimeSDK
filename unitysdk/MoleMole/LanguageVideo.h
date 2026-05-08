#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigVideo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_LANGUAGEVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x17818280)

namespace MoleMole
{
	inline static constexpr unsigned int LanguageVideo_TypeDefinitionIndex = 76404;

	class LanguageVideo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::MoleMole::ConfigVideo*>* configVideos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LANGUAGEVIDEO__CTOR_OFFSET))(this);
		}
	};
}

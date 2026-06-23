#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ConfigInfoGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_APPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BFB20)

namespace Foundation
{
	inline static constexpr unsigned int AppConfig_TypeDefinitionIndex = 8340;

	class AppConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::ConfigInfoGroup*>* InfoGroups; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_APPCONFIG__CTOR_OFFSET))(this);
		}
	};
}

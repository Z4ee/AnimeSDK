#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Internal/Singleton_1.h"

#define RICHTAP_RICHTAPMANAGER_ONAPPLICATIONAWAKEN_OFFSET UNITYSDK_OFFSET(0x1DE18C10)
#define RICHTAP_RICHTAPMANAGER_ONAPPLICATIONQUITTING_OFFSET UNITYSDK_OFFSET(0x1DE18E30)
#define RICHTAP_RICHTAPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE18EB0)

namespace RichTap
{
	inline static constexpr unsigned int RichtapManager_TypeDefinitionIndex = 38080;

	class RichtapManager : public ::RichTap::Internal::Singleton_1<::RichTap::RichtapManager*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_RICHTAPMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void OnApplicationAwaken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_RICHTAPMANAGER_ONAPPLICATIONAWAKEN_OFFSET))(this);
		}

		::System::Void OnApplicationQuitting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_RICHTAPMANAGER_ONAPPLICATIONQUITTING_OFFSET))(this);
		}
	};
}

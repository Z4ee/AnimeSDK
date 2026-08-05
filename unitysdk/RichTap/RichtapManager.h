#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Internal/Singleton_1.h"

#define RICHTAP_RICHTAPMANAGER_ONAPPLICATIONAWAKEN_OFFSET UNITYSDK_OFFSET(0x1F22C370)
#define RICHTAP_RICHTAPMANAGER_ONAPPLICATIONQUITTING_OFFSET UNITYSDK_OFFSET(0x1F22C590)
#define RICHTAP_RICHTAPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F22C610)

namespace RichTap
{
	inline static constexpr unsigned int RichtapManager_TypeDefinitionIndex = 38741;

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExDebug_ResourcesInfo.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMEXDEBUG_CRIATOMEXDEBUG_GETRESOURCESINFO_OFFSET UNITYSDK_OFFSET(0x11A130F0)
#define CRIWARE_CRIATOMEXDEBUG_GETRESOURCESINFO_OFFSET UNITYSDK_OFFSET(0x11A13070)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExDebug_TypeDefinitionIndex = 31193;

	class CriAtomExDebug : public ::System::Object
	{
	public:
		static ::System::Void GetResourcesInfo(::CriWare::CriAtomExDebug_ResourcesInfo& resourcesInfo)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExDebug_ResourcesInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXDEBUG_GETRESOURCESINFO_OFFSET))(resourcesInfo);
		}

		static ::System::Void criAtomExDebug_GetResourcesInfo(::CriWare::CriAtomExDebug_ResourcesInfo& resourcesInfo)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExDebug_ResourcesInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXDEBUG_CRIATOMEXDEBUG_GETRESOURCESINFO_OFFSET))(resourcesInfo);
		}
	};
}

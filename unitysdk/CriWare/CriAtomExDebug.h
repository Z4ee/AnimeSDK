#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExDebug_ResourcesInfo.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOMEXDEBUG_CRIATOMEXDEBUG_GETRESOURCESINFO_OFFSET UNITYSDK_OFFSET(0x164C5CA0)
#define CRIWARE_CRIATOMEXDEBUG_GETRESOURCESINFO_OFFSET UNITYSDK_OFFSET(0x164C5C20)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExDebug_TypeDefinitionIndex = 38878;

	class CriAtomExDebug : public ::System::Object
	{
	public:
		static ::System::Void GetResourcesInfo(::CriWare::CriAtomExDebug_ResourcesInfo& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExDebug_ResourcesInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXDEBUG_GETRESOURCESINFO_OFFSET))(a1);
		}

		static ::System::Void criAtomExDebug_GetResourcesInfo(::CriWare::CriAtomExDebug_ResourcesInfo& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExDebug_ResourcesInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXDEBUG_CRIATOMEXDEBUG_GETRESOURCESINFO_OFFSET))(a1);
		}
	};
}

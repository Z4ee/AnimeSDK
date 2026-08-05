#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLOD__CTOR_OFFSET UNITYSDK_OFFSET(0x16C432E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardLOD_TypeDefinitionIndex = 73252;

	class ConfigHollowChessboardLOD : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean IsOnlyPathProxyMode; // 0x58
		::System::Boolean EnableProxyGIOptimize; // 0x59
		::System::Single EnableProxyGIDistance; // 0x5C
		::System::Single DisableProxyGIDistance; // 0x60
		::System::Boolean EnableCullerMask; // 0x64
		::System::Single UpCullerMaskZDepthOffset; // 0x68
		::System::Single DownCullerMaskZDepthOffset; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDLOD__CTOR_OFFSET))(this);
		}
	};
}

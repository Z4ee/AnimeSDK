#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExOutputPort_Type.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXOUTPUTPORT_CONFIG_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1B78F1B0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExOutputPort_Config_TypeDefinitionIndex = 37895;

	struct alignas(8) CriAtomExOutputPort_Config
	{
		::System::String* name; // 0x10
		::CriWare::CriAtomExOutputPort_Type type; // 0x18
		::System::UInt32 maxIgnoredCategories; // 0x1C

		static ::CriWare::CriAtomExOutputPort_Config Default()
		{
			return ((::CriWare::CriAtomExOutputPort_Config(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXOUTPUTPORT_CONFIG_DEFAULT_OFFSET))();
		}
	};
}

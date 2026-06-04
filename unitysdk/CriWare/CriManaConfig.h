#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriManaConfig_PCH264PlaybackConfig; }
namespace CriWare { class CriManaConfig_VitaH264PlaybackConfig; }
namespace CriWare { class CriManaConfig_WebGLConfig; }

#define CRIWARE_CRIMANACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x146D5810)

namespace CriWare
{
	inline static constexpr unsigned int CriManaConfig_TypeDefinitionIndex = 37207;

	class CriManaConfig : public ::System::Object
	{
	public:
		::System::Int32 numberOfDecoders; // 0x10
		::System::Int32 numberOfMaxEntries; // 0x14
		::System::Boolean graphicsMultiThreaded; // 0x18
		::CriWare::CriManaConfig_PCH264PlaybackConfig* pcH264PlaybackConfig; // 0x20
		::CriWare::CriManaConfig_VitaH264PlaybackConfig* vitaH264PlaybackConfig; // 0x28
		::CriWare::CriManaConfig_WebGLConfig* webglConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANACONFIG__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"

#define RPGCAMERA_CAMERASTATEPOSTMODULE_COLLECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x85BE080)
#define RPGCAMERA_CAMERASTATEPOSTMODULE_COLLECT_OFFSET UNITYSDK_OFFSET(0x85BE070)
#define RPGCAMERA_CAMERASTATEPOSTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x85BE0B0)
#define RPGCAMERA_CAMERASTATEPOSTMODULE_TICKINTERNAL_OFFSET UNITYSDK_OFFSET(0x85BE0A0)
#define RPGCAMERA_CAMERASTATEPOSTMODULE_TICK_OFFSET UNITYSDK_OFFSET(0x85BE090)
#define RPGCAMERA_CAMERASTATEPOSTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x85BE0C0)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStatePostModule_TypeDefinitionIndex = 35122;

	class CameraStatePostModule : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Collect(::RPGCamera::CameraStateData& data)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStateData&))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_COLLECT_OFFSET))(this, data);
		}

		::System::Void CollectInternal(::RPGCamera::CameraStateData& data)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStateData&))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_COLLECTINTERNAL_OFFSET))(this, data);
		}

		::System::Void Tick(::System::Single deltaTime, ::RPGCamera::CameraStateData& data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPGCamera::CameraStateData&))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_TICK_OFFSET))(this, deltaTime, data);
		}

		::System::Void TickInternal(::System::Single deltaTime, ::RPGCamera::CameraStateData& data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPGCamera::CameraStateData&))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_TICKINTERNAL_OFFSET))(this, deltaTime, data);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTMODULE_DISPOSE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_SURFACECONNECTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xC25DF30)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int SurfaceConnectIcon_SurfaceConnectTarget_TypeDefinitionIndex = 69722;

	class SurfaceConnectIcon_SurfaceConnectTarget : public ::System::Object
	{
	public:
		::System::UInt32 SurfaceID; // 0x10
		::System::UInt32 ContainerGroupID; // 0x14
		::System::UInt32 ContainerInstanceID; // 0x18
		::System::UInt32 EntityID; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_SURFACECONNECTTARGET__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}

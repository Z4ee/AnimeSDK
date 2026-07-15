#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CRPVOLUMETRICFOGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBD8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CRPVolumetricFogSettings_TypeDefinitionIndex = 64924;

	class CRPVolumetricFogSettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Int32 PixelsPerCell; // 0x14
		::System::Int32 DepthSlices; // 0x18
		::System::Int32 Max3DTextureWidth; // 0x1C
		::System::Int32 Max3DTextureHeight; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CRPVOLUMETRICFOGSETTINGS__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_DECALIRIMODULEDATA_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCC98FD0)
#define RPG_CLIENT_DECALIRIMODULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCC99010)

namespace RPG::Client
{
	inline static constexpr unsigned int DecalIRIModuleData_TypeDefinitionIndex = 70848;

	class DecalIRIModuleData : public ::RPG::Client::TAMonoBase
	{
	public:
		::System::Int32 AlbedoMaskAtlasID; // 0x18
		::System::Int32 NormalMetalSmoothAtlasID; // 0x1C
		::UnityEngine::Vector4 TilingOffset; // 0x20
		::System::Single AlphaTestThreshold; // 0x30
		::System::Single NormalScale; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALIRIMODULEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALIRIMODULEDATA_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define RPG_CLIENT_CUSTOMBOUNDSPROVIDERMONOBASE_GET_ARTBOUNDFULL_OFFSET UNITYSDK_OFFSET(0xB72A160)
#define RPG_CLIENT_CUSTOMBOUNDSPROVIDERMONOBASE_GET_ARTBOUND_OFFSET UNITYSDK_OFFSET(0xB72A0B0)
#define RPG_CLIENT_CUSTOMBOUNDSPROVIDERMONOBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB72A2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomBoundsProviderMonoBase_TypeDefinitionIndex = 66273;

	class CustomBoundsProviderMonoBase : public ::RPG::Client::TAMonoBase
	{
	public:
		::UnityEngine::Bounds _CustomBounds; // 0x18
		::System::Boolean _ApplyRootScale; // 0x30
		::System::Boolean _ApplyRootPos; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBOUNDSPROVIDERMONOBASE__CTOR_OFFSET))(this);
		}

		::System::Single get_ArtBound()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBOUNDSPROVIDERMONOBASE_GET_ARTBOUND_OFFSET))(this);
		}

		::UnityEngine::Bounds get_ArtBoundFull()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBOUNDSPROVIDERMONOBASE_GET_ARTBOUNDFULL_OFFSET))(this);
		}
	};
}

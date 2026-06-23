#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_GETAVATARSKINBANNERSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1912D090)
#define MOLEMOLE_GETAVATARSKINBANNERSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1912D0E0)
#define MOLEMOLE_GETAVATARSKINBANNERSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1912D0A0)

namespace MoleMole
{
	inline static constexpr unsigned int GetAvatarSkinBannerShow_TypeDefinitionIndex = 58362;

	class GetAvatarSkinBannerShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 SkinID; // 0x28

		::System::Void _ctor(::System::Int32 skinID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GETAVATARSKINBANNERSHOW__CTOR_OFFSET))(this, skinID);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETAVATARSKINBANNERSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETAVATARSKINBANNERSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}

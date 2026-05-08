#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_GETAVATARSKINPACKAGEBANNERSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x154281A0)
#define MOLEMOLE_GETAVATARSKINPACKAGEBANNERSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x154281F0)
#define MOLEMOLE_GETAVATARSKINPACKAGEBANNERSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x154281B0)

namespace MoleMole
{
	inline static constexpr unsigned int GetAvatarSkinPackageBannerShow_TypeDefinitionIndex = 77013;

	class GetAvatarSkinPackageBannerShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 PackageID; // 0x28

		::System::Void _ctor(::System::Int32 packageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GETAVATARSKINPACKAGEBANNERSHOW__CTOR_OFFSET))(this, packageID);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETAVATARSKINPACKAGEBANNERSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETAVATARSKINPACKAGEBANNERSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}

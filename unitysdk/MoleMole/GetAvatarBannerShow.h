#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_GETAVATARBANNERSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A033A90)
#define MOLEMOLE_GETAVATARBANNERSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1A033AE0)
#define MOLEMOLE_GETAVATARBANNERSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A033AA0)

namespace MoleMole
{
	inline static constexpr unsigned int GetAvatarBannerShow_TypeDefinitionIndex = 79266;

	class GetAvatarBannerShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 AvatarID; // 0x28

		::System::Void _ctor(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GETAVATARBANNERSHOW__CTOR_OFFSET))(this, avatarID);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETAVATARBANNERSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETAVATARBANNERSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}

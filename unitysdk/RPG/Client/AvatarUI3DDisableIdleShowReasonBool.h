#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUI3DDisableIdleShowReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_AVATARUI3DDISABLEIDLESHOWREASONBOOL_ISNEEDDISABLE_OFFSET UNITYSDK_OFFSET(0x19ECF910)
#define RPG_CLIENT_AVATARUI3DDISABLEIDLESHOWREASONBOOL_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x19ECF960)
#define RPG_CLIENT_AVATARUI3DDISABLEIDLESHOWREASONBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECF900)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarUI3DDisableIdleShowReasonBool_TypeDefinitionIndex = 62569;

	class AvatarUI3DDisableIdleShowReasonBool : public ::System::Object
	{
	public:
		::RPG::Client::ReasonBool_1<::RPG::Client::AvatarUI3DDisableIdleShowReason> _ReasonBool; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUI3DDISABLEIDLESHOWREASONBOOL__CTOR_OFFSET))(this);
		}

		::System::Boolean IsNeedDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUI3DDISABLEIDLESHOWREASONBOOL_ISNEEDDISABLE_OFFSET))(this);
		}

		::System::Void SetDisable(::System::Boolean a1, ::RPG::Client::AvatarUI3DDisableIdleShowReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::AvatarUI3DDisableIdleShowReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUI3DDISABLEIDLESHOWREASONBOOL_SETDISABLE_OFFSET))(this, a1, a2);
		}
	};
}

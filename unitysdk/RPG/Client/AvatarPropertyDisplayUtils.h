#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_AVATARPROPERTYDISPLAYUTILS_FORMATDISPLAYDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x18668AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPropertyDisplayUtils_TypeDefinitionIndex = 60092;

	class AvatarPropertyDisplayUtils : public ::System::Object
	{
	public:
		static ::System::String* FormatDisplayDataByType(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROPERTYDISPLAYUTILS_FORMATDISPLAYDATABYTYPE_OFFSET))(a1, a2);
		}
	};
}

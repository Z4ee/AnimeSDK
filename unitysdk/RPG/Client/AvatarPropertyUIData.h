#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_AVATARPROPERTYUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC83C310)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPropertyUIData_TypeDefinitionIndex = 62547;

	class AvatarPropertyUIData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* Num; // 0x18
		::System::String* AddNum; // 0x20
		::System::Boolean NumOverrideAsSecret; // 0x28
		::RPG::Client::TextID Title; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROPERTYUIDATA__CTOR_OFFSET))(this);
		}
	};
}

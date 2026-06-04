#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MONSTERAVATARPROPERTYUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC198E20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterAvatarPropertyUIData_TypeDefinitionIndex = 58203;

	class MonsterAvatarPropertyUIData : public ::System::Object
	{
	public:
		::System::String* Num; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* AddNum; // 0x20
		::RPG::Client::TextID Title; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERAVATARPROPERTYUIDATA__CTOR_OFFSET))(this);
		}
	};
}

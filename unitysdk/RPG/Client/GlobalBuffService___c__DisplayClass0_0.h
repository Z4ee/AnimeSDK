#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LineUpCharacter; }

#define RPG_CLIENT_GLOBALBUFFSERVICE___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA42F220)
#define RPG_CLIENT_GLOBALBUFFSERVICE___C__DISPLAYCLASS0_0__GETAVATARFORGLOBALBUFFPROVIDER_B__0_OFFSET UNITYSDK_OFFSET(0xA42F240)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalBuffService___c__DisplayClass0_0_TypeDefinitionIndex = 57846;

	class GlobalBuffService___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALBUFFSERVICE___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAvatarForGlobalBuffProvider_b__0(::RPG::GameCore::LineUpCharacter* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALBUFFSERVICE___C__DISPLAYCLASS0_0__GETAVATARFORGLOBALBUFFPROVIDER_B__0_OFFSET))(this, x);
		}
	};
}

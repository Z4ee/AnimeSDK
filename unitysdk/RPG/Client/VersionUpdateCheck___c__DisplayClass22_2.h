#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class VersionUpdateCheck___c__DisplayClass22_0; }
namespace System { class String; }

#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_2__CTOR_OFFSET UNITYSDK_OFFSET(0xE3FDB70)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_2__STARTLOCALASSETVERIFY_B__4_OFFSET UNITYSDK_OFFSET(0xE3FDBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateCheck___c__DisplayClass22_2_TypeDefinitionIndex = 61355;

	class VersionUpdateCheck___c__DisplayClass22_2 : public ::System::Object
	{
	public:
		::System::String* message; // 0x10
		::RPG::Client::VersionUpdateCheck___c__DisplayClass22_0* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_2__CTOR_OFFSET))(this);
		}

		::System::Void _StartLocalAssetVerify_b__4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_2__STARTLOCALASSETVERIFY_B__4_OFFSET))(this, a1);
		}
	};
}

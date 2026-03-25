#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class VersionUpdateCheck___c__DisplayClass22_0; }
namespace System { class String; }

#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA7686B0)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_1__STARTLOCALASSETVERIFY_B__2_OFFSET UNITYSDK_OFFSET(0xA768DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateCheck___c__DisplayClass22_1_TypeDefinitionIndex = 49668;

	class VersionUpdateCheck___c__DisplayClass22_1 : public ::System::Object
	{
	public:
		::RPG::Client::VersionUpdateCheck___c__DisplayClass22_0* CS___8__locals1; // 0x10
		::System::String* message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_1__CTOR_OFFSET))(this);
		}

		::System::Void _StartLocalAssetVerify_b__2(::System::Boolean isSucceed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_1__STARTLOCALASSETVERIFY_B__2_OFFSET))(this, isSucceed);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_718B8238EA10D3FF;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE437470)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__STARTLOCALASSETVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0xE4380D0)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__STARTLOCALASSETVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0xE438130)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__STARTLOCALASSETVERIFY_B__3_OFFSET UNITYSDK_OFFSET(0xE4388A0)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateCheck___c__DisplayClass22_0_TypeDefinitionIndex = 61259;

	class VersionUpdateCheck___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_718B8238EA10D3FF*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartLocalAssetVerify_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__STARTLOCALASSETVERIFY_B__0_OFFSET))(this, a1);
		}

		::System::Void _StartLocalAssetVerify_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__STARTLOCALASSETVERIFY_B__1_OFFSET))(this);
		}

		::System::Void _StartLocalAssetVerify_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__STARTLOCALASSETVERIFY_B__3_OFFSET))(this);
		}
	};
}

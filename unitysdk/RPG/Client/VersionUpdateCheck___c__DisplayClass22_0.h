#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D6D8D891CDDE5DED;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB46DAF0)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__STARTLOCALASSETVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0xB46E750)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__STARTLOCALASSETVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0xB46E7B0)
#define RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__STARTLOCALASSETVERIFY_B__3_OFFSET UNITYSDK_OFFSET(0xB46EE90)

namespace RPG::Client
{
	inline static constexpr unsigned int VersionUpdateCheck___c__DisplayClass22_0_TypeDefinitionIndex = 56488;

	class VersionUpdateCheck___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_D6D8D891CDDE5DED*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartLocalAssetVerify_b__0(::System::Boolean isSucceed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VERSIONUPDATECHECK___C__DISPLAYCLASS22_0__STARTLOCALASSETVERIFY_B__0_OFFSET))(this, isSucceed);
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

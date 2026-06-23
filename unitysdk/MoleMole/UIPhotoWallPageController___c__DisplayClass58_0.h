#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F13920)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS58_0__GETFRIENDNETWORKDATA_B__0_OFFSET UNITYSDK_OFFSET(0x15F13930)
#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS58_0__GETFRIENDNETWORKDATA_B__1_OFFSET UNITYSDK_OFFSET(0x15F13A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass58_0_TypeDefinitionIndex = 52435;

	class UIPhotoWallPageController___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Boolean, ::Class_1_57F7F2BF8C55D6B6*>* onGet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetFriendNetworkData_b__0(::Class_1_57F7F2BF8C55D6B6* friend_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS58_0__GETFRIENDNETWORKDATA_B__0_OFFSET))(this, friend_);
		}

		::System::Void _GetFriendNetworkData_b__1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS58_0__GETFRIENDNETWORKDATA_B__1_OFFSET))(this, _);
		}
	};
}

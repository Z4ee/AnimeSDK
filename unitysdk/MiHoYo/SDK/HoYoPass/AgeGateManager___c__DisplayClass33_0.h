#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::HoYoPass { class AgeGateManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B94AAF0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS33_0__SHOWAGEAPPEALCONFIRMDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x1B94C690)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS33_0__SHOWAGEAPPEALCONFIRMDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x1B94C700)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS33_0__SHOWAGEAPPEALCONFIRMDIALOG_B__2_OFFSET UNITYSDK_OFFSET(0x1B94C8F0)
#define MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS33_0__SHOWAGEAPPEALCONFIRMDIALOG_B__3_OFFSET UNITYSDK_OFFSET(0x1B94C880)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass33_0_TypeDefinitionIndex = 8226;

	class AgeGateManager___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>* __9__3; // 0x10
		::MiHoYo::SDK::JSONObject* cbody; // 0x18
		::MiHoYo::SDK::HoYoPass::AgeGateManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAgeAppealConfirmDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS33_0__SHOWAGEAPPEALCONFIRMDIALOG_B__0_OFFSET))(this);
		}

		::System::Void _ShowAgeAppealConfirmDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS33_0__SHOWAGEAPPEALCONFIRMDIALOG_B__1_OFFSET))(this);
		}

		::System::Void _ShowAgeAppealConfirmDialog_b__3(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS33_0__SHOWAGEAPPEALCONFIRMDIALOG_B__3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ShowAgeAppealConfirmDialog_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_AGEGATEMANAGER___C__DISPLAYCLASS33_0__SHOWAGEAPPEALCONFIRMDIALOG_B__2_OFFSET))(this);
		}
	};
}

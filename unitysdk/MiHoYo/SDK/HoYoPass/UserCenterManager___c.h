#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::HoYoPass { class UserCenterManager_UserCenterJsBridge; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEA99B0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA99F0)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__REGISTERRESULTHANDLER_B__15_2_OFFSET UNITYSDK_OFFSET(0x1AEA9A00)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager___c_TypeDefinitionIndex = 8235;

	class UserCenterManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::UserCenterManager_UserCenterJsBridge** StaticGet___9__15_2()
		{
			return (::MiHoYo::SDK::HoYoPass::UserCenterManager_UserCenterJsBridge**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager___c_TypeDefinitionIndex)->GetStaticField(0x148F0);
		}
		static ::MiHoYo::SDK::HoYoPass::UserCenterManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::HoYoPass::UserCenterManager___c**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager___c_TypeDefinitionIndex)->GetStaticField(0x148F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterResultHandler_b__15_2(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__REGISTERRESULTHANDLER_B__15_2_OFFSET))(this, a1, a2);
		}
	};
}

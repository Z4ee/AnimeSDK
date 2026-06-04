#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_WIN_USERCENTERMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182D8720)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182D8760)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER___C__ONGETUNIWEBVIEWMESSAGE_B__16_0_OFFSET UNITYSDK_OFFSET(0x182D8770)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int UserCenterManager___c_TypeDefinitionIndex = 9132;

	class UserCenterManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager___c_TypeDefinitionIndex)->GetStaticField(0x7F0);
		}
		static ::MiHoYo::SDK::Win::UserCenterManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::UserCenterManager___c**)Il2CppClass::FromTypeDefinitionIndex(UserCenterManager___c_TypeDefinitionIndex)->GetStaticField(0x7F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetUniWebViewMessage_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER___C__ONGETUNIWEBVIEWMESSAGE_B__16_0_OFFSET))(this);
		}
	};
}

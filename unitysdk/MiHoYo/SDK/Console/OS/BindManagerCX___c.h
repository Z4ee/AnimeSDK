#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7BB580)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BB5C0)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__REACTIVATEACCOUNT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B7BB5D0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManagerCX___c_TypeDefinitionIndex = 9015;

	class BindManagerCX___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::OS::BindManagerCX___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Console::OS::BindManagerCX___c**)Il2CppClass::FromTypeDefinitionIndex(BindManagerCX___c_TypeDefinitionIndex)->GetStaticField(0xCD30);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(BindManagerCX___c_TypeDefinitionIndex)->GetStaticField(0xCD38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__CTOR_OFFSET))(this);
		}

		::System::Void _ReactivateAccount_b__6_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__REACTIVATEACCOUNT_B__6_0_OFFSET))(this, a1);
		}
	};
}

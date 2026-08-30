#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2552B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS6_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1A255880)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerCXHandheld___c__DisplayClass6_0_TypeDefinitionIndex = 8701;

	class LoginManagerCXHandheld___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS6_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, a1);
		}
	};
}

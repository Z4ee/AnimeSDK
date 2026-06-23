#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5734A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__DISPLAYCLASS2_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1C5734B0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerCXHandheld___c__DisplayClass2_0_TypeDefinitionIndex = 20488;

	class BindManagerCXHandheld___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERCXHANDHELD___C__DISPLAYCLASS2_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, accessToken);
		}
	};
}

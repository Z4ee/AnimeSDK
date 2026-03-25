#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_BINDMANAGERPS___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F59770)
#define MIHOYO_SDK_PS_BINDMANAGERPS___C__DISPLAYCLASS23_0__UPDATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x15F59CF0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int BindManagerPS___c__DisplayClass23_0_TypeDefinitionIndex = 7511;

	class BindManagerPS___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::String* clientId; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateAccessToken_b__0(::System::Int32 retcode, ::System::String* authCode, ::System::Int32 issuerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDMANAGERPS___C__DISPLAYCLASS23_0__UPDATEACCESSTOKEN_B__0_OFFSET))(this, retcode, authCode, issuerId);
		}
	};
}

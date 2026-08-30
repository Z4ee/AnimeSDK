#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BabelfishConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A82A50)
#define MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0__GETCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x16A82FA0)
#define MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0__GETCONFIG_B__1_OFFSET UNITYSDK_OFFSET(0x16A83D90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BabelfishClient___c__DisplayClass7_0_TypeDefinitionIndex = 47035;

	class BabelfishClient___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::BabelfishConfig*>* onSuccess; // 0x10
		::System::Action_2<::System::Int32, ::System::String*>* onError; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetConfig_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0__GETCONFIG_B__0_OFFSET))(this, a1);
		}

		::System::Void _GetConfig_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BABELFISHCLIENT___C__DISPLAYCLASS7_0__GETCONFIG_B__1_OFFSET))(this);
		}
	};
}

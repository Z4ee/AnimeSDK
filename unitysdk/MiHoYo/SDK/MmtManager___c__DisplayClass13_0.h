#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MmtManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_MMTMANAGER___C__DISPLAYCLASS13_0__CREATEMMT_B__0_OFFSET UNITYSDK_OFFSET(0x15F36B00)
#define MIHOYO_SDK_MMTMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F364E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MmtManager___c__DisplayClass13_0_TypeDefinitionIndex = 7031;

	class MmtManager___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::System::String*>* callback; // 0x10
		::System::String* actionType; // 0x18
		::MiHoYo::SDK::MmtManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateMmt_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER___C__DISPLAYCLASS13_0__CREATEMMT_B__0_OFFSET))(this, response);
		}
	};
}

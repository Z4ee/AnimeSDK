#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MmtManager___c__DisplayClass13_1; }
namespace System { class String; }

#define MIHOYO_SDK_MMTMANAGER___C__DISPLAYCLASS13_2__CREATEMMT_B__1_OFFSET UNITYSDK_OFFSET(0x1B9A4590)
#define MIHOYO_SDK_MMTMANAGER___C__DISPLAYCLASS13_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A4440)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MmtManager___c__DisplayClass13_2_TypeDefinitionIndex = 7996;

	class MmtManager___c__DisplayClass13_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MmtManager___c__DisplayClass13_1* CS___8__locals2; // 0x10
		::System::DateTime timeStart; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER___C__DISPLAYCLASS13_2__CTOR_OFFSET))(this);
		}

		::System::Void _CreateMmt_b__1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER___C__DISPLAYCLASS13_2__CREATEMMT_B__1_OFFSET))(this, a1, a2);
		}
	};
}

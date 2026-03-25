#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MmtManager_CheckResultModel; }
namespace MiHoYo::SDK { class MmtManager___c__DisplayClass13_0; }

#define MIHOYO_SDK_MMTMANAGER___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15F37430)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MmtManager___c__DisplayClass13_1_TypeDefinitionIndex = 7032;

	class MmtManager___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MmtManager_CheckResultModel* resultModel; // 0x10
		::MiHoYo::SDK::MmtManager___c__DisplayClass13_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}
	};
}

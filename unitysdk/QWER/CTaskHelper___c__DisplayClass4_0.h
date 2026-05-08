#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/STask.h"
#include "unitysdk/System/Object.h"

namespace QWER { class CTimer; }

#define QWER_CTASKHELPER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8B0D0)
#define QWER_CTASKHELPER___C__DISPLAYCLASS4_0__DELAY_B__0_OFFSET UNITYSDK_OFFSET(0x1BE8B0E0)

namespace QWER
{
	inline static constexpr unsigned int CTaskHelper___c__DisplayClass4_0_TypeDefinitionIndex = 85873;

	class CTaskHelper___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::QWER::STask ta; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Delay_b__0(::QWER::CTimer* _)
		{
			return ((::System::Void(*)(::PVOID, ::QWER::CTimer*))((::PBYTE)hIl2Cpp + QWER_CTASKHELPER___C__DISPLAYCLASS4_0__DELAY_B__0_OFFSET))(this, _);
		}
	};
}

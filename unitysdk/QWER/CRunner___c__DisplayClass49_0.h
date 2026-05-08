#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/QWER/STask.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define QWER_CRUNNER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE88CC0)
#define QWER_CRUNNER___C__DISPLAYCLASS49_0__POST_B__0_OFFSET UNITYSDK_OFFSET(0x1BE88E10)

namespace QWER
{
	inline static constexpr unsigned int CRunner___c__DisplayClass49_0_TypeDefinitionIndex = 85852;

	class CRunner___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::QWER::STask ta; // 0x10
		::System::Action* cbAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QWER_CRUNNER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _Post_b__0(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + QWER_CRUNNER___C__DISPLAYCLASS49_0__POST_B__0_OFFSET))(this, state);
		}
	};
}

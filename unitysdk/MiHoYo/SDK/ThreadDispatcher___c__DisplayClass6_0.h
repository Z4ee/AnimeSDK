#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_THREADDISPATCHER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1712E530)
#define MIHOYO_SDK_THREADDISPATCHER___C__DISPLAYCLASS6_0__RUNASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1712E690)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThreadDispatcher___c__DisplayClass6_0_TypeDefinitionIndex = 7986;

	class ThreadDispatcher___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RunAsync_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THREADDISPATCHER___C__DISPLAYCLASS6_0__RUNASYNC_B__0_OFFSET))(this, a1);
		}
	};
}

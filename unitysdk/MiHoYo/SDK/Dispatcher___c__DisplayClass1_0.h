#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_DISPATCHER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8D00810)
#define MIHOYO_SDK_DISPATCHER___C__DISPLAYCLASS1_0__RUNASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x8D00F50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dispatcher___c__DisplayClass1_0_TypeDefinitionIndex = 42898;

	class Dispatcher___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _RunAsync_b__0(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER___C__DISPLAYCLASS1_0__RUNASYNC_B__0_OFFSET))(this, o);
		}
	};
}

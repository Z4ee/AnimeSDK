#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MyLogger; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE7C70)
#define FOUNDATION_MYLOGGER___C__DISPLAYCLASS29_0__DRAWSKELETON_B__0_OFFSET UNITYSDK_OFFSET(0x1BFE7C80)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger___c__DisplayClass29_0_TypeDefinitionIndex = 7926;

	class MyLogger___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::Foundation::MyLogger* __4__this; // 0x10
		::UnityEngine::Transform* transform; // 0x18
		::System::Boolean drawTransforms; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawSkeleton_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER___C__DISPLAYCLASS29_0__DRAWSKELETON_B__0_OFFSET))(this);
		}
	};
}

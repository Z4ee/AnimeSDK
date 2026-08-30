#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/InvalidOperationException.h"

namespace System { class Exception; }
namespace System { class String; }

#define CYSHARP_THREADING_TASKS_CHANNELCLOSEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA4E970)
#define CYSHARP_THREADING_TASKS_CHANNELCLOSEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EA4E9E0)
#define CYSHARP_THREADING_TASKS_CHANNELCLOSEDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1EA4EA90)
#define CYSHARP_THREADING_TASKS_CHANNELCLOSEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4E8D0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ChannelClosedException_TypeDefinitionIndex = 42560;

	class ChannelClosedException : public ::System::InvalidOperationException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CHANNELCLOSEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CHANNELCLOSEDEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CHANNELCLOSEDEXCEPTION__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_CHANNELCLOSEDEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}
	};
}

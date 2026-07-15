#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define HDG_RDTDISPATCHER_CLEAR_OFFSET UNITYSDK_OFFSET(0x15339C40)
#define HDG_RDTDISPATCHER_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x15348180)
#define HDG_RDTDISPATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1533ABB0)
#define HDG_RDTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1533B150)

namespace Hdg
{
	inline static constexpr unsigned int rdtDispatcher_TypeDefinitionIndex = 45175;

	class rdtDispatcher : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Action*>* m_callbacks; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTDISPATCHER__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTDISPATCHER_CLEAR_OFFSET))(this);
		}

		::System::Void Enqueue(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HDG_RDTDISPATCHER_ENQUEUE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTDISPATCHER_UPDATE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ICoroutineGroupController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_COROUTINEUTILS_INCONTROLCOROUTINEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC12340)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineUtils_InControlCoroutineGroup_TypeDefinitionIndex = 33424;

	class CoroutineUtils_InControlCoroutineGroup : public ::System::Object
	{
	public:
		::RPG::Client::ICoroutineGroupController* Ctrl; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* CoroutineList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEUTILS_INCONTROLCOROUTINEGROUP__CTOR_OFFSET))(this);
		}
	};
}

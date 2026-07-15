#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRF::Service { template <typename T1, typename T2> class SRSceneServiceBase_2; }

namespace SRF::Service
{
	inline static constexpr unsigned int SRSceneServiceBase_2__LoadCoroutine_d__11_TypeDefinitionIndex = 33978;

	template <typename T, typename TImpl>
	class SRSceneServiceBase_2__LoadCoroutine_d__11 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		::SRF::Service::SRSceneServiceBase_2<T, TImpl>* __4__this; // 0x0
	};
}

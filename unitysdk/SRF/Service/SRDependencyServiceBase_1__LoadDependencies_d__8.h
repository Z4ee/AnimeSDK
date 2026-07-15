#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRF::Service { class IAsyncService; }
namespace SRF::Service { template <typename T> class SRDependencyServiceBase_1; }
namespace System { class Type; }

namespace SRF::Service
{
	inline static constexpr unsigned int SRDependencyServiceBase_1__LoadDependencies_d__8_TypeDefinitionIndex = 33976;

	template <typename T>
	class SRDependencyServiceBase_1__LoadDependencies_d__8 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		::SRF::Service::SRDependencyServiceBase_1<T>* __4__this; // 0x0
		::Il2CppArray<::System::Type*>* __7__wrap1; // 0x0
		::System::Int32 __7__wrap2; // 0x0
		::SRF::Service::IAsyncService* _a_5__4; // 0x0
	};
}

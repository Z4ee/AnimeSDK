#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Object; }

namespace SRF::Service
{
	inline static constexpr unsigned int SRDependencyServiceBase_1_TypeDefinitionIndex = 33975;

	template <typename T>
	class SRDependencyServiceBase_1 : public ::SRF::Service::SRServiceBase_1<T>
	{
	public:
		::System::Boolean _isLoaded; // 0x0
	};
}

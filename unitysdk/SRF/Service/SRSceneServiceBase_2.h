#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/Service/SRServiceBase_1.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Object; }

namespace SRF::Service
{
	inline static constexpr unsigned int SRSceneServiceBase_2_TypeDefinitionIndex = 33977;

	template <typename T, typename TImpl>
	class SRSceneServiceBase_2 : public ::SRF::Service::SRServiceBase_1<T>
	{
	public:
		TImpl _rootObject; // 0x0
	};
}

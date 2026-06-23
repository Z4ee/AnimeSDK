#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class Dict_1_LessOrEqual; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class Dict_1_Node; }

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int Dict_1_TypeDefinitionIndex = 28417;

	template <typename TValue>
	class Dict_1 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Dict_1_LessOrEqual<TValue>* _leq; // 0x0
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Dict_1_Node<TValue>* _head; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class Dict_1_Node; }

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int Dict_1_Node_TypeDefinitionIndex = 29022;

	template <typename TValue>
	class Dict_1_Node : public ::System::Object
	{
	public:
		TValue _key; // 0x0
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Dict_1_Node<TValue>* _prev; // 0x0
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Dict_1_Node<TValue>* _next; // 0x0
	};
}

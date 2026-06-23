#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/PQHandle.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class PriorityHeap_1; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class PriorityHeap_1_LessOrEqual; }

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int PriorityQueue_1_TypeDefinitionIndex = 28433;

	template <typename TValue>
	class PriorityQueue_1 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::PriorityHeap_1_LessOrEqual<TValue>* _leq; // 0x0
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::PriorityHeap_1<TValue>* _heap; // 0x0
		::Il2CppArray<TValue>* _keys; // 0x0
		::Il2CppArray<::System::Int32>* _order; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _max; // 0x0
		::System::Boolean _initialized; // 0x0
	};
}

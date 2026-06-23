#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/PQHandle.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class PriorityHeap_1_HandleElem; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class PriorityHeap_1_LessOrEqual; }

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int PriorityHeap_1_TypeDefinitionIndex = 28430;

	template <typename TValue>
	class PriorityHeap_1 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::PriorityHeap_1_LessOrEqual<TValue>* _leq; // 0x0
		::Il2CppArray<::System::Int32>* _nodes; // 0x0
		::Il2CppArray<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::PriorityHeap_1_HandleElem<TValue>*>* _handles; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _max; // 0x0
		::System::Int32 _freeList; // 0x0
		::System::Boolean _initialized; // 0x0
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockableList_1_TypeDefinitionIndex = 51235;

	template <typename T>
	class LockableList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _Datas; // 0x0
		::System::Int32 _Count; // 0x0
		::System::Int32 _LockDepth; // 0x0
		::System::Int32 _RemovingIndex; // 0x0
	};
}

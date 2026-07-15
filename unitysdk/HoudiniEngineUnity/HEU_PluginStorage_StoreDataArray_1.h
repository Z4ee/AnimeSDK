#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PluginStorage_StoreDataArray_1_TypeDefinitionIndex = 38287;

	template <typename T>
	class HEU_PluginStorage_StoreDataArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array; // 0x0
	};
}

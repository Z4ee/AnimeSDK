#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MeshDecimator::Collections
{
	inline static constexpr unsigned int ResizableArray_1_TypeDefinitionIndex = 33266;

	template <typename T>
	class ResizableArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* items; // 0x0
		::System::Int32 length; // 0x0
		static ::Il2CppArray<T>** StaticGet_emptyArr()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(ResizableArray_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

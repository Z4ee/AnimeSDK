#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Container { template <typename T> class TSparseList_1_SparseOpDelegate; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int TSparseList_1_TypeConstraints_TypeDefinitionIndex = 61148;

	template <typename T>
	class TSparseList_1_TypeConstraints : public ::System::Object
	{
	public:
		static ::Foundation::ViewObject::Container::TSparseList_1_SparseOpDelegate<T>** StaticGet_Creator()
		{
			return (::Foundation::ViewObject::Container::TSparseList_1_SparseOpDelegate<T>**)Il2CppClass::FromTypeDefinitionIndex(TSparseList_1_TypeConstraints_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Foundation::ViewObject::Container::TSparseList_1_SparseOpDelegate<T>** StaticGet_Deleter()
		{
			return (::Foundation::ViewObject::Container::TSparseList_1_SparseOpDelegate<T>**)Il2CppClass::FromTypeDefinitionIndex(TSparseList_1_TypeConstraints_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

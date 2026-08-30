#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class ConstructorInfo; }

#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_COPYFROMJAGGEDTOMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x1730B020)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_GETDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1730AA20)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ISDICTIONARYTYPE_OFFSET UNITYSDK_OFFSET(0x172DF6D0)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_JAGGEDARRAYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1730B3C0)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_1_OFFSET UNITYSDK_OFFSET(0x172E7200)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x172E4990)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_TOMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x172F4F10)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int CollectionUtils_TypeDefinitionIndex = 9617;

	class CollectionUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsDictionaryType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ISDICTIONARYTYPE_OFFSET))(a1);
		}

		static ::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_OFFSET))(a1, a2);
		}

		static ::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor_1(::System::Type* a1, ::System::Type* a2, ::System::Type* a3)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::IList_1<::System::Int32>* GetDimensions(::System::Collections::IList* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_GETDIMENSIONS_OFFSET))(a1, a2);
		}

		static ::System::Void CopyFromJaggedToMultidimensionalArray(::System::Collections::IList* a1, ::System::Array* a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::System::Collections::IList*, ::System::Array*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_COPYFROMJAGGEDTOMULTIDIMENSIONALARRAY_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* JaggedArrayGetValue(::System::Collections::IList* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Object*(*)(::System::Collections::IList*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_JAGGEDARRAYGETVALUE_OFFSET))(a1, a2);
		}

		static ::System::Array* ToMultidimensionalArray(::System::Collections::IList* a1, ::System::Type* a2, ::System::Int32 a3)
		{
			return ((::System::Array*(*)(::System::Collections::IList*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_TOMULTIDIMENSIONALARRAY_OFFSET))(a1, a2, a3);
		}
	};
}

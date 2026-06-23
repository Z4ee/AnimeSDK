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
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class ConstructorInfo; }

#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_COPYFROMJAGGEDTOMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x1DB2A500)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_GETDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1DB2A140)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ISDICTIONARYTYPE_OFFSET UNITYSDK_OFFSET(0x1DB29B30)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_JAGGEDARRAYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1DB2A860)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB29DE0)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1DB29CD0)
#define NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_TOMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x1DB25470)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int CollectionUtils_TypeDefinitionIndex = 7035;

	class CollectionUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsDictionaryType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_ISDICTIONARYTYPE_OFFSET))(type);
		}

		static ::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor(::System::Type* collectionType, ::System::Type* collectionItemType)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_OFFSET))(collectionType, collectionItemType);
		}

		static ::System::Reflection::ConstructorInfo* ResolveEnumerableCollectionConstructor_1(::System::Type* collectionType, ::System::Type* collectionItemType, ::System::Type* constructorArgumentType)
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_RESOLVEENUMERABLECOLLECTIONCONSTRUCTOR_1_OFFSET))(collectionType, collectionItemType, constructorArgumentType);
		}

		static ::System::Collections::Generic::IList_1<::System::Int32>* GetDimensions(::System::Collections::IList* values, ::System::Int32 dimensionsCount)
		{
			return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::System::Collections::IList*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_GETDIMENSIONS_OFFSET))(values, dimensionsCount);
		}

		static ::System::Void CopyFromJaggedToMultidimensionalArray(::System::Collections::IList* values, ::System::Array* multidimensionalArray, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::System::Collections::IList*, ::System::Array*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_COPYFROMJAGGEDTOMULTIDIMENSIONALARRAY_OFFSET))(values, multidimensionalArray, indices);
		}

		static ::System::Object* JaggedArrayGetValue(::System::Collections::IList* values, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Object*(*)(::System::Collections::IList*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_JAGGEDARRAYGETVALUE_OFFSET))(values, indices);
		}

		static ::System::Array* ToMultidimensionalArray(::System::Collections::IList* values, ::System::Type* type, ::System::Int32 rank)
		{
			return ((::System::Array*(*)(::System::Collections::IList*, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_COLLECTIONUTILS_TOMULTIDIMENSIONALARRAY_OFFSET))(values, type, rank);
		}
	};
}

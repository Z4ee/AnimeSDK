#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_FIELDBYNAME_OFFSET UNITYSDK_OFFSET(0x1B2C9AA0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_FINDIENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1B2D3470)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETALLFIELDS_OFFSET UNITYSDK_OFFSET(0x1B2CB5C0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETALLPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B2CC590)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETENUMERABLETYPE_OFFSET UNITYSDK_OFFSET(0x1B2CC7C0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETFIELDINCLUDINGBASECLASSES_OFFSET UNITYSDK_OFFSET(0x1B2D3050)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETLOADEDASSEMBLIES_OFFSET UNITYSDK_OFFSET(0x1B2D2D50)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETLOADEDTYPES_OFFSET UNITYSDK_OFFSET(0x1B2C87D0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETMETHODINCLUDINGBASECLASSES_OFFSET UNITYSDK_OFFSET(0x1B2D2E40)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETPROPERTYINCLUDINGBASECLASSES_OFFSET UNITYSDK_OFFSET(0x1B2D3170)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_ISARRAYORLIST_OFFSET UNITYSDK_OFFSET(0x1B2D33F0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_ISFRAMEWORKTYPE_OFFSET UNITYSDK_OFFSET(0x1B2D3340)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_MATCHES_OFFSET UNITYSDK_OFFSET(0x1B2D3880)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_METHODBYNAME_OFFSET UNITYSDK_OFFSET(0x1B2C7FA0)
#define FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_PROPERTYBYNAME_OFFSET UNITYSDK_OFFSET(0x1B2C9AE0)

namespace FluffyUnderware::DevTools::Extensions
{
	inline static constexpr unsigned int TypeExt_TypeDefinitionIndex = 25918;

	class TypeExt : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>* GetLoadedTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETLOADEDTYPES_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* GetLoadedAssemblies()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETLOADEDASSEMBLIES_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* MethodByName(::System::Type* type, ::System::String* name, ::System::Boolean includeInherited, ::System::Boolean includePrivate)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_METHODBYNAME_OFFSET))(type, name, includeInherited, includePrivate);
		}

		static ::System::Reflection::FieldInfo* FieldByName(::System::Type* type, ::System::String* name, ::System::Boolean includeInherited, ::System::Boolean includePrivate)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_FIELDBYNAME_OFFSET))(type, name, includeInherited, includePrivate);
		}

		static ::System::Reflection::PropertyInfo* PropertyByName(::System::Type* type, ::System::String* name, ::System::Boolean includeInherited, ::System::Boolean includePrivate)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_PROPERTYBYNAME_OFFSET))(type, name, includeInherited, includePrivate);
		}

		static ::Il2CppArray<::System::Reflection::FieldInfo*>* GetAllFields(::System::Type* type, ::System::Boolean includeInherited, ::System::Boolean includePrivate)
		{
			return ((::Il2CppArray<::System::Reflection::FieldInfo*>*(*)(::System::Type*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETALLFIELDS_OFFSET))(type, includeInherited, includePrivate);
		}

		static ::Il2CppArray<::System::Reflection::PropertyInfo*>* GetAllProperties(::System::Type* type, ::System::Boolean includeInherited, ::System::Boolean includePrivate)
		{
			return ((::Il2CppArray<::System::Reflection::PropertyInfo*>*(*)(::System::Type*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETALLPROPERTIES_OFFSET))(type, includeInherited, includePrivate);
		}

		static ::System::Boolean IsFrameworkType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_ISFRAMEWORKTYPE_OFFSET))(type);
		}

		static ::System::Boolean IsArrayOrList(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_ISARRAYORLIST_OFFSET))(type);
		}

		static ::System::Type* GetEnumerableType(::System::Type* t)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETENUMERABLETYPE_OFFSET))(t);
		}

		static ::System::Type* FindIEnumerable(::System::Type* seqType)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_FINDIENUMERABLE_OFFSET))(seqType);
		}

		static ::System::Reflection::MethodInfo* GetMethodIncludingBaseClasses(::System::Type* type, ::System::String* name, ::System::Reflection::BindingFlags bindingFlags)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETMETHODINCLUDINGBASECLASSES_OFFSET))(type, name, bindingFlags);
		}

		static ::System::Reflection::FieldInfo* GetFieldIncludingBaseClasses(::System::Type* type, ::System::String* name, ::System::Reflection::BindingFlags bindingFlags)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETFIELDINCLUDINGBASECLASSES_OFFSET))(type, name, bindingFlags);
		}

		static ::System::Reflection::PropertyInfo* GetPropertyIncludingBaseClasses(::System::Type* type, ::System::String* name, ::System::Reflection::BindingFlags bindingFlags)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Type*, ::System::String*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_GETPROPERTYINCLUDINGBASECLASSES_OFFSET))(type, name, bindingFlags);
		}

		static ::System::Boolean Matches(::System::Type* type, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Boolean(*)(::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_EXTENSIONS_TYPEEXT_MATCHES_OFFSET))(type, types);
		}
	};
}

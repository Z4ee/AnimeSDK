#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }

#define HDG_RDTTYPEEXTENSIONS_GETALLFIELDSIMP_OFFSET UNITYSDK_OFFSET(0x16A75660)
#define HDG_RDTTYPEEXTENSIONS_GETALLFIELDS_OFFSET UNITYSDK_OFFSET(0x16A6EE40)
#define HDG_RDTTYPEEXTENSIONS_GETFIELDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x16A6FF90)
#define HDG_RDTTYPEEXTENSIONS_GETLISTELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x16A586C0)
#define HDG_RDTTYPEEXTENSIONS_ISGENERICLIST_OFFSET UNITYSDK_OFFSET(0x16A68E70)
#define HDG_RDTTYPEEXTENSIONS_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x16A691C0)
#define HDG_RDTTYPEEXTENSIONS_ISUSERSTRUCT_OFFSET UNITYSDK_OFFSET(0x16A69040)
#define HDG_RDTTYPEEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A75850)

namespace Hdg
{
	inline static constexpr unsigned int rdtTypeExtensions_TypeDefinitionIndex = 47451;

	class rdtTypeExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>** StaticGet_s_fields()
		{
			return (::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(rdtTypeExtensions_TypeDefinitionIndex)->GetStaticField(0x42850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsUserStruct(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_ISUSERSTRUCT_OFFSET))(a1);
		}

		static ::System::Boolean IsGenericList(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_ISGENERICLIST_OFFSET))(a1);
		}

		static ::System::Boolean IsReference(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_ISREFERENCE_OFFSET))(a1);
		}

		static ::System::Type* GetListElementType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETLISTELEMENTTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* GetAllFields(::System::Type* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETALLFIELDS_OFFSET))(a1);
		}

		static ::System::Reflection::FieldInfo* GetFieldInHierarchy(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETFIELDINHIERARCHY_OFFSET))(a1, a2);
		}

		static ::System::Void GetAllFieldsImp(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETALLFIELDSIMP_OFFSET))(a1);
		}
	};
}

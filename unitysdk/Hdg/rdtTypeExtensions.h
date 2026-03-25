#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }

#define HDG_RDTTYPEEXTENSIONS_GETALLFIELDSIMP_OFFSET UNITYSDK_OFFSET(0x8404050)
#define HDG_RDTTYPEEXTENSIONS_GETALLFIELDS_OFFSET UNITYSDK_OFFSET(0x84009D0)
#define HDG_RDTTYPEEXTENSIONS_GETFIELDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x8401630)
#define HDG_RDTTYPEEXTENSIONS_GETLISTELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x83F0010)
#define HDG_RDTTYPEEXTENSIONS_ISGENERICLIST_OFFSET UNITYSDK_OFFSET(0x83FB060)
#define HDG_RDTTYPEEXTENSIONS_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x83FB150)
#define HDG_RDTTYPEEXTENSIONS_ISUSERSTRUCT_OFFSET UNITYSDK_OFFSET(0x83FB0F0)
#define HDG_RDTTYPEEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x8404150)

namespace Hdg
{
	inline static constexpr unsigned int rdtTypeExtensions_TypeDefinitionIndex = 37926;

	class rdtTypeExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>** StaticGet_s_fields()
		{
			return (::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(rdtTypeExtensions_TypeDefinitionIndex)->GetStaticField(0x415D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsUserStruct(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_ISUSERSTRUCT_OFFSET))(type);
		}

		static ::System::Boolean IsGenericList(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_ISGENERICLIST_OFFSET))(type);
		}

		static ::System::Boolean IsReference(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_ISREFERENCE_OFFSET))(type);
		}

		static ::System::Type* GetListElementType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETLISTELEMENTTYPE_OFFSET))(type);
		}

		static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* GetAllFields(::System::Type* t)
		{
			return ((::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETALLFIELDS_OFFSET))(t);
		}

		static ::System::Reflection::FieldInfo* GetFieldInHierarchy(::System::Type* t, ::System::String* name)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETFIELDINHIERARCHY_OFFSET))(t, name);
		}

		static ::System::Void GetAllFieldsImp(::System::Type* t)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + HDG_RDTTYPEEXTENSIONS_GETALLFIELDSIMP_OFFSET))(t);
		}
	};
}

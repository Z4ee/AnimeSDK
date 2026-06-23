#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FOUNDATION_ASSETPATH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA29C30)
#define FOUNDATION_ASSETPATH_EQUALS_OFFSET UNITYSDK_OFFSET(0xA29B50)
#define FOUNDATION_ASSETPATH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA29B00)
#define FOUNDATION_ASSETPATH_GETRESOURCEPATHHASHCODEBUILDBUNDLE_OFFSET UNITYSDK_OFFSET(0x1DA30100)
#define FOUNDATION_ASSETPATH_GET_HASHPATH_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define FOUNDATION_ASSETPATH_GET_ISHASHPATH_OFFSET UNITYSDK_OFFSET(0xA29A20)
#define FOUNDATION_ASSETPATH_GET_ISSTRINGPATH_OFFSET UNITYSDK_OFFSET(0xA299C0)
#define FOUNDATION_ASSETPATH_ISNULLOREMPTY_OFFSET UNITYSDK_OFFSET(0xA29C90)
#define FOUNDATION_ASSETPATH_ISVALID_OFFSET UNITYSDK_OFFSET(0xA29CE0)
#define FOUNDATION_ASSETPATH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DA30260)
#define FOUNDATION_ASSETPATH_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DA301C0)
#define FOUNDATION_ASSETPATH_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DA30160)
#define FOUNDATION_ASSETPATH_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1DA30360)
#define FOUNDATION_ASSETPATH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA29D60)
#define FOUNDATION_ASSETPATH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA30650)
#define FOUNDATION_ASSETPATH__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA29AA0)
#define FOUNDATION_ASSETPATH__CTOR_OFFSET UNITYSDK_OFFSET(0xA29A90)
#define FOUNDATION_ASSETPATH___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA29E50)
#define FOUNDATION_ASSETPATH___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA29DF0)
#define FOUNDATION_ASSETPATH___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA29D70)

namespace Foundation
{
	inline static constexpr unsigned int AssetPath_TypeDefinitionIndex = 7852;

	struct alignas(8) AssetPath
	{
		static ::Foundation::AssetPath* StaticGet_Empty()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPath_TypeDefinitionIndex)->GetStaticField(0x6860);
		}
		::System::String* _stringPath; // 0x10
		::System::UInt64 _pathHash; // 0x18

		::System::Void _ctor(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsStringPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_GET_ISSTRINGPATH_OFFSET))(this);
		}

		::System::Boolean get_IsHashPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_GET_ISHASHPATH_OFFSET))(this);
		}

		::System::UInt64 get_HashPath()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_GET_HASHPATH_OFFSET))(this);
		}

		static ::Foundation::AssetPath op_Implicit(::System::UInt64 value)
		{
			return ((::Foundation::AssetPath(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_OP_IMPLICIT_OFFSET))(value);
		}

		static ::Foundation::AssetPath op_Implicit_1(::System::String* value)
		{
			return ((::Foundation::AssetPath(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::System::Boolean op_Equality(::Foundation::AssetPath left, ::Foundation::AssetPath right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::Foundation::AssetPath left, ::Foundation::AssetPath right)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::Foundation::AssetPath other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean IsNullOrEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_ISNULLOREMPTY_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_ISVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_TOSTRING_OFFSET))(this);
		}

		static ::System::UInt64 GetResourcePathHashCodeBuildBundle(::System::String* path)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH_GETRESOURCEPATHHASHCODEBUILDBUNDLE_OFFSET))(path);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH___BASE_TOSTRING_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATH___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}

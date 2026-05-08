#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define OCTREE_NATIVE_NATIVEPTR_ADD_OFFSET UNITYSDK_OFFSET(0x17A2D7E0)
#define OCTREE_NATIVE_NATIVEPTR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7D8720)
#define OCTREE_NATIVE_NATIVEPTR_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D86D0)
#define OCTREE_NATIVE_NATIVEPTR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D8800)
#define OCTREE_NATIVE_NATIVEPTR_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x396A90)
#define OCTREE_NATIVE_NATIVEPTR_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x17A2DB40)
#define OCTREE_NATIVE_NATIVEPTR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17A2DBE0)
#define OCTREE_NATIVE_NATIVEPTR_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17A2DB30)
#define OCTREE_NATIVE_NATIVEPTR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x17A2DB20)
#define OCTREE_NATIVE_NATIVEPTR_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17A2DD20)
#define OCTREE_NATIVE_NATIVEPTR_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x17A2DC80)
#define OCTREE_NATIVE_NATIVEPTR_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x17A2DAE0)
#define OCTREE_NATIVE_NATIVEPTR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17A2DAA0)
#define OCTREE_NATIVE_NATIVEPTR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17A2DC30)
#define OCTREE_NATIVE_NATIVEPTR_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x17A2DD70)
#define OCTREE_NATIVE_NATIVEPTR_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x17A2DCD0)
#define OCTREE_NATIVE_NATIVEPTR_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x17A2DB90)
#define OCTREE_NATIVE_NATIVEPTR_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x17A2D830)
#define OCTREE_NATIVE_NATIVEPTR_TOINT32_OFFSET UNITYSDK_OFFSET(0x7D85F0)
#define OCTREE_NATIVE_NATIVEPTR_TOINT64_OFFSET UNITYSDK_OFFSET(0x7D85A0)
#define OCTREE_NATIVE_NATIVEPTR_TOPOINTER_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define OCTREE_NATIVE_NATIVEPTR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7D8640)
#define OCTREE_NATIVE_NATIVEPTR__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A2DDC0)
#define OCTREE_NATIVE_NATIVEPTR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define OCTREE_NATIVE_NATIVEPTR__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define OCTREE_NATIVE_NATIVEPTR___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D8850)
#define OCTREE_NATIVE_NATIVEPTR___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D88B0)
#define OCTREE_NATIVE_NATIVEPTR___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7D8910)

namespace Octree::Native
{
	inline static constexpr unsigned int NativePtr_TypeDefinitionIndex = 75110;

	struct alignas(8) NativePtr
	{
		static ::System::Int32* StaticGet_Size()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NativePtr_TypeDefinitionIndex)->GetStaticField(0x118C0);
		}
		static ::Octree::Native::NativePtr* StaticGet_Zero()
		{
			return (::Octree::Native::NativePtr*)Il2CppClass::FromTypeDefinitionIndex(NativePtr_TypeDefinitionIndex)->GetStaticField(0x118C8);
		}
		::System::Byte* _value; // 0x10

		::System::Void _ctor(::System::Byte* v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR__CTOR_OFFSET))(this, v);
		}

		::System::Void _ctor_1(::System::IntPtr v)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR__CTOR_1_OFFSET))(this, v);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_GET_ISNULL_OFFSET))(this);
		}

		::System::Byte* ToPointer()
		{
			return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_TOPOINTER_OFFSET))(this);
		}

		static ::Octree::Native::NativePtr Add(::Octree::Native::NativePtr pointer, ::System::Int32 offset)
		{
			return ((::Octree::Native::NativePtr(*)(::Octree::Native::NativePtr, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_ADD_OFFSET))(pointer, offset);
		}

		static ::Octree::Native::NativePtr Subtract(::Octree::Native::NativePtr pointer, ::System::Int32 offset)
		{
			return ((::Octree::Native::NativePtr(*)(::Octree::Native::NativePtr, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_SUBTRACT_OFFSET))(pointer, offset);
		}

		::System::Int64 ToInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_TOINT64_OFFSET))(this);
		}

		::System::Int32 ToInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_TOINT32_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::Octree::Native::NativePtr other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Octree::Native::NativePtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_GETHASHCODE_OFFSET))(this);
		}

		static ::Octree::Native::NativePtr op_Implicit(::System::IntPtr ptr)
		{
			return ((::Octree::Native::NativePtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_IMPLICIT_OFFSET))(ptr);
		}

		static ::System::IntPtr op_Implicit_1(::Octree::Native::NativePtr ptr)
		{
			return ((::System::IntPtr(*)(::Octree::Native::NativePtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_IMPLICIT_1_OFFSET))(ptr);
		}

		static ::System::Void* op_Explicit(::Octree::Native::NativePtr ptr)
		{
			return ((::System::Void*(*)(::Octree::Native::NativePtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_EXPLICIT_OFFSET))(ptr);
		}

		static ::Octree::Native::NativePtr op_Explicit_1(::System::Void* ptr)
		{
			return ((::Octree::Native::NativePtr(*)(::System::Void*))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_EXPLICIT_1_OFFSET))(ptr);
		}

		static ::Octree::Native::NativePtr op_Addition(::Octree::Native::NativePtr pointer, ::System::Int32 offset)
		{
			return ((::Octree::Native::NativePtr(*)(::Octree::Native::NativePtr, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_ADDITION_OFFSET))(pointer, offset);
		}

		static ::Octree::Native::NativePtr op_Subtraction(::Octree::Native::NativePtr pointer, ::System::Int32 offset)
		{
			return ((::Octree::Native::NativePtr(*)(::Octree::Native::NativePtr, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_SUBTRACTION_OFFSET))(pointer, offset);
		}

		static ::System::Boolean op_Equality(::Octree::Native::NativePtr lf, ::Octree::Native::NativePtr rt)
		{
			return ((::System::Boolean(*)(::Octree::Native::NativePtr, ::Octree::Native::NativePtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_EQUALITY_OFFSET))(lf, rt);
		}

		static ::System::Boolean op_Inequality(::Octree::Native::NativePtr lf, ::Octree::Native::NativePtr rt)
		{
			return ((::System::Boolean(*)(::Octree::Native::NativePtr, ::Octree::Native::NativePtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_INEQUALITY_OFFSET))(lf, rt);
		}

		static ::System::Boolean op_GreaterThan(::Octree::Native::NativePtr lf, ::Octree::Native::NativePtr rt)
		{
			return ((::System::Boolean(*)(::Octree::Native::NativePtr, ::Octree::Native::NativePtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_GREATERTHAN_OFFSET))(lf, rt);
		}

		static ::System::Boolean op_LessThan(::Octree::Native::NativePtr lf, ::Octree::Native::NativePtr rt)
		{
			return ((::System::Boolean(*)(::Octree::Native::NativePtr, ::Octree::Native::NativePtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_LESSTHAN_OFFSET))(lf, rt);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::Octree::Native::NativePtr lf, ::Octree::Native::NativePtr rt)
		{
			return ((::System::Boolean(*)(::Octree::Native::NativePtr, ::Octree::Native::NativePtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_GREATERTHANOREQUAL_OFFSET))(lf, rt);
		}

		static ::System::Boolean op_LessThanOrEqual(::Octree::Native::NativePtr lf, ::Octree::Native::NativePtr rt)
		{
			return ((::System::Boolean(*)(::Octree::Native::NativePtr, ::Octree::Native::NativePtr))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR_OP_LESSTHANOREQUAL_OFFSET))(lf, rt);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_NATIVEPTR___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

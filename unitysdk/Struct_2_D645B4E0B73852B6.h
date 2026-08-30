#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STRUCT_2_D645B4E0B73852B6_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x7C640)
#define STRUCT_2_D645B4E0B73852B6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D3D30)
#define STRUCT_2_D645B4E0B73852B6_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D3D10)
#define STRUCT_2_D645B4E0B73852B6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D3D00)
#define STRUCT_2_D645B4E0B73852B6_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x5F00)
#define STRUCT_2_D645B4E0B73852B6_METHOD_2_187B3E3B8611027E_OFFSET UNITYSDK_OFFSET(0x114E4190)
#define STRUCT_2_D645B4E0B73852B6_METHOD_2_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x17D3C70)
#define STRUCT_2_D645B4E0B73852B6_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x114E4250)
#define STRUCT_2_D645B4E0B73852B6_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x114E44E0)
#define STRUCT_2_D645B4E0B73852B6_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x17D3C90)
#define STRUCT_2_D645B4E0B73852B6_SET_ROLEID_OFFSET UNITYSDK_OFFSET(0x2E950)
#define STRUCT_2_D645B4E0B73852B6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D3C80)
#define STRUCT_2_D645B4E0B73852B6__CTOR_OFFSET UNITYSDK_OFFSET(0x2E950)

inline static constexpr unsigned int Struct_2_D645B4E0B73852B6_TypeDefinitionIndex = 52186;

struct alignas(4) Struct_2_D645B4E0B73852B6
{
	::System::UInt32 _RoleID_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_RoleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_GET_ROLEID_OFFSET))(this);
	}

	::System::Void set_RoleID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_SET_ROLEID_OFFSET))(this, a1);
	}

	static ::Struct_2_D645B4E0B73852B6 Method_2_187B3E3B8611027E()
	{
		return ((::Struct_2_D645B4E0B73852B6(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_METHOD_2_187B3E3B8611027E_OFFSET))();
	}

	::System::Boolean Method_2_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_METHOD_2_CF8BA38996D09531_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Struct_2_D645B4E0B73852B6 a1, ::Struct_2_D645B4E0B73852B6 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D645B4E0B73852B6, ::Struct_2_D645B4E0B73852B6))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Struct_2_D645B4E0B73852B6 a1, ::Struct_2_D645B4E0B73852B6 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D645B4E0B73852B6, ::Struct_2_D645B4E0B73852B6))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_D645B4E0B73852B6 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D645B4E0B73852B6))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Deconstruct(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + STRUCT_2_D645B4E0B73852B6_DECONSTRUCT_OFFSET))(this, a1);
	}
};

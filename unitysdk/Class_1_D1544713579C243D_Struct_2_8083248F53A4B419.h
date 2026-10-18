#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5C51850AEEA325C9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_D1544713579C243D_STRUCT_2_8083248F53A4B419_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x2E7D5E0)
#define CLASS_1_D1544713579C243D_STRUCT_2_8083248F53A4B419_GET_ROLENAME_OFFSET UNITYSDK_OFFSET(0x1D30)
#define CLASS_1_D1544713579C243D_STRUCT_2_8083248F53A4B419__CTOR_OFFSET UNITYSDK_OFFSET(0x2E7D5B0)

inline static constexpr unsigned int Class_1_D1544713579C243D_Struct_2_8083248F53A4B419_TypeDefinitionIndex = 53522;

struct alignas(8) Class_1_D1544713579C243D_Struct_2_8083248F53A4B419
{
	::System::String* _RoleName_k__BackingField; // 0x10
	::Struct_2_5C51850AEEA325C9 _Member_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1, ::Struct_2_5C51850AEEA325C9 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Struct_2_5C51850AEEA325C9))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_STRUCT_2_8083248F53A4B419__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_RoleName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_STRUCT_2_8083248F53A4B419_GET_ROLENAME_OFFSET))(this);
	}

	::Struct_2_5C51850AEEA325C9 get_Member()
	{
		return ((::Struct_2_5C51850AEEA325C9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1544713579C243D_STRUCT_2_8083248F53A4B419_GET_MEMBER_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BBB2050B3F3F683.h"
#include "unitysdk/Struct_2_76A4522D4905FF64.h"

class Class_2_8619A10C8C184891_Class_1_12CFD4109BB62456;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8619A10C8C184891_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15FF0D20)
#define CLASS_2_8619A10C8C184891_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15FF0D30)
#define CLASS_2_8619A10C8C184891_METHOD_2_79734A163132F053_OFFSET UNITYSDK_OFFSET(0x15FF0920)
#define CLASS_2_8619A10C8C184891_METHOD_2_9C05ABC9E776C74C_OFFSET UNITYSDK_OFFSET(0x15FF04B0)
#define CLASS_2_8619A10C8C184891_METHOD_2_F289A5A170401D6B_OFFSET UNITYSDK_OFFSET(0x15FF07D0)
#define CLASS_2_8619A10C8C184891_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x15FF0230)
#define CLASS_2_8619A10C8C184891__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF0D90)

inline static constexpr unsigned int Class_2_8619A10C8C184891_TypeDefinitionIndex = 57468;

class Class_2_8619A10C8C184891 : public ::Class_1_5BBB2050B3F3F683
{
public:
	::System::Collections::Generic::List_1<::Class_2_8619A10C8C184891_Class_1_12CFD4109BB62456*>* Field_2_0; // 0x20
	::System::Boolean _NeedLateUpdate_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8619A10C8C184891__CTOR_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8619A10C8C184891_ONUNINIT_OFFSET))(this);
	}

	::System::Void Method_2_9C05ABC9E776C74C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8619A10C8C184891_METHOD_2_9C05ABC9E776C74C_OFFSET))(this, a1);
	}

	::System::Void Method_2_F289A5A170401D6B(::Struct_2_76A4522D4905FF64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_76A4522D4905FF64))((::PBYTE)hIl2Cpp + CLASS_2_8619A10C8C184891_METHOD_2_F289A5A170401D6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_79734A163132F053(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8619A10C8C184891_METHOD_2_79734A163132F053_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8619A10C8C184891_GET_NEEDLATEUPDATE_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8619A10C8C184891_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};

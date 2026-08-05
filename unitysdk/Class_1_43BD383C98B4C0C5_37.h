#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A19181F4A3F40F2A.h"
#include "unitysdk/Struct_2_D3FBEE9DE3F34F60.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_3_A91441E1AAFAB88F_5;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define CLASS_1_43BD383C98B4C0C5_37__CCTOR_OFFSET UNITYSDK_OFFSET(0x19442AD0)
#define CLASS_1_43BD383C98B4C0C5_37__CTOR_OFFSET UNITYSDK_OFFSET(0x19442AB0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_37_TypeDefinitionIndex = 68367;

class Class_1_43BD383C98B4C0C5_37 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_43BD383C98B4C0C5_37_TypeDefinitionIndex)->GetStaticField(0xE0C0);
	}
	::System::String* Field_1_4; // 0x10
	::Class_3_A91441E1AAFAB88F_5* Field_1_15; // 0x18
	::Struct_2_D3FBEE9DE3F34F60 Field_1_7; // 0x20
	::System::Func_1<::System::String*>* Field_1_0; // 0x48
	::System::Action* Field_1_11; // 0x50
	::System::Object* Field_1_19; // 0x58
	::System::String* Field_1_1; // 0x60
	::System::Action* Field_1_14; // 0x68
	::Class_1_516A565475879095<::System::UInt32, ::System::UInt32>* Field_1_8; // 0x70
	::System::Nullable_1<::System::Single> Field_1_10; // 0x78
	::System::Int32 Field_1_13; // 0x80
	::System::Int32 Field_1_9; // 0x84
	::System::Int32 Field_1_3; // 0x88
	::System::Int32 Field_1_17; // 0x8C
	::Enum_3_A19181F4A3F40F2A Field_1_6; // 0x90
	::System::Boolean Field_1_12; // 0x94
	::System::Boolean Field_1_5; // 0x95
	::System::Boolean Field_1_2; // 0x96

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_37__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_37__CCTOR_OFFSET))();
	}
};

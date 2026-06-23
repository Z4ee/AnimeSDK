#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2C110B1E0925E7B4.h"
#include "unitysdk/Struct_2_D3FBEE9DE3F34F60.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_3_F148AC909A53601D;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define CLASS_1_43BD383C98B4C0C5_36__CCTOR_OFFSET UNITYSDK_OFFSET(0x18824210)
#define CLASS_1_43BD383C98B4C0C5_36__CTOR_OFFSET UNITYSDK_OFFSET(0x188241F0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_36_TypeDefinitionIndex = 71629;

class Class_1_43BD383C98B4C0C5_36 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_43BD383C98B4C0C5_36_TypeDefinitionIndex)->GetStaticField(0x12810);
	}
	::Struct_2_D3FBEE9DE3F34F60 Field_1_4; // 0x10
	::System::Action* Field_1_8; // 0x38
	::System::Action* Field_1_13; // 0x40
	::System::Func_1<::System::String*>* Field_1_3; // 0x48
	::System::Object* Field_1_16; // 0x50
	::System::String* Field_1_7; // 0x58
	::Class_3_F148AC909A53601D* Field_1_12; // 0x60
	::System::String* Field_1_2; // 0x68
	::Class_1_516A565475879095<::System::UInt32, ::System::UInt32>* Field_1_11; // 0x70
	::System::Int32 Field_1_14; // 0x78
	::System::Nullable_1<::System::Single> Field_1_9; // 0x7C
	::System::Int32 Field_1_18; // 0x84
	::System::Boolean Field_1_15; // 0x88
	::System::Boolean Field_1_6; // 0x89
	::System::Boolean Field_1_1; // 0x8A
	::System::Int32 Field_1_0; // 0x8C
	::Enum_3_2C110B1E0925E7B4 Field_1_5; // 0x90
	::System::Int32 Field_1_10; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_36__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_36__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_CF91C0690C9033C6_CLASS_1_B42380AFF5A40CA6_METHOD_1_80E50FA57EB733F1_OFFSET UNITYSDK_OFFSET(0x16263190)
#define CLASS_2_CF91C0690C9033C6_CLASS_1_B42380AFF5A40CA6__CCTOR_OFFSET UNITYSDK_OFFSET(0x16263180)
#define CLASS_2_CF91C0690C9033C6_CLASS_1_B42380AFF5A40CA6__CTOR_OFFSET UNITYSDK_OFFSET(0x16263160)

inline static constexpr unsigned int Class_2_CF91C0690C9033C6_Class_1_B42380AFF5A40CA6_TypeDefinitionIndex = 61559;

class Class_2_CF91C0690C9033C6_Class_1_B42380AFF5A40CA6 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CF91C0690C9033C6_Class_1_B42380AFF5A40CA6_TypeDefinitionIndex)->GetStaticField(0xF840);
	}
	::System::Int32 Field_1_2; // 0x10
	::System::Int32 Field_1_3; // 0x14
	::MoleMole::HollowChessboard::HollowCell Field_1_4; // 0x18
	::System::UInt32 Field_1_0; // 0x24
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF91C0690C9033C6_CLASS_1_B42380AFF5A40CA6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CF91C0690C9033C6_CLASS_1_B42380AFF5A40CA6__CCTOR_OFFSET))();
	}

	::System::String* Method_1_80E50FA57EB733F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CF91C0690C9033C6_CLASS_1_B42380AFF5A40CA6_METHOD_1_80E50FA57EB733F1_OFFSET))(this);
	}
};

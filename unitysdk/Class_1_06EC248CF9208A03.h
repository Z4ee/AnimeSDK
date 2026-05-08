#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_06EC248CF9208A03_METHOD_1_DFFE4D2C9D85F570_OFFSET UNITYSDK_OFFSET(0x14E15920)
#define CLASS_1_06EC248CF9208A03__CTOR_OFFSET UNITYSDK_OFFSET(0x14E15910)

inline static constexpr unsigned int Class_1_06EC248CF9208A03_TypeDefinitionIndex = 78136;

class Class_1_06EC248CF9208A03 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	// static const ::System::Single Field_1_8; // 0x0
	// static const ::System::Single Field_1_9; // 0x0
	// static const ::System::Single Field_1_10; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06EC248CF9208A03__CTOR_OFFSET))(this);
	}

	static ::System::Single Method_1_DFFE4D2C9D85F570(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_06EC248CF9208A03_METHOD_1_DFFE4D2C9D85F570_OFFSET))(a1, a2, a3);
	}
};

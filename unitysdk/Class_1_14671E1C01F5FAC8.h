#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E665773526DA81A8;
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_1_14671E1C01F5FAC8__CTOR_OFFSET UNITYSDK_OFFSET(0x15035D70)

inline static constexpr unsigned int Class_1_14671E1C01F5FAC8_TypeDefinitionIndex = 78018;

class Class_1_14671E1C01F5FAC8 : public ::System::Object
{
public:
	::Class_1_8CC15846339E7FB0<::System::UInt32>* Field_1_2; // 0x10
	::Class_1_8CC15846339E7FB0<::Class_3_E665773526DA81A8*>* Field_1_3; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_14671E1C01F5FAC8__CTOR_OFFSET))(this);
	}
};

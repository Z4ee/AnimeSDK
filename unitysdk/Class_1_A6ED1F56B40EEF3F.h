#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C3F0E3B5AB5977AE_42;

#define CLASS_1_A6ED1F56B40EEF3F_COMPARETO_OFFSET UNITYSDK_OFFSET(0x16510C70)
#define CLASS_1_A6ED1F56B40EEF3F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16510C60)
#define CLASS_1_A6ED1F56B40EEF3F__CTOR_OFFSET UNITYSDK_OFFSET(0x16510C30)

inline static constexpr unsigned int Class_1_A6ED1F56B40EEF3F_TypeDefinitionIndex = 48300;

class Class_1_A6ED1F56B40EEF3F : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::Boolean Field_1_3; // 0x18
	::System::UInt32 Field_1_0; // 0x1C

	::System::Void _ctor(::Class_3_C3F0E3B5AB5977AE_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C3F0E3B5AB5977AE_42*))((::PBYTE)hIl2Cpp + CLASS_1_A6ED1F56B40EEF3F__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A6ED1F56B40EEF3F__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 CompareTo(::Class_1_A6ED1F56B40EEF3F* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A6ED1F56B40EEF3F*))((::PBYTE)hIl2Cpp + CLASS_1_A6ED1F56B40EEF3F_COMPARETO_OFFSET))(this, a1);
	}
};

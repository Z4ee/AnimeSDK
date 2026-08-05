#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AF5BAAFF9C131E7E.h"
#include "unitysdk/System/Object.h"

class Class_3_31FA216B8128BBFD_2;

#define CLASS_1_5F0B613BC774A598_1_COMPARETO_OFFSET UNITYSDK_OFFSET(0x12B789C0)
#define CLASS_1_5F0B613BC774A598_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12B789A0)
#define CLASS_1_5F0B613BC774A598_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12B78960)

inline static constexpr unsigned int Class_1_5F0B613BC774A598_1_TypeDefinitionIndex = 85533;

class Class_1_5F0B613BC774A598_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::Enum_3_AF5BAAFF9C131E7E Field_1_11; // 0x14
	::System::UInt32 Field_1_7; // 0x18
	::System::Boolean Field_1_5; // 0x1C
	::System::Boolean Field_1_4; // 0x1D
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor(::Class_3_31FA216B8128BBFD_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_31FA216B8128BBFD_2*))((::PBYTE)hIl2Cpp + CLASS_1_5F0B613BC774A598_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F0B613BC774A598_1__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 CompareTo(::Class_1_5F0B613BC774A598_1* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_5F0B613BC774A598_1*))((::PBYTE)hIl2Cpp + CLASS_1_5F0B613BC774A598_1_COMPARETO_OFFSET))(this, a1);
	}
};

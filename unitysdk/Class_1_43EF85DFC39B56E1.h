#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2DE342D55868E1FE;

#define CLASS_1_43EF85DFC39B56E1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16623000)
#define CLASS_1_43EF85DFC39B56E1__CTOR_OFFSET UNITYSDK_OFFSET(0x16622FC0)

inline static constexpr unsigned int Class_1_43EF85DFC39B56E1_TypeDefinitionIndex = 28831;

class Class_1_43EF85DFC39B56E1 : public ::System::Object
{
public:
	::Class_2_2DE342D55868E1FE* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor(::Class_2_2DE342D55868E1FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2DE342D55868E1FE*))((::PBYTE)hIl2Cpp + CLASS_1_43EF85DFC39B56E1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43EF85DFC39B56E1_EXECUTE_OFFSET))(this);
	}
};

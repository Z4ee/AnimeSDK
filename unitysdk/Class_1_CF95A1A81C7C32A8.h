#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_290;
class Class_3_E63A2FD567AC1B3A;

#define CLASS_1_CF95A1A81C7C32A8_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x12729330)
#define CLASS_1_CF95A1A81C7C32A8_METHOD_1_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x127294B0)
#define CLASS_1_CF95A1A81C7C32A8__CTOR_OFFSET UNITYSDK_OFFSET(0x12729220)

inline static constexpr unsigned int Class_1_CF95A1A81C7C32A8_TypeDefinitionIndex = 58282;

class Class_1_CF95A1A81C7C32A8 : public ::System::Object
{
public:
	::Class_3_E63A2FD567AC1B3A* Field_1_7; // 0x10
	::Class_2_208CC9941471731A_290* Field_1_6; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::Class_3_E63A2FD567AC1B3A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E63A2FD567AC1B3A*))((::PBYTE)hIl2Cpp + CLASS_1_CF95A1A81C7C32A8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF95A1A81C7C32A8_METHOD_1_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF95A1A81C7C32A8_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}
};

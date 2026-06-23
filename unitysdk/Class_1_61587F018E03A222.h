#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_61587F018E03A222_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x17934570)
#define CLASS_1_61587F018E03A222_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x17934500)
#define CLASS_1_61587F018E03A222_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17934560)
#define CLASS_1_61587F018E03A222__CTOR_OFFSET UNITYSDK_OFFSET(0x179344F0)

inline static constexpr unsigned int Class_1_61587F018E03A222_TypeDefinitionIndex = 72331;

class Class_1_61587F018E03A222 : public ::System::Object
{
public:
	::System::Boolean Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61587F018E03A222__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61587F018E03A222_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61587F018E03A222_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_61587F018E03A222_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}
};

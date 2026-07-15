#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E08DCD252AEE7AEA_METHOD_1_87E1F65BD177CEC9_OFFSET UNITYSDK_OFFSET(0x14AD1300)
#define CLASS_1_E08DCD252AEE7AEA_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x14AD1400)
#define CLASS_1_E08DCD252AEE7AEA__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD13F0)

inline static constexpr unsigned int Class_1_E08DCD252AEE7AEA_TypeDefinitionIndex = 68914;

class Class_1_E08DCD252AEE7AEA : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x14; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x64; // 0x0
	::Il2CppArray<::System::Int32>* Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08DCD252AEE7AEA__CTOR_OFFSET))(this);
	}

	static ::Class_1_E08DCD252AEE7AEA* Method_1_87E1F65BD177CEC9()
	{
		return ((::Class_1_E08DCD252AEE7AEA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E08DCD252AEE7AEA_METHOD_1_87E1F65BD177CEC9_OFFSET))();
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E08DCD252AEE7AEA_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}
};

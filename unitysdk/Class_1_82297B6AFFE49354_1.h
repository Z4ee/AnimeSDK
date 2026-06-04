#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_82297B6AFFE49354_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E87FB0)
#define CLASS_1_82297B6AFFE49354_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18E87FA0)
#define CLASS_1_82297B6AFFE49354_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18E88000)

inline static constexpr unsigned int Class_1_82297B6AFFE49354_1_TypeDefinitionIndex = 40095;

class Class_1_82297B6AFFE49354_1 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Boolean Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82297B6AFFE49354_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82297B6AFFE49354_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_82297B6AFFE49354_1_CLEAR_OFFSET))(this);
	}
};

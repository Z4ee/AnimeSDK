#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_469A56953483CA0D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6328D0D4DA44A540_METHOD_1_3927C9B20D5814BA_OFFSET UNITYSDK_OFFSET(0x105813E0)
#define CLASS_1_6328D0D4DA44A540_METHOD_1_4487EB59871B4D67_OFFSET UNITYSDK_OFFSET(0x10581320)
#define CLASS_1_6328D0D4DA44A540__CTOR_OFFSET UNITYSDK_OFFSET(0x10581450)

inline static constexpr unsigned int Class_1_6328D0D4DA44A540_TypeDefinitionIndex = 46279;

class Class_1_6328D0D4DA44A540 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6328D0D4DA44A540__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4487EB59871B4D67(::Class_2_469A56953483CA0D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_469A56953483CA0D*))((::PBYTE)hIl2Cpp + CLASS_1_6328D0D4DA44A540_METHOD_1_4487EB59871B4D67_OFFSET))(this, a1);
	}

	::System::Void Method_1_3927C9B20D5814BA(::Class_2_469A56953483CA0D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_469A56953483CA0D*))((::PBYTE)hIl2Cpp + CLASS_1_6328D0D4DA44A540_METHOD_1_3927C9B20D5814BA_OFFSET))(this, a1);
	}
};

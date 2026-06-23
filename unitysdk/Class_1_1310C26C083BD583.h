#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1B8C41DE89D4451;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1310C26C083BD583_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16025620)
#define CLASS_1_1310C26C083BD583_METHOD_1_E57456F36F09A25C_OFFSET UNITYSDK_OFFSET(0x16025490)
#define CLASS_1_1310C26C083BD583__CTOR_OFFSET UNITYSDK_OFFSET(0x160253E0)

inline static constexpr unsigned int Class_1_1310C26C083BD583_TypeDefinitionIndex = 44333;

class Class_1_1310C26C083BD583 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::System::Collections::Generic::List_1<::Class_1_B1B8C41DE89D4451*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_B1B8C41DE89D4451*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x20
	::System::Int32 Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x2C
	::System::Boolean Field_1_3; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1310C26C083BD583__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E57456F36F09A25C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1310C26C083BD583_METHOD_1_E57456F36F09A25C_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1310C26C083BD583_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};

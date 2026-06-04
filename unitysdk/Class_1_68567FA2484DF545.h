#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_01DFB1C3DD7B8195;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_68567FA2484DF545_METHOD_1_7DC8A93C0B388CEA_OFFSET UNITYSDK_OFFSET(0x18A02330)
#define CLASS_1_68567FA2484DF545_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x18A02290)
#define CLASS_1_68567FA2484DF545__CTOR_OFFSET UNITYSDK_OFFSET(0x18A02450)

inline static constexpr unsigned int Class_1_68567FA2484DF545_TypeDefinitionIndex = 34708;

class Class_1_68567FA2484DF545 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_01DFB1C3DD7B8195*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68567FA2484DF545__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68567FA2484DF545_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}

	::Class_1_01DFB1C3DD7B8195* Method_1_7DC8A93C0B388CEA(::System::Int32 a1)
	{
		return ((::Class_1_01DFB1C3DD7B8195*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_68567FA2484DF545_METHOD_1_7DC8A93C0B388CEA_OFFSET))(this, a1);
	}
};

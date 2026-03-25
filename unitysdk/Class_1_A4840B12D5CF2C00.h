#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_01DFB1C3DD7B8195;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A4840B12D5CF2C00_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x167349D0)
#define CLASS_1_A4840B12D5CF2C00_METHOD_1_D8CD1E413395E05E_OFFSET UNITYSDK_OFFSET(0x16734A40)
#define CLASS_1_A4840B12D5CF2C00__CTOR_OFFSET UNITYSDK_OFFSET(0x16734B90)

inline static constexpr unsigned int Class_1_A4840B12D5CF2C00_TypeDefinitionIndex = 28701;

class Class_1_A4840B12D5CF2C00 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_01DFB1C3DD7B8195*>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4840B12D5CF2C00__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4840B12D5CF2C00_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::Class_1_01DFB1C3DD7B8195* Method_1_D8CD1E413395E05E(::System::Int32 a1)
	{
		return ((::Class_1_01DFB1C3DD7B8195*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A4840B12D5CF2C00_METHOD_1_D8CD1E413395E05E_OFFSET))(this, a1);
	}
};

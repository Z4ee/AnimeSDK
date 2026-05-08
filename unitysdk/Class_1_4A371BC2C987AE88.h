#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB84B938A7E58DA3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4A371BC2C987AE88_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x139E89B0)
#define CLASS_1_4A371BC2C987AE88_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x139E8A80)
#define CLASS_1_4A371BC2C987AE88__CTOR_OFFSET UNITYSDK_OFFSET(0x139E8880)

inline static constexpr unsigned int Class_1_4A371BC2C987AE88_TypeDefinitionIndex = 42679;

class Class_1_4A371BC2C987AE88 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	::System::Collections::Generic::List_1<::Class_1_BB84B938A7E58DA3*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_BB84B938A7E58DA3*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_BB84B938A7E58DA3*>* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Boolean Field_1_5; // 0x2C
	::System::Boolean Field_1_4; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A371BC2C987AE88__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A371BC2C987AE88_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A371BC2C987AE88_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}
};

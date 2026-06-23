#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F42B4A17001C2F64;
class Class_2_208CC9941471731A_1038;
class Class_2_9A16BB53176B1EDB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CF8E829F802476F6_METHOD_1_7F9D0B78E96BFB0E_OFFSET UNITYSDK_OFFSET(0xD3702D0)
#define CLASS_1_CF8E829F802476F6_METHOD_1_80C66335F1B7C73D_OFFSET UNITYSDK_OFFSET(0xD370370)
#define CLASS_1_CF8E829F802476F6__CTOR_OFFSET UNITYSDK_OFFSET(0xD370250)

inline static constexpr unsigned int Class_1_CF8E829F802476F6_TypeDefinitionIndex = 76097;

class Class_1_CF8E829F802476F6 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_1038* Field_1_2; // 0x10
	::Class_1_F42B4A17001C2F64* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_2_9A16BB53176B1EDB*>* Field_1_5; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Int32 Field_1_0; // 0x2C
	::System::Int32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8E829F802476F6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7F9D0B78E96BFB0E(::Class_2_9A16BB53176B1EDB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9A16BB53176B1EDB*))((::PBYTE)hIl2Cpp + CLASS_1_CF8E829F802476F6_METHOD_1_7F9D0B78E96BFB0E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_80C66335F1B7C73D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8E829F802476F6_METHOD_1_80C66335F1B7C73D_OFFSET))(this);
	}
};

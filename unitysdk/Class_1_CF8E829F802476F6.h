#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F42B4A17001C2F64;
class Class_2_208CC9941471731A_1031;
class Class_2_9A16BB53176B1EDB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CF8E829F802476F6_METHOD_1_7F9D0B78E96BFB0E_OFFSET UNITYSDK_OFFSET(0x142FBD40)
#define CLASS_1_CF8E829F802476F6_METHOD_1_80C66335F1B7C73D_OFFSET UNITYSDK_OFFSET(0x142FBD20)
#define CLASS_1_CF8E829F802476F6__CTOR_OFFSET UNITYSDK_OFFSET(0x142FBCA0)

inline static constexpr unsigned int Class_1_CF8E829F802476F6_TypeDefinitionIndex = 81572;

class Class_1_CF8E829F802476F6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_9A16BB53176B1EDB*>* Field_1_4; // 0x10
	::Class_1_F42B4A17001C2F64* Field_1_5; // 0x18
	::Class_2_208CC9941471731A_1031* Field_1_7; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean Field_1_6; // 0x2C
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8E829F802476F6__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_80C66335F1B7C73D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF8E829F802476F6_METHOD_1_80C66335F1B7C73D_OFFSET))(this);
	}

	::System::Void Method_1_7F9D0B78E96BFB0E(::Class_2_9A16BB53176B1EDB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9A16BB53176B1EDB*))((::PBYTE)hIl2Cpp + CLASS_1_CF8E829F802476F6_METHOD_1_7F9D0B78E96BFB0E_OFFSET))(this, a1);
	}
};

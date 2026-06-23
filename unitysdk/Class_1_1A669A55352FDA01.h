#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B7B61C15BD82C04;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1A669A55352FDA01_METHOD_1_7B4BBA8A4A7B2F42_OFFSET UNITYSDK_OFFSET(0x115B4C10)
#define CLASS_1_1A669A55352FDA01_METHOD_1_C0F35A31FAC15CA9_OFFSET UNITYSDK_OFFSET(0x115B4B80)
#define CLASS_1_1A669A55352FDA01__CTOR_OFFSET UNITYSDK_OFFSET(0x115B4B70)

inline static constexpr unsigned int Class_1_1A669A55352FDA01_TypeDefinitionIndex = 78327;

class Class_1_1A669A55352FDA01 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A669A55352FDA01__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_C0F35A31FAC15CA9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A669A55352FDA01_METHOD_1_C0F35A31FAC15CA9_OFFSET))(a1);
	}

	static ::System::Void Method_1_7B4BBA8A4A7B2F42(::System::Collections::Generic::List_1<::Class_1_3B7B61C15BD82C04*>*& a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_3B7B61C15BD82C04*>*&))((::PBYTE)hIl2Cpp + CLASS_1_1A669A55352FDA01_METHOD_1_7B4BBA8A4A7B2F42_OFFSET))(a1);
	}
};

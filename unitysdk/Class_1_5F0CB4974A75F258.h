#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79BB8E765900C549;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5F0CB4974A75F258_METHOD_1_06ABC274DA701493_OFFSET UNITYSDK_OFFSET(0xBC2F040)
#define CLASS_1_5F0CB4974A75F258_METHOD_1_2A721CD8A312A4BD_OFFSET UNITYSDK_OFFSET(0xBC2F1A0)
#define CLASS_1_5F0CB4974A75F258_METHOD_1_33ABE4DE83E844FB_OFFSET UNITYSDK_OFFSET(0xBC2F330)
#define CLASS_1_5F0CB4974A75F258_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xBC2F6C0)
#define CLASS_1_5F0CB4974A75F258_METHOD_1_BB71C7423EF47273_OFFSET UNITYSDK_OFFSET(0xBC2F4D0)
#define CLASS_1_5F0CB4974A75F258__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2F710)

inline static constexpr unsigned int Class_1_5F0CB4974A75F258_TypeDefinitionIndex = 56508;

class Class_1_5F0CB4974A75F258 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_79BB8E765900C549*>* PIGAMPLHOLB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F0CB4974A75F258__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_06ABC274DA701493(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5F0CB4974A75F258_METHOD_1_06ABC274DA701493_OFFSET))(this, a1);
	}

	::Class_1_79BB8E765900C549* Method_1_2A721CD8A312A4BD(::System::String* a1)
	{
		return ((::Class_1_79BB8E765900C549*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5F0CB4974A75F258_METHOD_1_2A721CD8A312A4BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ABE4DE83E844FB(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5F0CB4974A75F258_METHOD_1_33ABE4DE83E844FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB71C7423EF47273(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5F0CB4974A75F258_METHOD_1_BB71C7423EF47273_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F0CB4974A75F258_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}
};

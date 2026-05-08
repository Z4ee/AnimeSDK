#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_475;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_9488CF67525D7A59_METHOD_1_3491513EEDE20EE3_OFFSET UNITYSDK_OFFSET(0x119281F0)
#define CLASS_1_9488CF67525D7A59_METHOD_1_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0x11928360)
#define CLASS_1_9488CF67525D7A59_METHOD_1_C50B93169B85DAEA_2_OFFSET UNITYSDK_OFFSET(0x119283B0)
#define CLASS_1_9488CF67525D7A59_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x11928160)
#define CLASS_1_9488CF67525D7A59_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x119281B0)
#define CLASS_1_9488CF67525D7A59__CTOR_OFFSET UNITYSDK_OFFSET(0x11928150)

inline static constexpr unsigned int Class_1_9488CF67525D7A59_TypeDefinitionIndex = 73841;

class Class_1_9488CF67525D7A59 : public ::System::Object
{
public:
	static ::Class_1_9488CF67525D7A59** StaticGet_Field_1_0()
	{
		return (::Class_1_9488CF67525D7A59**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9488CF67525D7A59_TypeDefinitionIndex)->GetStaticField(0x2AA00);
	}
	// static const ::System::String* Field_1_1; // 0x0
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_475*>* Field_1_2; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9488CF67525D7A59__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_475* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_475*))((::PBYTE)hIl2Cpp + CLASS_1_9488CF67525D7A59_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9488CF67525D7A59_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_9488CF67525D7A59* Method_1_3491513EEDE20EE3()
	{
		return ((::Class_1_9488CF67525D7A59*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9488CF67525D7A59_METHOD_1_3491513EEDE20EE3_OFFSET))();
	}

	::System::Void Method_1_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_475* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_475*))((::PBYTE)hIl2Cpp + CLASS_1_9488CF67525D7A59_METHOD_1_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA_2(::Class_0_16E4307DCC419505_475* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_475*))((::PBYTE)hIl2Cpp + CLASS_1_9488CF67525D7A59_METHOD_1_C50B93169B85DAEA_2_OFFSET))(this, a1);
	}
};

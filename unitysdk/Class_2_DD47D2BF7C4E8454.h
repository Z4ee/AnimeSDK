#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_13AECAB1AEC5B524.h"

class Class_2_B62C942A2774BBB8;
class Class_3_70CBDC3D0F4B58F9;
class Class_3_7C525C964F57077F;
class Class_3_A9E2939AF1A43E78_1;
class Class_3_CC361EBAE12501BF_2;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_DD47D2BF7C4E8454_METHOD_2_136450746CECF34C_OFFSET UNITYSDK_OFFSET(0x13294210)
#define CLASS_2_DD47D2BF7C4E8454_METHOD_2_22D48208CD8F7CDF_OFFSET UNITYSDK_OFFSET(0x13293EF0)
#define CLASS_2_DD47D2BF7C4E8454_METHOD_2_491755F5F79618B7_OFFSET UNITYSDK_OFFSET(0x13294010)
#define CLASS_2_DD47D2BF7C4E8454_METHOD_2_53E0BE8B24BD41CF_OFFSET UNITYSDK_OFFSET(0x13294270)
#define CLASS_2_DD47D2BF7C4E8454_METHOD_2_6597D4884E1FE329_OFFSET UNITYSDK_OFFSET(0x13293D70)
#define CLASS_2_DD47D2BF7C4E8454_METHOD_2_AB46B96C861991EB_OFFSET UNITYSDK_OFFSET(0x13293B10)
#define CLASS_2_DD47D2BF7C4E8454__CTOR_OFFSET UNITYSDK_OFFSET(0x13293EA0)

inline static constexpr unsigned int Class_2_DD47D2BF7C4E8454_TypeDefinitionIndex = 46092;

class Class_2_DD47D2BF7C4E8454 : public ::Class_1_13AECAB1AEC5B524
{
public:
	::System::Func_2<::System::String*, ::Class_3_70CBDC3D0F4B58F9*>* Field_2_8; // 0x20
	::System::Func_2<::Class_3_70CBDC3D0F4B58F9*, ::System::String*>* Field_2_7; // 0x28
	::Class_3_A9E2939AF1A43E78_1* Field_2_0; // 0x30
	::System::String* Field_2_6; // 0x38
	::System::Double Field_2_3; // 0x40
	::System::Double Field_2_5; // 0x48
	::System::Int32 Field_2_2; // 0x50
	::System::Single Field_2_1; // 0x54
	::System::Double Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD47D2BF7C4E8454__CTOR_OFFSET))(this);
	}

	::System::Object* Method_2_AB46B96C861991EB(::System::String* a1, ::System::Int32 a2, ::Class_2_B62C942A2774BBB8* a3)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Int32, ::Class_2_B62C942A2774BBB8*))((::PBYTE)hIl2Cpp + CLASS_2_DD47D2BF7C4E8454_METHOD_2_AB46B96C861991EB_OFFSET))(this, a1, a2, a3);
	}

	::Class_3_70CBDC3D0F4B58F9* Method_2_22D48208CD8F7CDF(::System::String* a1)
	{
		return ((::Class_3_70CBDC3D0F4B58F9*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD47D2BF7C4E8454_METHOD_2_22D48208CD8F7CDF_OFFSET))(this, a1);
	}

	::Class_3_7C525C964F57077F* Method_2_6597D4884E1FE329(::System::Int32 a1)
	{
		return ((::Class_3_7C525C964F57077F*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DD47D2BF7C4E8454_METHOD_2_6597D4884E1FE329_OFFSET))(this, a1);
	}

	::Class_3_CC361EBAE12501BF_2* Method_2_491755F5F79618B7(::System::String* a1)
	{
		return ((::Class_3_CC361EBAE12501BF_2*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD47D2BF7C4E8454_METHOD_2_491755F5F79618B7_OFFSET))(this, a1);
	}

	::System::String* Method_2_136450746CECF34C(::Class_3_70CBDC3D0F4B58F9* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_70CBDC3D0F4B58F9*))((::PBYTE)hIl2Cpp + CLASS_2_DD47D2BF7C4E8454_METHOD_2_136450746CECF34C_OFFSET))(this, a1);
	}

	::Class_3_70CBDC3D0F4B58F9* Method_2_53E0BE8B24BD41CF(::System::String* a1)
	{
		return ((::Class_3_70CBDC3D0F4B58F9*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DD47D2BF7C4E8454_METHOD_2_53E0BE8B24BD41CF_OFFSET))(this, a1);
	}
};

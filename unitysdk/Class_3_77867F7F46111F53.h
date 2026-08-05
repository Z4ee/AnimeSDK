#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_77867F7F46111F53_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x14303910)
#define CLASS_3_77867F7F46111F53_METHOD_3_C1AC70DEDC81E328_OFFSET UNITYSDK_OFFSET(0x14303980)
#define CLASS_3_77867F7F46111F53_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14303DA0)
#define CLASS_3_77867F7F46111F53_METHOD_3_DBBC08CE9C3D39FB_OFFSET UNITYSDK_OFFSET(0x14303E30)
#define CLASS_3_77867F7F46111F53_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x14303710)
#define CLASS_3_77867F7F46111F53__CTOR_OFFSET UNITYSDK_OFFSET(0x14303C20)

inline static constexpr unsigned int Class_3_77867F7F46111F53_TypeDefinitionIndex = 79415;

class Class_3_77867F7F46111F53 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_7; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_0; // 0x20
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x30
	::Class_3_B537A0AA78803363* Field_3_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77867F7F46111F53__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77867F7F46111F53_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_77867F7F46111F53_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77867F7F46111F53_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_DBBC08CE9C3D39FB(::Foundation::ViewObject::ViewObjectHandle a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_77867F7F46111F53_METHOD_3_DBBC08CE9C3D39FB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_C1AC70DEDC81E328(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_77867F7F46111F53_METHOD_3_C1AC70DEDC81E328_OFFSET))(this, a1);
	}
};

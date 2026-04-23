#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F59C8DF29FF9694F;
namespace System { class String; }

#define CLASS_1_A0243775BF9F3850_METHOD_1_7625247F5256FA8B_OFFSET UNITYSDK_OFFSET(0x19D9B630)
#define CLASS_1_A0243775BF9F3850_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x19D9B5A0)
#define CLASS_1_A0243775BF9F3850_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19D9B580)
#define CLASS_1_A0243775BF9F3850_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19D9B5C0)
#define CLASS_1_A0243775BF9F3850__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D9B3F0)
#define CLASS_1_A0243775BF9F3850__CTOR_OFFSET UNITYSDK_OFFSET(0x19D9B370)

inline static constexpr unsigned int Class_1_A0243775BF9F3850_TypeDefinitionIndex = 39750;

class Class_1_A0243775BF9F3850 : public ::System::Object
{
public:
	::Class_1_F59C8DF29FF9694F* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_3; // 0x19
	::System::Boolean Field_1_2; // 0x1A

	::System::Void _ctor(::Class_1_F59C8DF29FF9694F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*))((::PBYTE)hIl2Cpp + CLASS_1_A0243775BF9F3850__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_F59C8DF29FF9694F* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0243775BF9F3850__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0243775BF9F3850_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0243775BF9F3850_METHOD_1_CE34EA208837238D_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0243775BF9F3850_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_7625247F5256FA8B(::Class_1_F59C8DF29FF9694F* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F59C8DF29FF9694F*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0243775BF9F3850_METHOD_1_7625247F5256FA8B_OFFSET))(this, a1, a2);
	}
};

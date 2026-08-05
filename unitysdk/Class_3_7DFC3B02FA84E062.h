#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C099C4133FE8CA88.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }

#define CLASS_3_7DFC3B02FA84E062_METHOD_3_675DA06A55CC9F65_OFFSET UNITYSDK_OFFSET(0x156D2640)
#define CLASS_3_7DFC3B02FA84E062_METHOD_3_929211D1584E25D0_OFFSET UNITYSDK_OFFSET(0x156D25D0)
#define CLASS_3_7DFC3B02FA84E062__CTOR_OFFSET UNITYSDK_OFFSET(0x156D2580)

inline static constexpr unsigned int Class_3_7DFC3B02FA84E062_TypeDefinitionIndex = 61858;

class Class_3_7DFC3B02FA84E062 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_7DFC3B02FA84E062*>
{
public:
	::Il2CppArray<::System::String*>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DFC3B02FA84E062__CTOR_OFFSET))(this);
	}

	::System::String* Method_3_929211D1584E25D0(::Enum_3_C099C4133FE8CA88 a1)
	{
		return ((::System::String*(*)(::PVOID, ::Enum_3_C099C4133FE8CA88))((::PBYTE)hIl2Cpp + CLASS_3_7DFC3B02FA84E062_METHOD_3_929211D1584E25D0_OFFSET))(this, a1);
	}

	::System::Void Method_3_675DA06A55CC9F65(::Enum_3_C099C4133FE8CA88 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_C099C4133FE8CA88, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_7DFC3B02FA84E062_METHOD_3_675DA06A55CC9F65_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_43BD383C98B4C0C5_123_CLASS_1_0FE2011BDC14B23B_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CF1630)
#define CLASS_1_43BD383C98B4C0C5_123_CLASS_1_0FE2011BDC14B23B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF1620)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_123_Class_1_0FE2011BDC14B23B_2_TypeDefinitionIndex = 69055;

class Class_1_43BD383C98B4C0C5_123_Class_1_0FE2011BDC14B23B_2 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43BD383C98B4C0C5_123_Class_1_0FE2011BDC14B23B_2_TypeDefinitionIndex)->GetStaticField(0x4F050);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_43BD383C98B4C0C5_123_Class_1_0FE2011BDC14B23B_2_TypeDefinitionIndex)->GetStaticField(0x4F058);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_123_CLASS_1_0FE2011BDC14B23B_2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_123_CLASS_1_0FE2011BDC14B23B_2__CCTOR_OFFSET))();
	}
};

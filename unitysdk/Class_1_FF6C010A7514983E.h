#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_FF6C010A7514983E_METHOD_1_0B7F37D204938A92_OFFSET UNITYSDK_OFFSET(0x142850F0)
#define CLASS_1_FF6C010A7514983E__CTOR_OFFSET UNITYSDK_OFFSET(0x142853A0)

inline static constexpr unsigned int Class_1_FF6C010A7514983E_TypeDefinitionIndex = 61853;

class Class_1_FF6C010A7514983E : public ::System::Object
{
public:
	static ::Class_1_FF6C010A7514983E** StaticGet_Field_1_0()
	{
		return (::Class_1_FF6C010A7514983E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF6C010A7514983E_TypeDefinitionIndex)->GetStaticField(0x30390);
	}
	::System::String* AuthAppID; // 0x10
	::System::String* AuthKey; // 0x18
	::System::String* AuthkeyVer; // 0x20
	::System::String* Lang; // 0x28
	::System::String* GameBiz; // 0x30
	::System::String* Game; // 0x38
	::System::String* SignType; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF6C010A7514983E__CTOR_OFFSET))(this);
	}

	static ::Class_1_FF6C010A7514983E* Method_1_0B7F37D204938A92(::System::String* a1)
	{
		return ((::Class_1_FF6C010A7514983E*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF6C010A7514983E_METHOD_1_0B7F37D204938A92_OFFSET))(a1);
	}
};

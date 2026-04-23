#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D0948460F4810867;
namespace System { class String; }

#define CLASS_1_049B9A4D827304A8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11DD4D70)
#define CLASS_1_049B9A4D827304A8__CTOR_OFFSET UNITYSDK_OFFSET(0x11DD4DC0)

inline static constexpr unsigned int Class_1_049B9A4D827304A8_TypeDefinitionIndex = 72670;

class Class_1_049B9A4D827304A8 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_D0948460F4810867* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049B9A4D827304A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_049B9A4D827304A8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};

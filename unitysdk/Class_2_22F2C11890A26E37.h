#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_22F2C11890A26E37_METHOD_2_963F37B88C8AFF79_OFFSET UNITYSDK_OFFSET(0x1B60EF50)
#define CLASS_2_22F2C11890A26E37__CTOR_OFFSET UNITYSDK_OFFSET(0x1B60F1C0)

inline static constexpr unsigned int Class_2_22F2C11890A26E37_TypeDefinitionIndex = 22045;

class Class_2_22F2C11890A26E37 : public ::RPG::GameCore::JsonConfig
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x24
	::System::Boolean Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22F2C11890A26E37__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_963F37B88C8AFF79(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_22F2C11890A26E37*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_22F2C11890A26E37*&))((::PBYTE)hIl2Cpp + CLASS_2_22F2C11890A26E37_METHOD_2_963F37B88C8AFF79_OFFSET))(a1, a2);
	}
};

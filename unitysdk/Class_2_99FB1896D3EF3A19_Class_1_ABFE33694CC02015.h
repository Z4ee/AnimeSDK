#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BBC8043D4DD55A71;
namespace System { class String; }

#define CLASS_2_99FB1896D3EF3A19_CLASS_1_ABFE33694CC02015_METHOD_1_F7C17819CC024274_OFFSET UNITYSDK_OFFSET(0x150A1F40)
#define CLASS_2_99FB1896D3EF3A19_CLASS_1_ABFE33694CC02015__CTOR_OFFSET UNITYSDK_OFFSET(0x150A1F30)

inline static constexpr unsigned int Class_2_99FB1896D3EF3A19_Class_1_ABFE33694CC02015_TypeDefinitionIndex = 71905;

class Class_2_99FB1896D3EF3A19_Class_1_ABFE33694CC02015 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19_CLASS_1_ABFE33694CC02015__CTOR_OFFSET))(this);
	}

	::Class_3_BBC8043D4DD55A71* Method_1_F7C17819CC024274(::System::String* a1)
	{
		return ((::Class_3_BBC8043D4DD55A71*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_99FB1896D3EF3A19_CLASS_1_ABFE33694CC02015_METHOD_1_F7C17819CC024274_OFFSET))(this, a1);
	}
};

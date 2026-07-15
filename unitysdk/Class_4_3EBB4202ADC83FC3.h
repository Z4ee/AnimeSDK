#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_3EBB4202ADC83FC3_METHOD_4_0C2DE072D09B1F26_OFFSET UNITYSDK_OFFSET(0x1B5F1B50)
#define CLASS_4_3EBB4202ADC83FC3_METHOD_4_0EE9A132E4098A12_OFFSET UNITYSDK_OFFSET(0x1B5F1B00)
#define CLASS_4_3EBB4202ADC83FC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F1B40)

inline static constexpr unsigned int Class_4_3EBB4202ADC83FC3_TypeDefinitionIndex = 21628;

class Class_4_3EBB4202ADC83FC3 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* Field_4_0; // 0x18
	::System::String* Field_4_1; // 0x20
	::System::Boolean Field_4_2; // 0x28
	::System::Boolean Field_4_3; // 0x29
	::System::Boolean Field_4_4; // 0x2A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3EBB4202ADC83FC3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_0EE9A132E4098A12(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3EBB4202ADC83FC3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3EBB4202ADC83FC3*&))((::PBYTE)hIl2Cpp + CLASS_4_3EBB4202ADC83FC3_METHOD_4_0EE9A132E4098A12_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_0C2DE072D09B1F26(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3EBB4202ADC83FC3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3EBB4202ADC83FC3*))((::PBYTE)hIl2Cpp + CLASS_4_3EBB4202ADC83FC3_METHOD_4_0C2DE072D09B1F26_OFFSET))(a1, a2);
	}
};

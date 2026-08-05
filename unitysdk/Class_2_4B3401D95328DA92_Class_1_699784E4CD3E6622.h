#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4B3401D95328DA92;
class Class_2_67F3C5E647F33C2D;
namespace System { class Action; }

#define CLASS_2_4B3401D95328DA92_CLASS_1_699784E4CD3E6622_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x128FC930)
#define CLASS_2_4B3401D95328DA92_CLASS_1_699784E4CD3E6622_METHOD_1_E79871D193CACBCC_OFFSET UNITYSDK_OFFSET(0x128FC8A0)
#define CLASS_2_4B3401D95328DA92_CLASS_1_699784E4CD3E6622__CTOR_OFFSET UNITYSDK_OFFSET(0x128FC890)

inline static constexpr unsigned int Class_2_4B3401D95328DA92_Class_1_699784E4CD3E6622_TypeDefinitionIndex = 68303;

class Class_2_4B3401D95328DA92_Class_1_699784E4CD3E6622 : public ::System::Object
{
public:
	::Class_2_4B3401D95328DA92* Field_1_1; // 0x10
	::System::Action* Field_1_7; // 0x18
	::System::Action* Field_1_6; // 0x20
	::System::Action* Field_1_5; // 0x28
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_699784E4CD3E6622__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E79871D193CACBCC(::Class_2_67F3C5E647F33C2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_67F3C5E647F33C2D*))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_699784E4CD3E6622_METHOD_1_E79871D193CACBCC_OFFSET))(this, a1);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_699784E4CD3E6622_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}
};

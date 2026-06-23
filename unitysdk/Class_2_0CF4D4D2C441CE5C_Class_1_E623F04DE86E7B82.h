#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_0CF4D4D2C441CE5C_CLASS_1_E623F04DE86E7B82_METHOD_1_860B4ADDC1354774_OFFSET UNITYSDK_OFFSET(0x1861BFF0)
#define CLASS_2_0CF4D4D2C441CE5C_CLASS_1_E623F04DE86E7B82__CTOR_OFFSET UNITYSDK_OFFSET(0x1861BFE0)

inline static constexpr unsigned int Class_2_0CF4D4D2C441CE5C_Class_1_E623F04DE86E7B82_TypeDefinitionIndex = 82111;

class Class_2_0CF4D4D2C441CE5C_Class_1_E623F04DE86E7B82 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Action_1<::System::String*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0CF4D4D2C441CE5C_CLASS_1_E623F04DE86E7B82__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_860B4ADDC1354774(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_0CF4D4D2C441CE5C_CLASS_1_E623F04DE86E7B82_METHOD_1_860B4ADDC1354774_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_134;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E6AFBE67B5B92367_METHOD_1_73A12C1FFADBD599_OFFSET UNITYSDK_OFFSET(0x187840E0)
#define CLASS_1_E6AFBE67B5B92367__CTOR_OFFSET UNITYSDK_OFFSET(0x187840D0)

inline static constexpr unsigned int Class_1_E6AFBE67B5B92367_TypeDefinitionIndex = 47691;

class Class_1_E6AFBE67B5B92367 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_4; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_7; // 0x1C
	::System::Boolean Field_1_6; // 0x20
	::System::Boolean Field_1_5; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6AFBE67B5B92367__CTOR_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_134* Method_1_73A12C1FFADBD599()
	{
		return ((::Class_2_208CC9941471731A_134*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6AFBE67B5B92367_METHOD_1_73A12C1FFADBD599_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_779;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D70971723CC3AF9E__CTOR_OFFSET UNITYSDK_OFFSET(0x14F5AD40)

inline static constexpr unsigned int Class_1_D70971723CC3AF9E_TypeDefinitionIndex = 17973;

class Class_1_D70971723CC3AF9E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_779*>* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D70971723CC3AF9E__CTOR_OFFSET))(this);
	}
};

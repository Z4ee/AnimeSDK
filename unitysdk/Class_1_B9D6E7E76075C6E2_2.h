#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB7C22E2512BB436;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x145E98B0)
#define CLASS_1_B9D6E7E76075C6E2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x145E98A0)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_2_TypeDefinitionIndex = 54396;

class Class_1_B9D6E7E76075C6E2_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_BB7C22E2512BB436*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_BB7C22E2512BB436*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BB7C22E2512BB436*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_BB7C22E2512BB436*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_BB7C22E2512BB436*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};

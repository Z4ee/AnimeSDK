#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57849CE5A07315CD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9D6E7E76075C6E2_4_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x11B4E270)
#define CLASS_1_B9D6E7E76075C6E2_4__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4E260)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_4_TypeDefinitionIndex = 87183;

class Class_1_B9D6E7E76075C6E2_4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_57849CE5A07315CD*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_57849CE5A07315CD*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_57849CE5A07315CD*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_4__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_57849CE5A07315CD*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_57849CE5A07315CD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_4_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}
};

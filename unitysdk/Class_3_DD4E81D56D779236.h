#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_97B8C5560BEC00CB.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_138;

#define CLASS_3_DD4E81D56D779236_METHOD_3_2368D262BE3375E9_OFFSET UNITYSDK_OFFSET(0x17841710)
#define CLASS_3_DD4E81D56D779236__CTOR_OFFSET UNITYSDK_OFFSET(0x178416A0)

inline static constexpr unsigned int Class_3_DD4E81D56D779236_TypeDefinitionIndex = 77240;

class Class_3_DD4E81D56D779236 : public ::Class_2_97B8C5560BEC00CB<::System::Int32, ::System::Int32>
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DD4E81D56D779236__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_138<::System::Int32>* Method_3_2368D262BE3375E9(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_138<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_DD4E81D56D779236_METHOD_3_2368D262BE3375E9_OFFSET))(this, a1);
	}
};

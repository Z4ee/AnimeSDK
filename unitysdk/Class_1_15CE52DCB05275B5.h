#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_747;
class Class_1_8EC6DE90C67864D2;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_15CE52DCB05275B5_METHOD_1_499B5D7A3B2CD0B4_OFFSET UNITYSDK_OFFSET(0x123766D0)
#define CLASS_1_15CE52DCB05275B5_METHOD_1_EDDA5C2611CFE4B6_OFFSET UNITYSDK_OFFSET(0x123763C0)
#define CLASS_1_15CE52DCB05275B5__CTOR_OFFSET UNITYSDK_OFFSET(0x12376380)

inline static constexpr unsigned int Class_1_15CE52DCB05275B5_TypeDefinitionIndex = 60391;

class Class_1_15CE52DCB05275B5 : public ::System::Object
{
public:
	::Class_1_8EC6DE90C67864D2* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15CE52DCB05275B5__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>* Method_1_EDDA5C2611CFE4B6(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_747*>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_15CE52DCB05275B5_METHOD_1_EDDA5C2611CFE4B6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_499B5D7A3B2CD0B4(::Class_0_16E4307DCC419505_747* a1, ::Class_0_16E4307DCC419505_747* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_747*, ::Class_0_16E4307DCC419505_747*))((::PBYTE)hIl2Cpp + CLASS_1_15CE52DCB05275B5_METHOD_1_499B5D7A3B2CD0B4_OFFSET))(this, a1, a2);
	}
};

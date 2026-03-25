#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_648;
class Class_1_8EC6DE90C67864D2;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_15CE52DCB05275B5_METHOD_1_499B5D7A3B2CD0B4_OFFSET UNITYSDK_OFFSET(0x8DF6010)
#define CLASS_1_15CE52DCB05275B5_METHOD_1_EDDA5C2611CFE4B6_OFFSET UNITYSDK_OFFSET(0x8DF5D00)
#define CLASS_1_15CE52DCB05275B5__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF5CC0)

inline static constexpr unsigned int Class_1_15CE52DCB05275B5_TypeDefinitionIndex = 53264;

class Class_1_15CE52DCB05275B5 : public ::System::Object
{
public:
	::Class_1_8EC6DE90C67864D2* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15CE52DCB05275B5__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_648*>* Method_1_EDDA5C2611CFE4B6(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_648*>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_15CE52DCB05275B5_METHOD_1_EDDA5C2611CFE4B6_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_499B5D7A3B2CD0B4(::Class_0_16E4307DCC419505_648* a1, ::Class_0_16E4307DCC419505_648* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_648*, ::Class_0_16E4307DCC419505_648*))((::PBYTE)hIl2Cpp + CLASS_1_15CE52DCB05275B5_METHOD_1_499B5D7A3B2CD0B4_OFFSET))(this, a1, a2);
	}
};

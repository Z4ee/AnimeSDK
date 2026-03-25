#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_648;
class Class_0_16E4307DCC419505_650;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EE101DEF3B255782_METHOD_1_14DED4FF64F29636_OFFSET UNITYSDK_OFFSET(0x10BBB520)
#define CLASS_1_EE101DEF3B255782__CTOR_OFFSET UNITYSDK_OFFSET(0x10BBB470)

inline static constexpr unsigned int Class_1_EE101DEF3B255782_TypeDefinitionIndex = 53234;

class Class_1_EE101DEF3B255782 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_650*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE101DEF3B255782__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_648*>* Method_1_14DED4FF64F29636(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_648*>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_EE101DEF3B255782_METHOD_1_14DED4FF64F29636_OFFSET))(this, a1);
	}
};

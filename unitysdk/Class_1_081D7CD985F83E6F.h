#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_480;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_081D7CD985F83E6F_METHOD_1_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0x14C85520)
#define CLASS_1_081D7CD985F83E6F_METHOD_1_DB845D3FBCE778E3_OFFSET UNITYSDK_OFFSET(0x14C857A0)
#define CLASS_1_081D7CD985F83E6F_METHOD_1_E5FBE1A66FD1D401_OFFSET UNITYSDK_OFFSET(0x14C85600)
#define CLASS_1_081D7CD985F83E6F__CTOR_OFFSET UNITYSDK_OFFSET(0x14C85450)

inline static constexpr unsigned int Class_1_081D7CD985F83E6F_TypeDefinitionIndex = 68685;

class Class_1_081D7CD985F83E6F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_480*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_480*>* Field_1_0; // 0x18
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_081D7CD985F83E6F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_480* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_480*))((::PBYTE)hIl2Cpp + CLASS_1_081D7CD985F83E6F_METHOD_1_0EF345F8F1CF4181_OFFSET))(this, a1);
	}

	::System::Void Method_1_E5FBE1A66FD1D401(::Class_0_16E4307DCC419505_480* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_480*))((::PBYTE)hIl2Cpp + CLASS_1_081D7CD985F83E6F_METHOD_1_E5FBE1A66FD1D401_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB845D3FBCE778E3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_081D7CD985F83E6F_METHOD_1_DB845D3FBCE778E3_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define CLASS_2_6A477A198BBBE52E_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x1358C1E0)
#define CLASS_2_6A477A198BBBE52E_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1358C0A0)
#define CLASS_2_6A477A198BBBE52E__CTOR_OFFSET UNITYSDK_OFFSET(0x1358C130)

inline static constexpr unsigned int Class_2_6A477A198BBBE52E_TypeDefinitionIndex = 43677;

class Class_2_6A477A198BBBE52E : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::Boolean>* Field_2_1; // 0x70
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x78
	::Class_0_16E4307DCC41950C_14<::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A477A198BBBE52E__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A477A198BBBE52E_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A477A198BBBE52E_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}
};

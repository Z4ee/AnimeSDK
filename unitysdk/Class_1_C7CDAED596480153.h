#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_C7CDAED596480153_ADD_ACTIONS_OFFSET UNITYSDK_OFFSET(0x16612550)
#define CLASS_1_C7CDAED596480153_METHOD_1_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x16612470)
#define CLASS_1_C7CDAED596480153_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16612500)
#define CLASS_1_C7CDAED596480153_REMOVE_ACTIONS_OFFSET UNITYSDK_OFFSET(0x166125B0)
#define CLASS_1_C7CDAED596480153__CTOR_OFFSET UNITYSDK_OFFSET(0x16612450)

inline static constexpr unsigned int Class_1_C7CDAED596480153_TypeDefinitionIndex = 28738;

class Class_1_C7CDAED596480153 : public ::System::Object
{
public:
	::System::Action* Actions; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C7CDAED596480153__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C7CDAED596480153_METHOD_1_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7CDAED596480153_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void add_Actions(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C7CDAED596480153_ADD_ACTIONS_OFFSET))(this, value);
	}

	::System::Void remove_Actions(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C7CDAED596480153_REMOVE_ACTIONS_OFFSET))(this, value);
	}
};

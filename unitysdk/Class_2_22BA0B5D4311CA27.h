#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC41950C_13;

#define CLASS_2_22BA0B5D4311CA27_METHOD_2_971F3C496B0BF972_OFFSET UNITYSDK_OFFSET(0x18ACE220)
#define CLASS_2_22BA0B5D4311CA27_METHOD_2_AC04E7CF5073C32B_OFFSET UNITYSDK_OFFSET(0x18ACE230)
#define CLASS_2_22BA0B5D4311CA27_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18ACE130)
#define CLASS_2_22BA0B5D4311CA27__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACE1C0)

inline static constexpr unsigned int Class_2_22BA0B5D4311CA27_TypeDefinitionIndex = 77523;

class Class_2_22BA0B5D4311CA27 : public ::Class_1_F4299CC27263318B
{
public:
	::Class_0_16E4307DCC41950C_13<::System::String*>* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22BA0B5D4311CA27__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22BA0B5D4311CA27_ONCREATEPROPERTY_OFFSET))(this);
	}

	::Class_0_16E4307DCC41950C_13<::System::String*>* Method_2_971F3C496B0BF972()
	{
		return ((::Class_0_16E4307DCC41950C_13<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22BA0B5D4311CA27_METHOD_2_971F3C496B0BF972_OFFSET))(this);
	}

	::System::Void Method_2_AC04E7CF5073C32B(::Class_0_16E4307DCC41950C_13<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_22BA0B5D4311CA27_METHOD_2_AC04E7CF5073C32B_OFFSET))(this, a1);
	}
};

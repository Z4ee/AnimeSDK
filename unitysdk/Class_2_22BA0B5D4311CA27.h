#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C331A5DC726F030A.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_165;

#define CLASS_2_22BA0B5D4311CA27_METHOD_2_971F3C496B0BF972_OFFSET UNITYSDK_OFFSET(0x12C30EC0)
#define CLASS_2_22BA0B5D4311CA27_METHOD_2_AC04E7CF5073C32B_OFFSET UNITYSDK_OFFSET(0x12C30EB0)
#define CLASS_2_22BA0B5D4311CA27_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x12C30DC0)
#define CLASS_2_22BA0B5D4311CA27__CTOR_OFFSET UNITYSDK_OFFSET(0x12C30E50)

inline static constexpr unsigned int Class_2_22BA0B5D4311CA27_TypeDefinitionIndex = 48964;

class Class_2_22BA0B5D4311CA27 : public ::Class_1_C331A5DC726F030A
{
public:
	::Class_0_16E4307DCC419505_165<::System::String*>* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22BA0B5D4311CA27__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22BA0B5D4311CA27_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_AC04E7CF5073C32B(::Class_0_16E4307DCC419505_165<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_165<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_22BA0B5D4311CA27_METHOD_2_AC04E7CF5073C32B_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_165<::System::String*>* Method_2_971F3C496B0BF972()
	{
		return ((::Class_0_16E4307DCC419505_165<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22BA0B5D4311CA27_METHOD_2_971F3C496B0BF972_OFFSET))(this);
	}
};

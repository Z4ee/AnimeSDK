#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_871;

#define CLASS_1_7D00BD1ECE7A4873_GET_NEEDRELOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0x88745E0)
#define CLASS_1_7D00BD1ECE7A4873_METHOD_1_270550E508A1D3CD_OFFSET UNITYSDK_OFFSET(0x8874600)
#define CLASS_1_7D00BD1ECE7A4873_SET_NEEDRELOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0x88745F0)
#define CLASS_1_7D00BD1ECE7A4873__CTOR_OFFSET UNITYSDK_OFFSET(0x8874720)

inline static constexpr unsigned int Class_1_7D00BD1ECE7A4873_TypeDefinitionIndex = 59342;

class Class_1_7D00BD1ECE7A4873 : public ::System::Object
{
public:
	::System::Boolean _NeedReloadOperations_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873__CTOR_OFFSET))(this);
	}

	::System::Boolean get_NeedReloadOperations()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873_GET_NEEDRELOADOPERATIONS_OFFSET))(this);
	}

	::System::Void set_NeedReloadOperations(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873_SET_NEEDRELOADOPERATIONS_OFFSET))(this, value);
	}

	::System::Void Method_1_270550E508A1D3CD(::Class_0_16E4307DCC419505_871* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_871*))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873_METHOD_1_270550E508A1D3CD_OFFSET))(this, a1);
	}
};

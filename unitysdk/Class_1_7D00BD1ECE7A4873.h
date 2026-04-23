#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_987;

#define CLASS_1_7D00BD1ECE7A4873_GET_NEEDRELOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0x12AD8CE0)
#define CLASS_1_7D00BD1ECE7A4873_METHOD_1_270550E508A1D3CD_OFFSET UNITYSDK_OFFSET(0x12AD8D00)
#define CLASS_1_7D00BD1ECE7A4873_SET_NEEDRELOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0x12AD8CF0)
#define CLASS_1_7D00BD1ECE7A4873__CTOR_OFFSET UNITYSDK_OFFSET(0x12AD8E20)

inline static constexpr unsigned int Class_1_7D00BD1ECE7A4873_TypeDefinitionIndex = 66737;

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

	::System::Void Method_1_270550E508A1D3CD(::Class_0_16E4307DCC419505_987* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_987*))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873_METHOD_1_270550E508A1D3CD_OFFSET))(this, a1);
	}
};

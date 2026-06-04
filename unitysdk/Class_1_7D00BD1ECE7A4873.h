#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1037;

#define CLASS_1_7D00BD1ECE7A4873_GET_NEEDRELOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0x13AD24E0)
#define CLASS_1_7D00BD1ECE7A4873_METHOD_1_270550E508A1D3CD_OFFSET UNITYSDK_OFFSET(0x13AD2500)
#define CLASS_1_7D00BD1ECE7A4873_SET_NEEDRELOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0x13AD24F0)
#define CLASS_1_7D00BD1ECE7A4873__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD2620)

inline static constexpr unsigned int Class_1_7D00BD1ECE7A4873_TypeDefinitionIndex = 67677;

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

	::System::Void set_NeedReloadOperations(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873_SET_NEEDRELOADOPERATIONS_OFFSET))(this, a1);
	}

	::System::Void Method_1_270550E508A1D3CD(::Class_0_16E4307DCC419505_1037* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1037*))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873_METHOD_1_270550E508A1D3CD_OFFSET))(this, a1);
	}
};

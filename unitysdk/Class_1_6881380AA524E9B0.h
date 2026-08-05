#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_301;
class Class_0_16E4307DCC419505_487;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6881380AA524E9B0_METHOD_1_1E725F834BE760E8_OFFSET UNITYSDK_OFFSET(0x1612A830)
#define CLASS_1_6881380AA524E9B0_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x1612A920)
#define CLASS_1_6881380AA524E9B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1612A8E0)

inline static constexpr unsigned int Class_1_6881380AA524E9B0_TypeDefinitionIndex = 88992;

class Class_1_6881380AA524E9B0 : public ::System::Object
{
public:
	::System::Action_1<::Class_0_16E4307DCC419505_301*>* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_487* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6881380AA524E9B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E725F834BE760E8(::System::Action_1<::Class_0_16E4307DCC419505_301*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_301*>*))((::PBYTE)hIl2Cpp + CLASS_1_6881380AA524E9B0_METHOD_1_1E725F834BE760E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_487* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_487*))((::PBYTE)hIl2Cpp + CLASS_1_6881380AA524E9B0_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}
};

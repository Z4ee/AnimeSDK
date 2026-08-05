#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D74CF6DD5FD85DAD;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_29B05041B716AB94_CLASS_1_B1C449965F0C9625_METHOD_1_1B6532A21B76CF3C_OFFSET UNITYSDK_OFFSET(0x17687CB0)
#define CLASS_1_29B05041B716AB94_CLASS_1_B1C449965F0C9625_METHOD_1_4CA35F322974156E_OFFSET UNITYSDK_OFFSET(0x17687DC0)
#define CLASS_1_29B05041B716AB94_CLASS_1_B1C449965F0C9625__CTOR_OFFSET UNITYSDK_OFFSET(0x17687CA0)

inline static constexpr unsigned int Class_1_29B05041B716AB94_Class_1_B1C449965F0C9625_TypeDefinitionIndex = 91477;

class Class_1_29B05041B716AB94_Class_1_B1C449965F0C9625 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::System::Int32>* Field_1_0; // 0x18
	::Class_1_D74CF6DD5FD85DAD* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_B1C449965F0C9625__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1B6532A21B76CF3C(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_B1C449965F0C9625_METHOD_1_1B6532A21B76CF3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_4CA35F322974156E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29B05041B716AB94_CLASS_1_B1C449965F0C9625_METHOD_1_4CA35F322974156E_OFFSET))(this, a1);
	}
};

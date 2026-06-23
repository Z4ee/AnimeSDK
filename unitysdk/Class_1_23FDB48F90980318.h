#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E3019CE6003C7D3C;
namespace System { class Action; }

#define CLASS_1_23FDB48F90980318_METHOD_1_2450CFC043E97F54_1_OFFSET UNITYSDK_OFFSET(0xD46A060)
#define CLASS_1_23FDB48F90980318_METHOD_1_2450CFC043E97F54_2_OFFSET UNITYSDK_OFFSET(0xD46A210)
#define CLASS_1_23FDB48F90980318_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xD469F00)
#define CLASS_1_23FDB48F90980318_METHOD_1_30BF353B52E0DF4D_OFFSET UNITYSDK_OFFSET(0xD46A3C0)
#define CLASS_1_23FDB48F90980318_METHOD_1_3AE2D05F86AD3482_1_OFFSET UNITYSDK_OFFSET(0xD46A310)
#define CLASS_1_23FDB48F90980318_METHOD_1_3AE2D05F86AD3482_OFFSET UNITYSDK_OFFSET(0xD46A160)
#define CLASS_1_23FDB48F90980318_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0xD46A010)
#define CLASS_1_23FDB48F90980318__CTOR_OFFSET UNITYSDK_OFFSET(0xD469EF0)

inline static constexpr unsigned int Class_1_23FDB48F90980318_TypeDefinitionIndex = 79383;

class Class_1_23FDB48F90980318 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action* Field_1_3; // 0x18
	::System::Action* Field_1_1; // 0x20
	::Class_1_E3019CE6003C7D3C* Field_1_0; // 0x28

	::System::Void _ctor(::Class_1_E3019CE6003C7D3C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3019CE6003C7D3C*))((::PBYTE)hIl2Cpp + CLASS_1_23FDB48F90980318__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23FDB48F90980318_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23FDB48F90980318_METHOD_1_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_1_3AE2D05F86AD3482(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_23FDB48F90980318_METHOD_1_3AE2D05F86AD3482_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23FDB48F90980318_METHOD_1_2450CFC043E97F54_1_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23FDB48F90980318_METHOD_1_2450CFC043E97F54_2_OFFSET))(this);
	}

	::System::Void Method_1_3AE2D05F86AD3482_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_23FDB48F90980318_METHOD_1_3AE2D05F86AD3482_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_30BF353B52E0DF4D(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_23FDB48F90980318_METHOD_1_30BF353B52E0DF4D_OFFSET))(this, a1, a2);
	}
};

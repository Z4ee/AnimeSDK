#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F9B8FAD13AB85B32_1.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_22102C1359B556A6_METHOD_3_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xB8AD140)
#define CLASS_3_22102C1359B556A6_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xB8AD470)
#define CLASS_3_22102C1359B556A6_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB8AD410)
#define CLASS_3_22102C1359B556A6_METHOD_3_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0xB8AD1D0)
#define CLASS_3_22102C1359B556A6__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AD370)
#define CLASS_3_22102C1359B556A6__ONBIND_OFFSET UNITYSDK_OFFSET(0xB8AD090)
#define CLASS_3_22102C1359B556A6__ONTICK_OFFSET UNITYSDK_OFFSET(0xB8AD2F0)
#define CLASS_3_22102C1359B556A6__STARTFADEIN_B__5_0_OFFSET UNITYSDK_OFFSET(0xB8AD3A0)
#define CLASS_3_22102C1359B556A6___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xB8AD3B0)
#define CLASS_3_22102C1359B556A6___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xB8AD4D0)

inline static constexpr unsigned int Class_3_22102C1359B556A6_TypeDefinitionIndex = 58762;

class Class_3_22102C1359B556A6 : public ::Class_2_F9B8FAD13AB85B32_1
{
public:
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_6; // 0x0
	::UnityEngine::Animation* Field_3_0; // 0x60
	::System::Single Field_3_4; // 0x68
	::System::Boolean Field_3_3; // 0x6C
	::System::Single Field_3_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6_METHOD_3_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_3_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6_METHOD_3_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _StartFadeIn_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6__STARTFADEIN_B__5_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_22102C1359B556A6___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};

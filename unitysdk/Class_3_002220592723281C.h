#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F9B8FAD13AB85B32_1.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_002220592723281C_METHOD_3_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xA78B180)
#define CLASS_3_002220592723281C_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA78B550)
#define CLASS_3_002220592723281C_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA78B4F0)
#define CLASS_3_002220592723281C_METHOD_3_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0xA78B230)
#define CLASS_3_002220592723281C__CTOR_OFFSET UNITYSDK_OFFSET(0xA78B420)
#define CLASS_3_002220592723281C__ONBIND_OFFSET UNITYSDK_OFFSET(0xA78B120)
#define CLASS_3_002220592723281C__ONTICK_OFFSET UNITYSDK_OFFSET(0xA78B3A0)
#define CLASS_3_002220592723281C__STARTFADEIN_B__5_0_OFFSET UNITYSDK_OFFSET(0xA78B450)
#define CLASS_3_002220592723281C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA78B490)
#define CLASS_3_002220592723281C___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA78B5B0)

inline static constexpr unsigned int Class_3_002220592723281C_TypeDefinitionIndex = 67058;

class Class_3_002220592723281C : public ::Class_2_F9B8FAD13AB85B32_1
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	::UnityEngine::Animation* Field_3_3; // 0x60
	::System::Single Field_3_4; // 0x68
	::System::Single Field_3_5; // 0x6C
	::System::Boolean Field_3_6; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_002220592723281C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_002220592723281C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_002220592723281C_METHOD_3_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_3_98060E4D16CBDFE4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_002220592723281C_METHOD_3_98060E4D16CBDFE4_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_002220592723281C__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _StartFadeIn_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_002220592723281C__STARTFADEIN_B__5_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_002220592723281C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_002220592723281C_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_002220592723281C_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_002220592723281C___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}
};

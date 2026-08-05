#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F97B015544BE936B;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_D3AFDFA22385B1B4_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x1599D030)
#define CLASS_1_D3AFDFA22385B1B4_METHOD_1_4D5321C3FF69F924_OFFSET UNITYSDK_OFFSET(0x1599D1D0)
#define CLASS_1_D3AFDFA22385B1B4_METHOD_1_9FCCB5B9D36D35E9_OFFSET UNITYSDK_OFFSET(0x1599D2D0)
#define CLASS_1_D3AFDFA22385B1B4_METHOD_1_B22DDFD266DDE41C_OFFSET UNITYSDK_OFFSET(0x1599D680)
#define CLASS_1_D3AFDFA22385B1B4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1599D0C0)
#define CLASS_1_D3AFDFA22385B1B4_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x1599D110)
#define CLASS_1_D3AFDFA22385B1B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1599D020)

inline static constexpr unsigned int Class_1_D3AFDFA22385B1B4_TypeDefinitionIndex = 40628;

class Class_1_D3AFDFA22385B1B4 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_14; // 0x10
	::Class_3_F97B015544BE936B* Field_1_9; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Single Field_1_0; // 0x24
	::System::Single Field_1_5; // 0x28
	::System::Single Field_1_8; // 0x2C
	::System::Single Field_1_6; // 0x30
	::System::Single Field_1_11; // 0x34
	::System::Single Field_1_15; // 0x38
	::System::Boolean Field_1_4; // 0x3C
	::System::Boolean Field_1_7; // 0x3D
	::System::Single Field_1_10; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3AFDFA22385B1B4__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3AFDFA22385B1B4_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3AFDFA22385B1B4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D3AFDFA22385B1B4_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_4D5321C3FF69F924(::Class_3_F97B015544BE936B* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D3AFDFA22385B1B4_METHOD_1_4D5321C3FF69F924_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_9FCCB5B9D36D35E9(::System::Boolean& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D3AFDFA22385B1B4_METHOD_1_9FCCB5B9D36D35E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_B22DDFD266DDE41C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D3AFDFA22385B1B4_METHOD_1_B22DDFD266DDE41C_OFFSET))(this, a1);
	}
};

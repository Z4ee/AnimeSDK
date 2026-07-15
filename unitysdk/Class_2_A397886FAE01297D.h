#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_89120A467F7A010D_1;
class Class_1_A59D20F391C51503;
class Class_2_0F19373B970769FA;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class SmoothMask; }

#define CLASS_2_A397886FAE01297D_METHOD_2_5917DE3F8C3A663D_OFFSET UNITYSDK_OFFSET(0x152D12D0)
#define CLASS_2_A397886FAE01297D_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x152D0EF0)
#define CLASS_2_A397886FAE01297D_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x152D11E0)
#define CLASS_2_A397886FAE01297D_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x152D0E30)
#define CLASS_2_A397886FAE01297D_METHOD_2_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x152D1270)
#define CLASS_2_A397886FAE01297D_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x152D0EA0)
#define CLASS_2_A397886FAE01297D_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x152D1600)
#define CLASS_2_A397886FAE01297D_METHOD_2_F552CBD036D44B0E_OFFSET UNITYSDK_OFFSET(0x152D1490)
#define CLASS_2_A397886FAE01297D__CTOR_OFFSET UNITYSDK_OFFSET(0x152D16D0)
#define CLASS_2_A397886FAE01297D__ONBIND_OFFSET UNITYSDK_OFFSET(0x152D0D00)

inline static constexpr unsigned int Class_2_A397886FAE01297D_TypeDefinitionIndex = 68710;

class Class_2_A397886FAE01297D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::UnityEngine::Animation* Field_2_6; // 0x60
	::UnityEngine::UI::SmoothMask* Field_2_7; // 0x68
	::UnityEngine::Transform* Field_2_8; // 0x70
	::Class_2_0F19373B970769FA* Field_2_9; // 0x78
	::UnityEngine::RectTransform* Field_2_10; // 0x80
	::Class_1_89120A467F7A010D_1* Field_2_11; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A397886FAE01297D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A397886FAE01297D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_A397886FAE01297D_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A397886FAE01297D_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A397886FAE01297D_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A397886FAE01297D_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_5917DE3F8C3A663D(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A397886FAE01297D_METHOD_2_5917DE3F8C3A663D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F552CBD036D44B0E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A397886FAE01297D_METHOD_2_F552CBD036D44B0E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A397886FAE01297D_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::Class_1_A59D20F391C51503* Method_2_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_A59D20F391C51503*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A397886FAE01297D_METHOD_2_9B39F7D7C1FF70D6_OFFSET))(this);
	}
};

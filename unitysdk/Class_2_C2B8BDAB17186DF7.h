#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class UILineRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C2B8BDAB17186DF7_METHOD_2_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x91D3D10)
#define CLASS_2_C2B8BDAB17186DF7_METHOD_2_412B37D6127486C3_OFFSET UNITYSDK_OFFSET(0x91D3B00)
#define CLASS_2_C2B8BDAB17186DF7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x91D3C90)
#define CLASS_2_C2B8BDAB17186DF7_METHOD_2_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x91D3C20)
#define CLASS_2_C2B8BDAB17186DF7_METHOD_2_898C9A3FDCAD7F6C_OFFSET UNITYSDK_OFFSET(0x91D3DA0)
#define CLASS_2_C2B8BDAB17186DF7__CTOR_OFFSET UNITYSDK_OFFSET(0x91D3E00)
#define CLASS_2_C2B8BDAB17186DF7__ONBIND_OFFSET UNITYSDK_OFFSET(0x91D3A40)
#define CLASS_2_C2B8BDAB17186DF7___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x91D3E30)

inline static constexpr unsigned int Class_2_C2B8BDAB17186DF7_TypeDefinitionIndex = 66073;

class Class_2_C2B8BDAB17186DF7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x60
	::RPG::Client::UILineRenderer* Field_2_0; // 0x68
	::RPG::Client::UILineRenderer* Field_2_1; // 0x70
	::System::Single Field_2_3; // 0x78
	::System::Boolean Field_2_4; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B8BDAB17186DF7__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B8BDAB17186DF7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_412B37D6127486C3(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C2B8BDAB17186DF7_METHOD_2_412B37D6127486C3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C2B8BDAB17186DF7_METHOD_2_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B8BDAB17186DF7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B8BDAB17186DF7_METHOD_2_06A2B758FCB8A24E_OFFSET))(this);
	}

	::System::Void Method_2_898C9A3FDCAD7F6C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C2B8BDAB17186DF7_METHOD_2_898C9A3FDCAD7F6C_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B8BDAB17186DF7___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};

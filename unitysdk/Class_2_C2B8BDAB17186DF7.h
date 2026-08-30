#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class UILineRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C2B8BDAB17186DF7_METHOD_2_412B37D6127486C3_OFFSET UNITYSDK_OFFSET(0xE5BBEC0)
#define CLASS_2_C2B8BDAB17186DF7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE5BC050)
#define CLASS_2_C2B8BDAB17186DF7_METHOD_2_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0xE5BBFE0)
#define CLASS_2_C2B8BDAB17186DF7_METHOD_2_898C9A3FDCAD7F6C_OFFSET UNITYSDK_OFFSET(0xE5BC160)
#define CLASS_2_C2B8BDAB17186DF7_METHOD_2_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0xE5BC0D0)
#define CLASS_2_C2B8BDAB17186DF7__CTOR_OFFSET UNITYSDK_OFFSET(0xE5BC1C0)
#define CLASS_2_C2B8BDAB17186DF7__ONBIND_OFFSET UNITYSDK_OFFSET(0xE5BBE00)

inline static constexpr unsigned int Class_2_C2B8BDAB17186DF7_TypeDefinitionIndex = 71649;

class Class_2_C2B8BDAB17186DF7 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::UILineRenderer* EFCKDNAAHEJ; // 0x60
	::RPG::Client::UILineRenderer* HPMDFNCEMOF; // 0x68
	::UnityEngine::Transform* LKHHMNJKLJH; // 0x70
	::System::Single LKBKDNAMNEG; // 0x78
	::System::Boolean EMHAACACFOM; // 0x7C

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

	::System::Void Method_2_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B8BDAB17186DF7_METHOD_2_E6D3C4C666E119D9_OFFSET))(this);
	}

	::System::Void Method_2_898C9A3FDCAD7F6C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C2B8BDAB17186DF7_METHOD_2_898C9A3FDCAD7F6C_OFFSET))(this, a1);
	}
};

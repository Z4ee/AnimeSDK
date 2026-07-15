#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_0D66A03493B0F84A;
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_27177E3F946D0FEB_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x175F15B0)
#define CLASS_2_27177E3F946D0FEB_METHOD_2_4418D0C08F01D8CD_OFFSET UNITYSDK_OFFSET(0x175F1600)
#define CLASS_2_27177E3F946D0FEB_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x175F1360)
#define CLASS_2_27177E3F946D0FEB_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x175F13F0)
#define CLASS_2_27177E3F946D0FEB_METHOD_2_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0x175F1490)
#define CLASS_2_27177E3F946D0FEB__CTOR_OFFSET UNITYSDK_OFFSET(0x175F16C0)
#define CLASS_2_27177E3F946D0FEB__ONBIND_OFFSET UNITYSDK_OFFSET(0x175F1300)
#define CLASS_2_27177E3F946D0FEB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x175F1510)
#define CLASS_2_27177E3F946D0FEB__ONTICK_OFFSET UNITYSDK_OFFSET(0x175F1550)

inline static constexpr unsigned int Class_2_27177E3F946D0FEB_TypeDefinitionIndex = 68384;

class Class_2_27177E3F946D0FEB : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::Class_1_0D66A03493B0F84A* Field_2_2; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27177E3F946D0FEB__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27177E3F946D0FEB__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_27177E3F946D0FEB_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27177E3F946D0FEB_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27177E3F946D0FEB__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27177E3F946D0FEB__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_27177E3F946D0FEB_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_4418D0C08F01D8CD(::Class_1_0D66A03493B0F84A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D66A03493B0F84A*))((::PBYTE)hIl2Cpp + CLASS_2_27177E3F946D0FEB_METHOD_2_4418D0C08F01D8CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27177E3F946D0FEB_METHOD_2_D0CD9A971CA3B1CF_OFFSET))(this);
	}
};

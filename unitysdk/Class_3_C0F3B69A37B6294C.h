#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_C0F3B69A37B6294C_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1265E780)
#define CLASS_3_C0F3B69A37B6294C_METHOD_3_753C72F6628D4F42_OFFSET UNITYSDK_OFFSET(0x1265E9E0)
#define CLASS_3_C0F3B69A37B6294C_METHOD_3_BB0EE73F76C37116_OFFSET UNITYSDK_OFFSET(0x1265F0B0)
#define CLASS_3_C0F3B69A37B6294C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1265F780)
#define CLASS_3_C0F3B69A37B6294C__CTOR_OFFSET UNITYSDK_OFFSET(0x1265F5B0)

inline static constexpr unsigned int Class_3_C0F3B69A37B6294C_TypeDefinitionIndex = 87521;

class Class_3_C0F3B69A37B6294C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_1; // 0x18
	::Class_4_8D3E479B491881B3<::System::String*>* Field_3_6; // 0x20
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x30
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_3; // 0x38
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0F3B69A37B6294C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0F3B69A37B6294C_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_753C72F6628D4F42(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_C0F3B69A37B6294C_METHOD_3_753C72F6628D4F42_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0F3B69A37B6294C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_BB0EE73F76C37116(::Struct_2_29439DBE2B63DCF3& a1, ::UnityEngine::Transform*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + CLASS_3_C0F3B69A37B6294C_METHOD_3_BB0EE73F76C37116_OFFSET))(this, a1, a2);
	}
};

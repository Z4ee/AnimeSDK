#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_AD9AD2C922D82BDD_GET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0x16CBA220)
#define CLASS_2_AD9AD2C922D82BDD_METHOD_2_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0x16CBA100)
#define CLASS_2_AD9AD2C922D82BDD_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x16CBA020)
#define CLASS_2_AD9AD2C922D82BDD_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x16CBA0B0)
#define CLASS_2_AD9AD2C922D82BDD_METHOD_2_98D7467AE0BEC3C1_OFFSET UNITYSDK_OFFSET(0x16CB9FD0)
#define CLASS_2_AD9AD2C922D82BDD_METHOD_2_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x16CBA170)
#define CLASS_2_AD9AD2C922D82BDD_SET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0x16CBA230)
#define CLASS_2_AD9AD2C922D82BDD__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBA240)
#define CLASS_2_AD9AD2C922D82BDD__ONBIND_OFFSET UNITYSDK_OFFSET(0x16CB9F40)
#define CLASS_2_AD9AD2C922D82BDD__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16CBA1C0)

inline static constexpr unsigned int Class_2_AD9AD2C922D82BDD_TypeDefinitionIndex = 71798;

class Class_2_AD9AD2C922D82BDD : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* JFCMCPFPDFP; // 0x0
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
	::UnityEngine::Transform* POGABPLIMMH; // 0x68
	::UnityEngine::GameObject* OIHLFMFFAOB; // 0x70
	::System::Boolean _IsUltraMode_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_98D7467AE0BEC3C1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD_METHOD_2_98D7467AE0BEC3C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD_METHOD_2_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD_METHOD_2_C433AF37CE9D6E5B_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD__ONDISPOSE_OFFSET))(this);
	}

	::System::Boolean get_IsUltraMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD_GET_ISULTRAMODE_OFFSET))(this);
	}

	::System::Void set_IsUltraMode(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD_SET_ISULTRAMODE_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_AD9AD2C922D82BDD_GET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xA4E66A0)
#define CLASS_2_AD9AD2C922D82BDD_METHOD_2_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0xA4E6580)
#define CLASS_2_AD9AD2C922D82BDD_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0xA4E64A0)
#define CLASS_2_AD9AD2C922D82BDD_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA4E6530)
#define CLASS_2_AD9AD2C922D82BDD_METHOD_2_98D7467AE0BEC3C1_OFFSET UNITYSDK_OFFSET(0xA4E6450)
#define CLASS_2_AD9AD2C922D82BDD_METHOD_2_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0xA4E65F0)
#define CLASS_2_AD9AD2C922D82BDD_SET_ISULTRAMODE_OFFSET UNITYSDK_OFFSET(0xA4E66B0)
#define CLASS_2_AD9AD2C922D82BDD__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E66C0)
#define CLASS_2_AD9AD2C922D82BDD__ONBIND_OFFSET UNITYSDK_OFFSET(0xA4E63C0)
#define CLASS_2_AD9AD2C922D82BDD__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA4E6640)
#define CLASS_2_AD9AD2C922D82BDD___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA4E66F0)
#define CLASS_2_AD9AD2C922D82BDD___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA4E6750)

inline static constexpr unsigned int Class_2_AD9AD2C922D82BDD_TypeDefinitionIndex = 67156;

class Class_2_AD9AD2C922D82BDD : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::GameObject* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::RPG::GameCore::GameEntity* Field_2_3; // 0x70
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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD9AD2C922D82BDD___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};

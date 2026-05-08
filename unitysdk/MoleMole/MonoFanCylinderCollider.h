#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_C3BBA2B066959E6E.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }

#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x170E45B0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x170E4960)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x170E49D0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x170E5440)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_02E79527CEE38771_OFFSET UNITYSDK_OFFSET(0x170E4F60)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x170E4600)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x170E5110)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_47A6C9F4EBEB5796_OFFSET UNITYSDK_OFFSET(0x170E5680)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_78C082F46860C41E_OFFSET UNITYSDK_OFFSET(0x170E5050)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x170E48D0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x170E5540)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x170E54E0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x170E5550)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x170E55E0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x170E5670)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFanCylinderCollider_TypeDefinitionIndex = 71810;

	class MonoFanCylinderCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		static ::System::Int32* StaticGet_Field_6_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoFanCylinderCollider_TypeDefinitionIndex)->GetStaticField(0x11B50);
		}
		::UnityEngine::MeshCollider* Field_6_0; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void Method_6_02E79527CEE38771(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_02E79527CEE38771_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void InitCollider(::UnityEngine::LayerMask a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_INITCOLLIDER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void __base_CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void __base_SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_C3BBA2B066959E6E))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_SETUPCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_78C082F46860C41E(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_78C082F46860C41E_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_1DE6433C25680F9D_OFFSET))(this);
		}

		::UnityEngine::Mesh* Method_6_47A6C9F4EBEB5796(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_47A6C9F4EBEB5796_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_3574512695A597AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_3574512695A597AB_OFFSET))(this);
		}
	};
}

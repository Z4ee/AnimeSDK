#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }

#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19DD4F50)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1806B5C0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1806ABB0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1806B960)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_02E79527CEE38771_OFFSET UNITYSDK_OFFSET(0x1806B140)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x1806B230)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x1806B630)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_45868EC52B78DD7F_OFFSET UNITYSDK_OFFSET(0x1806BBA0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_78C082F46860C41E_OFFSET UNITYSDK_OFFSET(0x1806B500)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19DD4FA0)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1806BA60)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1806BA00)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1806BA70)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1806BB00)
#define MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1806BB90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFanCylinderCollider_TypeDefinitionIndex = 84909;

	class MonoFanCylinderCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		static ::System::Int32* StaticGet_Field_6_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoFanCylinderCollider_TypeDefinitionIndex)->GetStaticField(0x11A30);
		}
		::UnityEngine::MeshCollider* Field_6_1; // 0x78

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

		::System::Void Method_6_02E79527CEE38771(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_02E79527CEE38771_OFFSET))(this, a1, a2, a3);
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

		::System::Void __base_SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER___BASE_SETUPCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_1DE6433C25680F9D_OFFSET))(this);
		}

		::UnityEngine::Mesh* Method_6_45868EC52B78DD7F(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_45868EC52B78DD7F_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_78C082F46860C41E(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_78C082F46860C41E_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_3574512695A597AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFANCYLINDERCOLLIDER_METHOD_6_3574512695A597AB_OFFSET))(this);
		}
	};
}

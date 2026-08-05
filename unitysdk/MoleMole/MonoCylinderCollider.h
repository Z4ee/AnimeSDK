#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LayerMaskStatic_Enum_3_BA21CC391326FDD3.h"
#include "unitysdk/MoleMole/MonoConfigurableCollider.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }

#define MOLEMOLE_MONOCYLINDERCOLLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x136D7C50)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x136D8000)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x136D8070)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_INITCOLLIDER_OFFSET UNITYSDK_OFFSET(0x136D8AE0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_METHOD_6_02E79527CEE38771_OFFSET UNITYSDK_OFFSET(0x136D8600)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_METHOD_6_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x136D7CA0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_METHOD_6_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x136D87B0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_METHOD_6_45868EC52B78DD7F_OFFSET UNITYSDK_OFFSET(0x136D8D20)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_METHOD_6_78C082F46860C41E_OFFSET UNITYSDK_OFFSET(0x136D86F0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x136D7F70)
#define MOLEMOLE_MONOCYLINDERCOLLIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x136D8BE0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x136D8B80)
#define MOLEMOLE_MONOCYLINDERCOLLIDER___BASE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x136D8BF0)
#define MOLEMOLE_MONOCYLINDERCOLLIDER___BASE_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x136D8C80)
#define MOLEMOLE_MONOCYLINDERCOLLIDER___BASE_SETUPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x136D8D10)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCylinderCollider_TypeDefinitionIndex = 43547;

	class MonoCylinderCollider : public ::MoleMole::MonoConfigurableCollider
	{
	public:
		static ::System::Int32* StaticGet_Field_6_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCylinderCollider_TypeDefinitionIndex)->GetStaticField(0x11E70);
		}
		::UnityEngine::MeshCollider* Field_6_0; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void Method_6_02E79527CEE38771(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_METHOD_6_02E79527CEE38771_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_CLEANUP_OFFSET))(this);
		}

		::System::Void InitCollider(::UnityEngine::LayerMask a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_INITCOLLIDER_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void __base_CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER___BASE_CLEANUP_OFFSET))(this);
		}

		::System::Void __base_DrawLine(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER___BASE_DRAWLINE_OFFSET))(this, a1);
		}

		::System::Void __base_SetupCollider(::MoleMole::Config::ConfigTimeDrivenAttackCollider* a1, ::UnityEngine::LayerMask a2, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTimeDrivenAttackCollider*, ::UnityEngine::LayerMask, ::MoleMole::LayerMaskStatic_Enum_3_BA21CC391326FDD3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER___BASE_SETUPCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Mesh* Method_6_45868EC52B78DD7F(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_METHOD_6_45868EC52B78DD7F_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_METHOD_6_1DE6433C25680F9D_OFFSET))(this);
		}

		::System::Void Method_6_78C082F46860C41E(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_METHOD_6_78C082F46860C41E_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_3574512695A597AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCYLINDERCOLLIDER_METHOD_6_3574512695A597AB_OFFSET))(this);
		}
	};
}

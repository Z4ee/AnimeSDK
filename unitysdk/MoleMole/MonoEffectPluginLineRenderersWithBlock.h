#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15B372D0)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x15B38060)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_59436527057ADF55_OFFSET UNITYSDK_OFFSET(0x15B380C0)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_8B4B3FEAD1B0C4A6_OFFSET UNITYSDK_OFFSET(0x15B37470)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15B37380)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15B37210)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x15B373C0)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B38010)
#define MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B37FB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginLineRenderersWithBlock_TypeDefinitionIndex = 71899;

	class MonoEffectPluginLineRenderersWithBlock : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_6_10()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginLineRenderersWithBlock_TypeDefinitionIndex)->GetStaticField(0x48870);
		}
		// static const ::System::Int32 Field_6_11 = 0x40; // 0x0
		::System::Single maxLength; // 0x18
		::UnityEngine::Transform* outgoingTransform; // 0x20
		::UnityEngine::LayerMask layerMask; // 0x28
		::System::Boolean updateOnStart; // 0x2C
		::System::Single updateInterval; // 0x30
		::System::Single Field_6_5; // 0x34
		::System::Boolean Field_6_6; // 0x38
		::UnityEngine::Transform* endEffect; // 0x40
		::UnityEngine::Transform* blockEffect; // 0x48
		::Il2CppArray<::UnityEngine::LineRenderer*>* lineRenderers; // 0x50
		::System::Boolean Field_6_12; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_6_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::Void Method_6_8B4B3FEAD1B0C4A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_8B4B3FEAD1B0C4A6_OFFSET))(this);
		}

		::System::Void Method_6_59436527057ADF55(::System::Boolean a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLINERENDERERSWITHBLOCK_METHOD_6_59436527057ADF55_OFFSET))(this, a1, a2, a3);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_DIR2XY_OFFSET UNITYSDK_OFFSET(0x19BD5E50)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_GETBAKEDINDEX_OFFSET UNITYSDK_OFFSET(0x19BD6A40)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_GETBAKEDPVSHANDLE_OFFSET UNITYSDK_OFFSET(0x19BD6AD0)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19BD6C10)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x19BD5DC0)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x19BD65C0)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_SETUPSUNSHADOWPVSCULLPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19BD6090)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_START_OFFSET UNITYSDK_OFFSET(0x19BD6BC0)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_XY2DIR_OFFSET UNITYSDK_OFFSET(0x19BD5F50)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD6D70)
#define MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD6D10)

namespace MoleMole::Engine
{
	inline static constexpr unsigned int SunShadowPVSManager_TypeDefinitionIndex = 45236;

	class SunShadowPVSManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_DataState()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSManager_TypeDefinitionIndex)->GetStaticField(0x3CC60);
		}
		static ::MoleMole::Engine::SunShadowPVSManager** StaticGet_Instance()
		{
			return (::MoleMole::Engine::SunShadowPVSManager**)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSManager_TypeDefinitionIndex)->GetStaticField(0x3CC68);
		}
		static ::System::Boolean* StaticGet_LogAction()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSManager_TypeDefinitionIndex)->GetStaticField(0xE3C0);
		}
		static ::System::Boolean* StaticGet_HitState()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SunShadowPVSManager_TypeDefinitionIndex)->GetStaticField(0xE3C1);
		}
		// static const ::System::String* Field_5_15; // 0x0
		// static const ::System::String* Field_5_14; // 0x0
		// static const ::System::String* Field_5_13; // 0x0
		// static const ::System::UInt32 Field_5_23 = 0xFFFFFFFF; // 0x0
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18
		::Il2CppArray<::System::Int32>* pvsHandles; // 0x20
		::Il2CppArray<::System::UInt32>* dirKeys; // 0x28
		::Il2CppArray<::System::Byte>* pvsBits; // 0x30
		::System::Int32 uCellsCnt; // 0x38
		::System::Int32 vCellsCnt; // 0x3C
		::System::Single invUCellAngle; // 0x40
		::System::Single invVCellAngle; // 0x44
		::System::UInt32 pvsHandleRangeCount; // 0x48
		::UnityEngine::Bounds shadowRendererBounds; // 0x4C
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_5_18; // 0x68
		::System::UInt32 Field_5_17; // 0x70
		::System::UInt32 Field_5_16; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER__CCTOR_OFFSET))();
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		static ::System::Void Dir2XY(::UnityEngine::Vector3 a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Int32&, ::System::Int32&, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_DIR2XY_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::Vector3 XY2Dir(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_XY2DIR_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void SetupSunShadowPVSCullParameters(::UnityEngine::Rendering::ScriptableCullingParameters& a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_SETUPSUNSHADOWPVSCULLPARAMETERS_OFFSET))(this, a1, a2);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_REGISTER_OFFSET))(this);
		}

		::System::Int32 GetBakedIndex(::UnityEngine::Renderer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_GETBAKEDINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetBakedPVSHandle(::UnityEngine::Renderer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_GETBAKEDPVSHANDLE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENGINE_SUNSHADOWPVSMANAGER_ONDESTROY_OFFSET))(this);
		}
	};
}

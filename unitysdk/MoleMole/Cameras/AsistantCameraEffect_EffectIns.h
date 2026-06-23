#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/AsistantCameraEffect_EType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x13597680)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13597780)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x135976F0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_TEST_OFFSET UNITYSDK_OFFSET(0x13597F70)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_TICK_OFFSET UNITYSDK_OFFSET(0x13597ED0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x13597A60)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_UPDATEPROP_1_OFFSET UNITYSDK_OFFSET(0x13597CA0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_UPDATEPROP_OFFSET UNITYSDK_OFFSET(0x13597B50)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS__CTOR_OFFSET UNITYSDK_OFFSET(0x135980F0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS__TEST_B__19_0_OFFSET UNITYSDK_OFFSET(0x13598180)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS__TEST_B__19_1_OFFSET UNITYSDK_OFFSET(0x13598190)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int AsistantCameraEffect_EffectIns_TypeDefinitionIndex = 46430;

	class AsistantCameraEffect_EffectIns : public ::System::Object
	{
	public:
		::System::String* keyName; // 0x10
		::UnityEngine::RenderTexture* RT; // 0x18
		::Il2CppArray<::System::String*>* RealNumberAccessors; // 0x20
		::Il2CppArray<::System::String*>* RenderTextureAccessors; // 0x28
		::UnityEngine::Renderer* applyRender; // 0x30
		::UnityEngine::Vector2 range; // 0x38
		::System::Single duration; // 0x40
		::System::String* keyLerp; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::AsistantCameraEffect_EType>* _cachePropType; // 0x50
		::UnityEngine::MaterialPropertyBlock* _matBlock; // 0x58
		::System::Boolean isDirty; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS__CTOR_OFFSET))(this);
		}

		::System::Single get_CurrentValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_SET_CURRENTVALUE_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_UPDATEPROGRESS_OFFSET))(this, progress);
		}

		::System::Void UpdateProp(::System::String* name, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_UPDATEPROP_OFFSET))(this, name, val);
		}

		::System::Void UpdateProp_1(::System::String* name, ::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_UPDATEPROP_1_OFFSET))(this, name, rt);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_TICK_OFFSET))(this);
		}

		::System::Void Test()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS_TEST_OFFSET))(this);
		}

		::System::Single _Test_b__19_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS__TEST_B__19_0_OFFSET))(this);
		}

		::System::Void _Test_b__19_1(::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_EFFECTINS__TEST_B__19_1_OFFSET))(this, t);
		}
	};
}

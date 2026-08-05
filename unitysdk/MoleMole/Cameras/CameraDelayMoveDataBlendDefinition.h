#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/CameraDelayMoveDataBlendDefinition_Style.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERAS_CAMERADELAYMOVEDATABLENDDEFINITION_CREATESTANDARDCURVES_OFFSET UNITYSDK_OFFSET(0x8022F0)
#define MOLEMOLE_CAMERAS_CAMERADELAYMOVEDATABLENDDEFINITION_GET_BLENDCURVE_OFFSET UNITYSDK_OFFSET(0x802300)
#define MOLEMOLE_CAMERAS_CAMERADELAYMOVEDATABLENDDEFINITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x148418B0)
#define MOLEMOLE_CAMERAS_CAMERADELAYMOVEDATABLENDDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x8022D0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraDelayMoveDataBlendDefinition_TypeDefinitionIndex = 54831;

	struct alignas(8) CameraDelayMoveDataBlendDefinition
	{
		static ::Il2CppArray<::UnityEngine::AnimationCurve*>** StaticGet_sStandardCurves()
		{
			return (::Il2CppArray<::UnityEngine::AnimationCurve*>**)Il2CppClass::FromTypeDefinitionIndex(CameraDelayMoveDataBlendDefinition_TypeDefinitionIndex)->GetStaticField(0x3F330);
		}
		static ::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition* StaticGet_DefaultBlendDefinition()
		{
			return (::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition*)Il2CppClass::FromTypeDefinitionIndex(CameraDelayMoveDataBlendDefinition_TypeDefinitionIndex)->GetStaticField(0x3F338);
		}
		::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition_Style m_Style; // 0x10
		::System::Single m_Time; // 0x14
		::System::Single m_StableTime; // 0x18
		::UnityEngine::AnimationCurve* m_CustomCurve; // 0x20

		::System::Void _ctor(::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition_Style style, ::System::Single time, ::System::Single stableTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDelayMoveDataBlendDefinition_Style, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERADELAYMOVEDATABLENDDEFINITION__CTOR_OFFSET))(this, style, time, stableTime);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERADELAYMOVEDATABLENDDEFINITION__CCTOR_OFFSET))();
		}

		::System::Void CreateStandardCurves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERADELAYMOVEDATABLENDDEFINITION_CREATESTANDARDCURVES_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_BlendCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERADELAYMOVEDATABLENDDEFINITION_GET_BLENDCURVE_OFFSET))(this);
		}
	};
}

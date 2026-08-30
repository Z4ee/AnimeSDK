#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState_BlendHintValue.h"
#include "unitysdk/Cinemachine/CameraState_CustomBlendable.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CINEMACHINE_CAMERASTATE_ADDCUSTOMBLENDABLE_OFFSET UNITYSDK_OFFSET(0x2DFA5A0)
#define CINEMACHINE_CAMERASTATE_APPLYPOSBLENDHINT_OFFSET UNITYSDK_OFFSET(0x1643CC50)
#define CINEMACHINE_CAMERASTATE_APPLYROTBLENDHINT_OFFSET UNITYSDK_OFFSET(0x1643CC90)
#define CINEMACHINE_CAMERASTATE_FINDCUSTOMBLENDABLE_OFFSET UNITYSDK_OFFSET(0x2DFA590)
#define CINEMACHINE_CAMERASTATE_GETCUSTOMBLENDABLE_OFFSET UNITYSDK_OFFSET(0x2DFA4E0)
#define CINEMACHINE_CAMERASTATE_GET_BLENDHINT_OFFSET UNITYSDK_OFFSET(0x2DFA4A0)
#define CINEMACHINE_CAMERASTATE_GET_CORRECTEDORIENTATION_OFFSET UNITYSDK_OFFSET(0x2DFA390)
#define CINEMACHINE_CAMERASTATE_GET_CORRECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x2DFA360)
#define CINEMACHINE_CAMERASTATE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1643AA50)
#define CINEMACHINE_CAMERASTATE_GET_FINALORIENTATION_OFFSET UNITYSDK_OFFSET(0x2DFA480)
#define CINEMACHINE_CAMERASTATE_GET_FINALPOSITION_OFFSET UNITYSDK_OFFSET(0x2DFA360)
#define CINEMACHINE_CAMERASTATE_GET_HASLOOKAT_OFFSET UNITYSDK_OFFSET(0x2DFA280)
#define CINEMACHINE_CAMERASTATE_GET_LENS_OFFSET UNITYSDK_OFFSET(0x2DFA1E0)
#define CINEMACHINE_CAMERASTATE_GET_NUMCUSTOMBLENDABLES_OFFSET UNITYSDK_OFFSET(0x2DFA4C0)
#define CINEMACHINE_CAMERASTATE_GET_ORIENTATIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x25FE0)
#define CINEMACHINE_CAMERASTATE_GET_POSITIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x2DFA310)
#define CINEMACHINE_CAMERASTATE_GET_POSITIONDAMPINGBYPASS_OFFSET UNITYSDK_OFFSET(0x2DFA2C0)
#define CINEMACHINE_CAMERASTATE_GET_RAWORIENTATION_OFFSET UNITYSDK_OFFSET(0x15E010)
#define CINEMACHINE_CAMERASTATE_GET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x25F20)
#define CINEMACHINE_CAMERASTATE_GET_REFERENCELOOKAT_OFFSET UNITYSDK_OFFSET(0x2DFA250)
#define CINEMACHINE_CAMERASTATE_GET_REFERENCEUP_OFFSET UNITYSDK_OFFSET(0x2DFA220)
#define CINEMACHINE_CAMERASTATE_GET_SHOTQUALITY_OFFSET UNITYSDK_OFFSET(0x2DFA2F0)
#define CINEMACHINE_CAMERASTATE_INTERPOLATEFOV_OFFSET UNITYSDK_OFFSET(0x1643CCE0)
#define CINEMACHINE_CAMERASTATE_INTERPOLATEPOSITION_OFFSET UNITYSDK_OFFSET(0x2DFA5C0)
#define CINEMACHINE_CAMERASTATE_LERP_OFFSET UNITYSDK_OFFSET(0x1643B120)
#define CINEMACHINE_CAMERASTATE_SET_BLENDHINT_OFFSET UNITYSDK_OFFSET(0x2DFA4B0)
#define CINEMACHINE_CAMERASTATE_SET_LENS_OFFSET UNITYSDK_OFFSET(0x2DFA200)
#define CINEMACHINE_CAMERASTATE_SET_NUMCUSTOMBLENDABLES_OFFSET UNITYSDK_OFFSET(0x2DFA4D0)
#define CINEMACHINE_CAMERASTATE_SET_ORIENTATIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x2DFA350)
#define CINEMACHINE_CAMERASTATE_SET_POSITIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x2DFA330)
#define CINEMACHINE_CAMERASTATE_SET_POSITIONDAMPINGBYPASS_OFFSET UNITYSDK_OFFSET(0x2DFA2E0)
#define CINEMACHINE_CAMERASTATE_SET_RAWORIENTATION_OFFSET UNITYSDK_OFFSET(0x15E020)
#define CINEMACHINE_CAMERASTATE_SET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x15E000)
#define CINEMACHINE_CAMERASTATE_SET_REFERENCELOOKAT_OFFSET UNITYSDK_OFFSET(0x2DFA270)
#define CINEMACHINE_CAMERASTATE_SET_REFERENCEUP_OFFSET UNITYSDK_OFFSET(0x2DFA240)
#define CINEMACHINE_CAMERASTATE_SET_SHOTQUALITY_OFFSET UNITYSDK_OFFSET(0x2DFA300)
#define CINEMACHINE_CAMERASTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1643D230)

namespace Cinemachine
{
	inline static constexpr unsigned int CameraState_TypeDefinitionIndex = 38502;

	struct alignas(8) CameraState
	{
		static ::UnityEngine::Vector3* StaticGet_kNoPoint()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(CameraState_TypeDefinitionIndex)->GetStaticField(0x114F0);
		}
		::Cinemachine::LensSettings _Lens_k__BackingField; // 0x10
		::UnityEngine::Vector3 _ReferenceUp_k__BackingField; // 0x3C
		::UnityEngine::Vector3 _ReferenceLookAt_k__BackingField; // 0x48
		::UnityEngine::Vector3 _RawPosition_k__BackingField; // 0x54
		::UnityEngine::Quaternion _RawOrientation_k__BackingField; // 0x60
		::UnityEngine::Vector3 _PositionDampingBypass_k__BackingField; // 0x70
		::System::Single _ShotQuality_k__BackingField; // 0x7C
		::UnityEngine::Vector3 _PositionCorrection_k__BackingField; // 0x80
		::UnityEngine::Quaternion _OrientationCorrection_k__BackingField; // 0x8C
		::Cinemachine::CameraState_BlendHintValue _BlendHint_k__BackingField; // 0x9C
		::Cinemachine::CameraState_CustomBlendable mCustom0; // 0xA0
		::Cinemachine::CameraState_CustomBlendable mCustom1; // 0xB0
		::Cinemachine::CameraState_CustomBlendable mCustom2; // 0xC0
		::Cinemachine::CameraState_CustomBlendable mCustom3; // 0xD0
		::System::Collections::Generic::List_1<::Cinemachine::CameraState_CustomBlendable>* m_CustomOverflow; // 0xE0
		::System::Int32 _NumCustomBlendables_k__BackingField; // 0xE8

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE__CCTOR_OFFSET))();
		}

		::Cinemachine::LensSettings get_Lens()
		{
			return ((::Cinemachine::LensSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_LENS_OFFSET))(this);
		}

		::System::Void set_Lens(::Cinemachine::LensSettings a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_LENS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ReferenceUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_REFERENCEUP_OFFSET))(this);
		}

		::System::Void set_ReferenceUp(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_REFERENCEUP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ReferenceLookAt()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_REFERENCELOOKAT_OFFSET))(this);
		}

		::System::Void set_ReferenceLookAt(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_REFERENCELOOKAT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_HASLOOKAT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_RAWPOSITION_OFFSET))(this);
		}

		::System::Void set_RawPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_RAWPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_RawOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_RAWORIENTATION_OFFSET))(this);
		}

		::System::Void set_RawOrientation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_RAWORIENTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PositionDampingBypass()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_POSITIONDAMPINGBYPASS_OFFSET))(this);
		}

		::System::Void set_PositionDampingBypass(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_POSITIONDAMPINGBYPASS_OFFSET))(this, a1);
		}

		::System::Single get_ShotQuality()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_SHOTQUALITY_OFFSET))(this);
		}

		::System::Void set_ShotQuality(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_SHOTQUALITY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_PositionCorrection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_POSITIONCORRECTION_OFFSET))(this);
		}

		::System::Void set_PositionCorrection(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_POSITIONCORRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_OrientationCorrection()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_ORIENTATIONCORRECTION_OFFSET))(this);
		}

		::System::Void set_OrientationCorrection(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_ORIENTATIONCORRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_CorrectedPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_CORRECTEDPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_CorrectedOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_CORRECTEDORIENTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_FinalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_FINALPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_FinalOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_FINALORIENTATION_OFFSET))(this);
		}

		::Cinemachine::CameraState_BlendHintValue get_BlendHint()
		{
			return ((::Cinemachine::CameraState_BlendHintValue(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_BLENDHINT_OFFSET))(this);
		}

		::System::Void set_BlendHint(::Cinemachine::CameraState_BlendHintValue a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState_BlendHintValue))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_BLENDHINT_OFFSET))(this, a1);
		}

		static ::Cinemachine::CameraState get_Default()
		{
			return ((::Cinemachine::CameraState(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_DEFAULT_OFFSET))();
		}

		::System::Int32 get_NumCustomBlendables()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_NUMCUSTOMBLENDABLES_OFFSET))(this);
		}

		::System::Void set_NumCustomBlendables(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_NUMCUSTOMBLENDABLES_OFFSET))(this, a1);
		}

		::Cinemachine::CameraState_CustomBlendable GetCustomBlendable(::System::Int32 a1)
		{
			return ((::Cinemachine::CameraState_CustomBlendable(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GETCUSTOMBLENDABLE_OFFSET))(this, a1);
		}

		::System::Int32 FindCustomBlendable(::UnityEngine::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_FINDCUSTOMBLENDABLE_OFFSET))(this, a1);
		}

		::System::Void AddCustomBlendable(::Cinemachine::CameraState_CustomBlendable a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState_CustomBlendable))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_ADDCUSTOMBLENDABLE_OFFSET))(this, a1);
		}

		static ::Cinemachine::CameraState Lerp(::Cinemachine::CameraState a1, ::Cinemachine::CameraState a2, ::System::Single a3)
		{
			return ((::Cinemachine::CameraState(*)(::Cinemachine::CameraState, ::Cinemachine::CameraState, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_LERP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single InterpolateFOV(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_INTERPOLATEFOV_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 ApplyPosBlendHint(::UnityEngine::Vector3 a1, ::Cinemachine::CameraState_BlendHintValue a2, ::UnityEngine::Vector3 a3, ::Cinemachine::CameraState_BlendHintValue a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::Cinemachine::CameraState_BlendHintValue, ::UnityEngine::Vector3, ::Cinemachine::CameraState_BlendHintValue, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_APPLYPOSBLENDHINT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Quaternion ApplyRotBlendHint(::UnityEngine::Quaternion a1, ::Cinemachine::CameraState_BlendHintValue a2, ::UnityEngine::Quaternion a3, ::Cinemachine::CameraState_BlendHintValue a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Quaternion a6)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::Cinemachine::CameraState_BlendHintValue, ::UnityEngine::Quaternion, ::Cinemachine::CameraState_BlendHintValue, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_APPLYROTBLENDHINT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Vector3 InterpolatePosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_INTERPOLATEPOSITION_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}

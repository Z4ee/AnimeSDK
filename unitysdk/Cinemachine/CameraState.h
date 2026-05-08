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

#define CINEMACHINE_CAMERASTATE_ADDCUSTOMBLENDABLE_OFFSET UNITYSDK_OFFSET(0x9D6D90)
#define CINEMACHINE_CAMERASTATE_APPLYPOSBLENDHINT_OFFSET UNITYSDK_OFFSET(0x1C40AA70)
#define CINEMACHINE_CAMERASTATE_APPLYROTBLENDHINT_OFFSET UNITYSDK_OFFSET(0x1C40AAB0)
#define CINEMACHINE_CAMERASTATE_FINDCUSTOMBLENDABLE_OFFSET UNITYSDK_OFFSET(0x9D6D80)
#define CINEMACHINE_CAMERASTATE_GETCUSTOMBLENDABLE_OFFSET UNITYSDK_OFFSET(0x9D6CE0)
#define CINEMACHINE_CAMERASTATE_GET_BLENDHINT_OFFSET UNITYSDK_OFFSET(0x99CCB0)
#define CINEMACHINE_CAMERASTATE_GET_CORRECTEDORIENTATION_OFFSET UNITYSDK_OFFSET(0x9D6BB0)
#define CINEMACHINE_CAMERASTATE_GET_CORRECTEDPOSITION_OFFSET UNITYSDK_OFFSET(0x9D6B80)
#define CINEMACHINE_CAMERASTATE_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1C4089C0)
#define CINEMACHINE_CAMERASTATE_GET_FINALORIENTATION_OFFSET UNITYSDK_OFFSET(0x9D6CA0)
#define CINEMACHINE_CAMERASTATE_GET_FINALPOSITION_OFFSET UNITYSDK_OFFSET(0x9D6B80)
#define CINEMACHINE_CAMERASTATE_GET_HASLOOKAT_OFFSET UNITYSDK_OFFSET(0x9D6A60)
#define CINEMACHINE_CAMERASTATE_GET_LENS_OFFSET UNITYSDK_OFFSET(0x340970)
#define CINEMACHINE_CAMERASTATE_GET_NUMCUSTOMBLENDABLES_OFFSET UNITYSDK_OFFSET(0x9D6CC0)
#define CINEMACHINE_CAMERASTATE_GET_ORIENTATIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x9D6B60)
#define CINEMACHINE_CAMERASTATE_GET_POSITIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x9D6B20)
#define CINEMACHINE_CAMERASTATE_GET_POSITIONDAMPINGBYPASS_OFFSET UNITYSDK_OFFSET(0x9D6AF0)
#define CINEMACHINE_CAMERASTATE_GET_RAWORIENTATION_OFFSET UNITYSDK_OFFSET(0x9D6AD0)
#define CINEMACHINE_CAMERASTATE_GET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x9D6AA0)
#define CINEMACHINE_CAMERASTATE_GET_REFERENCELOOKAT_OFFSET UNITYSDK_OFFSET(0x9D6A30)
#define CINEMACHINE_CAMERASTATE_GET_REFERENCEUP_OFFSET UNITYSDK_OFFSET(0x9D6A00)
#define CINEMACHINE_CAMERASTATE_GET_SHOTQUALITY_OFFSET UNITYSDK_OFFSET(0x76A050)
#define CINEMACHINE_CAMERASTATE_INTERPOLATEFOV_OFFSET UNITYSDK_OFFSET(0x1C40AB00)
#define CINEMACHINE_CAMERASTATE_INTERPOLATEPOSITION_OFFSET UNITYSDK_OFFSET(0x9D6DB0)
#define CINEMACHINE_CAMERASTATE_LERP_OFFSET UNITYSDK_OFFSET(0x1C408FD0)
#define CINEMACHINE_CAMERASTATE_SET_BLENDHINT_OFFSET UNITYSDK_OFFSET(0x99CCC0)
#define CINEMACHINE_CAMERASTATE_SET_LENS_OFFSET UNITYSDK_OFFSET(0x3405B0)
#define CINEMACHINE_CAMERASTATE_SET_NUMCUSTOMBLENDABLES_OFFSET UNITYSDK_OFFSET(0x9D6CD0)
#define CINEMACHINE_CAMERASTATE_SET_ORIENTATIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x9D6B70)
#define CINEMACHINE_CAMERASTATE_SET_POSITIONCORRECTION_OFFSET UNITYSDK_OFFSET(0x9D6B40)
#define CINEMACHINE_CAMERASTATE_SET_POSITIONDAMPINGBYPASS_OFFSET UNITYSDK_OFFSET(0x9D6B10)
#define CINEMACHINE_CAMERASTATE_SET_RAWORIENTATION_OFFSET UNITYSDK_OFFSET(0x9D6AE0)
#define CINEMACHINE_CAMERASTATE_SET_RAWPOSITION_OFFSET UNITYSDK_OFFSET(0x9D6AC0)
#define CINEMACHINE_CAMERASTATE_SET_REFERENCELOOKAT_OFFSET UNITYSDK_OFFSET(0x9D6A50)
#define CINEMACHINE_CAMERASTATE_SET_REFERENCEUP_OFFSET UNITYSDK_OFFSET(0x9D6A20)
#define CINEMACHINE_CAMERASTATE_SET_SHOTQUALITY_OFFSET UNITYSDK_OFFSET(0x9A26C0)
#define CINEMACHINE_CAMERASTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C40B050)

namespace Cinemachine
{
	inline static constexpr unsigned int CameraState_TypeDefinitionIndex = 32540;

	struct alignas(8) CameraState
	{
		static ::UnityEngine::Vector3* StaticGet_kNoPoint()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(CameraState_TypeDefinitionIndex)->GetStaticField(0x7E10);
		}
		::Cinemachine::LensSettings _Lens_k__BackingField; // 0x10
		::UnityEngine::Vector3 _ReferenceUp_k__BackingField; // 0x40
		::UnityEngine::Vector3 _ReferenceLookAt_k__BackingField; // 0x4C
		::UnityEngine::Vector3 _RawPosition_k__BackingField; // 0x58
		::UnityEngine::Quaternion _RawOrientation_k__BackingField; // 0x64
		::UnityEngine::Vector3 _PositionDampingBypass_k__BackingField; // 0x74
		::System::Single _ShotQuality_k__BackingField; // 0x80
		::UnityEngine::Vector3 _PositionCorrection_k__BackingField; // 0x84
		::UnityEngine::Quaternion _OrientationCorrection_k__BackingField; // 0x90
		::Cinemachine::CameraState_BlendHintValue _BlendHint_k__BackingField; // 0xA0
		::Cinemachine::CameraState_CustomBlendable mCustom0; // 0xA8
		::Cinemachine::CameraState_CustomBlendable mCustom1; // 0xB8
		::Cinemachine::CameraState_CustomBlendable mCustom2; // 0xC8
		::Cinemachine::CameraState_CustomBlendable mCustom3; // 0xD8
		::System::Collections::Generic::List_1<::Cinemachine::CameraState_CustomBlendable>* m_CustomOverflow; // 0xE8
		::System::Int32 _NumCustomBlendables_k__BackingField; // 0xF0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE__CCTOR_OFFSET))();
		}

		::Cinemachine::LensSettings get_Lens()
		{
			return ((::Cinemachine::LensSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_LENS_OFFSET))(this);
		}

		::System::Void set_Lens(::Cinemachine::LensSettings value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_LENS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ReferenceUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_REFERENCEUP_OFFSET))(this);
		}

		::System::Void set_ReferenceUp(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_REFERENCEUP_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_ReferenceLookAt()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_REFERENCELOOKAT_OFFSET))(this);
		}

		::System::Void set_ReferenceLookAt(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_REFERENCELOOKAT_OFFSET))(this, value);
		}

		::System::Boolean get_HasLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_HASLOOKAT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_RAWPOSITION_OFFSET))(this);
		}

		::System::Void set_RawPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_RAWPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_RawOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_RAWORIENTATION_OFFSET))(this);
		}

		::System::Void set_RawOrientation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_RAWORIENTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_PositionDampingBypass()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_POSITIONDAMPINGBYPASS_OFFSET))(this);
		}

		::System::Void set_PositionDampingBypass(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_POSITIONDAMPINGBYPASS_OFFSET))(this, value);
		}

		::System::Single get_ShotQuality()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_SHOTQUALITY_OFFSET))(this);
		}

		::System::Void set_ShotQuality(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_SHOTQUALITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_PositionCorrection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_POSITIONCORRECTION_OFFSET))(this);
		}

		::System::Void set_PositionCorrection(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_POSITIONCORRECTION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_OrientationCorrection()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_ORIENTATIONCORRECTION_OFFSET))(this);
		}

		::System::Void set_OrientationCorrection(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_ORIENTATIONCORRECTION_OFFSET))(this, value);
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

		::System::Void set_BlendHint(::Cinemachine::CameraState_BlendHintValue value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState_BlendHintValue))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_BLENDHINT_OFFSET))(this, value);
		}

		static ::Cinemachine::CameraState get_Default()
		{
			return ((::Cinemachine::CameraState(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_DEFAULT_OFFSET))();
		}

		::System::Int32 get_NumCustomBlendables()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GET_NUMCUSTOMBLENDABLES_OFFSET))(this);
		}

		::System::Void set_NumCustomBlendables(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_SET_NUMCUSTOMBLENDABLES_OFFSET))(this, value);
		}

		::Cinemachine::CameraState_CustomBlendable GetCustomBlendable(::System::Int32 index)
		{
			return ((::Cinemachine::CameraState_CustomBlendable(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_GETCUSTOMBLENDABLE_OFFSET))(this, index);
		}

		::System::Int32 FindCustomBlendable(::UnityEngine::Object* custom)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_FINDCUSTOMBLENDABLE_OFFSET))(this, custom);
		}

		::System::Void AddCustomBlendable(::Cinemachine::CameraState_CustomBlendable b)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState_CustomBlendable))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_ADDCUSTOMBLENDABLE_OFFSET))(this, b);
		}

		static ::Cinemachine::CameraState Lerp(::Cinemachine::CameraState stateA, ::Cinemachine::CameraState stateB, ::System::Single t)
		{
			return ((::Cinemachine::CameraState(*)(::Cinemachine::CameraState, ::Cinemachine::CameraState, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_LERP_OFFSET))(stateA, stateB, t);
		}

		static ::System::Single InterpolateFOV(::System::Single fovA, ::System::Single fovB, ::System::Single dA, ::System::Single dB, ::System::Single t)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_INTERPOLATEFOV_OFFSET))(fovA, fovB, dA, dB, t);
		}

		static ::UnityEngine::Vector3 ApplyPosBlendHint(::UnityEngine::Vector3 posA, ::Cinemachine::CameraState_BlendHintValue hintA, ::UnityEngine::Vector3 posB, ::Cinemachine::CameraState_BlendHintValue hintB, ::UnityEngine::Vector3 original, ::UnityEngine::Vector3 blended)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::Cinemachine::CameraState_BlendHintValue, ::UnityEngine::Vector3, ::Cinemachine::CameraState_BlendHintValue, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_APPLYPOSBLENDHINT_OFFSET))(posA, hintA, posB, hintB, original, blended);
		}

		static ::UnityEngine::Quaternion ApplyRotBlendHint(::UnityEngine::Quaternion rotA, ::Cinemachine::CameraState_BlendHintValue hintA, ::UnityEngine::Quaternion rotB, ::Cinemachine::CameraState_BlendHintValue hintB, ::UnityEngine::Quaternion original, ::UnityEngine::Quaternion blended)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::Cinemachine::CameraState_BlendHintValue, ::UnityEngine::Quaternion, ::Cinemachine::CameraState_BlendHintValue, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_APPLYROTBLENDHINT_OFFSET))(rotA, hintA, rotB, hintB, original, blended);
		}

		::UnityEngine::Vector3 InterpolatePosition(::UnityEngine::Vector3 posA, ::UnityEngine::Vector3 pivotA, ::UnityEngine::Vector3 posB, ::UnityEngine::Vector3 pivotB, ::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CAMERASTATE_INTERPOLATEPOSITION_OFFSET))(this, posA, pivotA, posB, pivotB, t);
		}
	};
}

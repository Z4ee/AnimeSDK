#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace CriWare { class CriAtomEx3dTransceiver; }
namespace CriWare { class CriAtomRegion; }
namespace CriWare { class CriAtomTransceiver_SetControlIdMethod; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRIATOMTRANSCEIVER_APPLYCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F952750)
#define CRIWARE_CRIATOMTRANSCEIVER_APPLYPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F953250)
#define CRIWARE_CRIATOMTRANSCEIVER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F952450)
#define CRIWARE_CRIATOMTRANSCEIVER_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9538A0)
#define CRIWARE_CRIATOMTRANSCEIVER_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1F953890)
#define CRIWARE_CRIATOMTRANSCEIVER_GET_INPUTFRONT_OFFSET UNITYSDK_OFFSET(0x1F951EB0)
#define CRIWARE_CRIATOMTRANSCEIVER_GET_INPUTPOS_OFFSET UNITYSDK_OFFSET(0x1F951E80)
#define CRIWARE_CRIATOMTRANSCEIVER_GET_INPUTUP_OFFSET UNITYSDK_OFFSET(0x1F951EE0)
#define CRIWARE_CRIATOMTRANSCEIVER_GET_REGION3D_OFFSET UNITYSDK_OFFSET(0x1F951F10)
#define CRIWARE_CRIATOMTRANSCEIVER_GET_TRANSCEIVERHN_OFFSET UNITYSDK_OFFSET(0x1F951E60)
#define CRIWARE_CRIATOMTRANSCEIVER_INITIALIZEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F9526E0)
#define CRIWARE_CRIATOMTRANSCEIVER_INTERNALFINALIZE_OFFSET UNITYSDK_OFFSET(0x1F952660)
#define CRIWARE_CRIATOMTRANSCEIVER_INTERNALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F9525E0)
#define CRIWARE_CRIATOMTRANSCEIVER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F9525D0)
#define CRIWARE_CRIATOMTRANSCEIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F9525A0)
#define CRIWARE_CRIATOMTRANSCEIVER_SET_INPUTFRONT_OFFSET UNITYSDK_OFFSET(0x1F951ED0)
#define CRIWARE_CRIATOMTRANSCEIVER_SET_INPUTPOS_OFFSET UNITYSDK_OFFSET(0x1F951EA0)
#define CRIWARE_CRIATOMTRANSCEIVER_SET_INPUTUP_OFFSET UNITYSDK_OFFSET(0x1F951F00)
#define CRIWARE_CRIATOMTRANSCEIVER_SET_REGION3D_OFFSET UNITYSDK_OFFSET(0x1F951F20)
#define CRIWARE_CRIATOMTRANSCEIVER_SET_TRANSCEIVERHN_OFFSET UNITYSDK_OFFSET(0x1F951E70)
#define CRIWARE_CRIATOMTRANSCEIVER_START_OFFSET UNITYSDK_OFFSET(0x1F952460)
#define CRIWARE_CRIATOMTRANSCEIVER_TRYSETAISACCONTROLID_OFFSET UNITYSDK_OFFSET(0x1F9538B0)
#define CRIWARE_CRIATOMTRANSCEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9539C0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomTransceiver_TypeDefinitionIndex = 34900;

	class CriAtomTransceiver : public ::CriWare::CriMonoBehaviour
	{
	public:
		::CriWare::CriAtomEx3dTransceiver* _transceiverHn_k__BackingField; // 0x28
		::UnityEngine::Vector3 _inputPos_k__BackingField; // 0x30
		::UnityEngine::Vector3 _inputFront_k__BackingField; // 0x3C
		::UnityEngine::Vector3 _inputUp_k__BackingField; // 0x48
		::CriWare::CriAtomRegion* regionOnStart; // 0x58
		::System::Boolean useDedicatedInput; // 0x60
		::UnityEngine::GameObject* dedicatedInput; // 0x68
		::System::Single outputVolume; // 0x70
		::System::Single directAudioRadius; // 0x74
		::System::Single crossFadeDistance; // 0x78
		::System::Single coneInsideAngle; // 0x7C
		::System::Single coneOutsideAngle; // 0x80
		::System::Single coneOutsideVolume; // 0x84
		::System::Single transceiverRadius; // 0x88
		::System::Single interiorDistance; // 0x8C
		::System::Single minAttenuation; // 0x90
		::System::Single maxAttenuation; // 0x94
		::System::String* globalAisacName; // 0x98
		::System::Single maxAngleAisacDelta; // 0xA0
		::System::String* distanceAisacControlId; // 0xA8
		::System::String* listenerAzimuthAisacControlId; // 0xB0
		::System::String* listenerElevationAisacControlId; // 0xB8
		::System::String* outputAzimuthAisacControlId; // 0xC0
		::System::String* outputElevationAisacControlId; // 0xC8
		::System::Boolean inspectorAisacSettingFoldout; // 0xD0
		::System::Boolean isInitialized; // 0xD1
		::System::Boolean dedicatedInputNotSetWarned; // 0xD2
		::CriWare::CriAtomRegion* currentRegion; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER__CTOR_OFFSET))(this);
		}

		::CriWare::CriAtomEx3dTransceiver* get_transceiverHn()
		{
			return ((::CriWare::CriAtomEx3dTransceiver*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_GET_TRANSCEIVERHN_OFFSET))(this);
		}

		::System::Void set_transceiverHn(::CriWare::CriAtomEx3dTransceiver* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dTransceiver*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SET_TRANSCEIVERHN_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_inputPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_GET_INPUTPOS_OFFSET))(this);
		}

		::System::Void set_inputPos(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SET_INPUTPOS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_inputFront()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_GET_INPUTFRONT_OFFSET))(this);
		}

		::System::Void set_inputFront(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SET_INPUTFRONT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_inputUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_GET_INPUTUP_OFFSET))(this);
		}

		::System::Void set_inputUp(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SET_INPUTUP_OFFSET))(this, value);
		}

		::CriWare::CriAtomRegion* get_region3d()
		{
			return ((::CriWare::CriAtomRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_GET_REGION3D_OFFSET))(this);
		}

		::System::Void set_region3d(::CriWare::CriAtomRegion* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_SET_REGION3D_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_ONDESTROY_OFFSET))(this);
		}

		::System::Void InternalInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_INTERNALINITIALIZE_OFFSET))(this);
		}

		::System::Void InternalFinalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_INTERNALFINALIZE_OFFSET))(this);
		}

		::System::Void InitializeParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_INITIALIZEPARAMETERS_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::System::Void ApplyCurrentPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_APPLYCURRENTPOSITION_OFFSET))(this);
		}

		::System::Void ApplyParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_APPLYPARAMETERS_OFFSET))(this);
		}

		::System::Void TrySetAisacControlId(::System::String* strId, ::CriWare::CriAtomTransceiver_SetControlIdMethod* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::CriWare::CriAtomTransceiver_SetControlIdMethod*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMTRANSCEIVER_TRYSETAISACCONTROLID_OFFSET))(this, strId, callback);
		}
	};
}

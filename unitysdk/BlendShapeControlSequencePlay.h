#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BlendShapeControlSequencePlay_BlendMode.h"
#include "unitysdk/BlendShapeControlSequencePlay_SequenceParameters.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

class MonoRenderEntity;
class NapRenderer;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define BLENDSHAPECONTROLSEQUENCEPLAY_GETCURRENTUVSHIFT_OFFSET UNITYSDK_OFFSET(0x1293F090)
#define BLENDSHAPECONTROLSEQUENCEPLAY_GETNAPRENDERER_OFFSET UNITYSDK_OFFSET(0x1293E7F0)
#define BLENDSHAPECONTROLSEQUENCEPLAY_GETSEQUENCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1293E330)
#define BLENDSHAPECONTROLSEQUENCEPLAY_INITSEQUENCEMATERIALDATA_OFFSET UNITYSDK_OFFSET(0x1293D3F0)
#define BLENDSHAPECONTROLSEQUENCEPLAY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1293DA00)
#define BLENDSHAPECONTROLSEQUENCEPLAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1293D1E0)
#define BLENDSHAPECONTROLSEQUENCEPLAY_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1293D340)
#define BLENDSHAPECONTROLSEQUENCEPLAY_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1293D2A0)
#define BLENDSHAPECONTROLSEQUENCEPLAY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1293D7E0)
#define BLENDSHAPECONTROLSEQUENCEPLAY_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1293E2B0)
#define BLENDSHAPECONTROLSEQUENCEPLAY_SEARCHMONORENDERENTITY_OFFSET UNITYSDK_OFFSET(0x1293ED90)
#define BLENDSHAPECONTROLSEQUENCEPLAY_SETSEQUENCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1293DA50)
#define BLENDSHAPECONTROLSEQUENCEPLAY_START_OFFSET UNITYSDK_OFFSET(0x1293D3A0)
#define BLENDSHAPECONTROLSEQUENCEPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1293F1A0)

inline static constexpr unsigned int BlendShapeControlSequencePlay_TypeDefinitionIndex = 40557;

class BlendShapeControlSequencePlay : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean supportNoBlendShap; // 0x18
	::System::Boolean loopPlay; // 0x19
	::UnityEngine::SkinnedMeshRenderer* sequenceRenderer; // 0x20
	::System::Int32 sequenceStateCtlIndex; // 0x28
	::System::Int32 maxStatesCount; // 0x2C
	::BlendShapeControlSequencePlay_BlendMode blendMode; // 0x30
	::System::Int32 playSpeed; // 0x34
	::System::Collections::Generic::List_1<::BlendShapeControlSequencePlay_SequenceParameters>* sequenceList; // 0x38
	::System::Int32 firstSkipFrames; // 0x40
	::MonoRenderEntity* monorenderentity; // 0x48
	::NapRenderer* napRenderer; // 0x50
	::System::Int32 sequenceMaterialIndex; // 0x58
	::System::Single delayTime; // 0x5C
	::System::Int32 preState; // 0x60
	::System::Int32 playSequenceIndex; // 0x64
	::System::Boolean needChangeTex; // 0x68
	::UnityEngine::Material* sequenceMaterial; // 0x70
	::System::Boolean isFirstLoop; // 0x78
	::System::Boolean skipFirstLoopOnInit; // 0x79
	::System::Int32 firstDelay; // 0x7C
	::System::Boolean isUI3DModel; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY__CTOR_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_START_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_ONVALIDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_LATEUPDATE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void ResetData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_RESETDATA_OFFSET))(this);
	}

	::System::Void InitSequenceMaterialData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_INITSEQUENCEMATERIALDATA_OFFSET))(this);
	}

	::System::Void GetSequenceMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_GETSEQUENCEMATERIAL_OFFSET))(this);
	}

	::System::Void GetNapRenderer(::UnityEngine::Material* sequenceMat)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_GETNAPRENDERER_OFFSET))(this, sequenceMat);
	}

	::System::Void SearchMonoRenderEntity(::UnityEngine::Transform* currentTransform)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_SEARCHMONORENDERENTITY_OFFSET))(this, currentTransform);
	}

	::System::Void SetSequenceMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_SETSEQUENCEMATERIAL_OFFSET))(this);
	}

	::UnityEngine::Vector4 GetCurrentUVShift(::UnityEngine::Vector4 sequenceListParameters, ::System::Int32 playSequenceIndex)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + BLENDSHAPECONTROLSEQUENCEPLAY_GETCURRENTUVSHIFT_OFFSET))(this, sequenceListParameters, playSequenceIndex);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class TextureRecorderUnit; }
namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1E3D9720)
#define MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_GETMATERIALKEY_OFFSET UNITYSDK_OFFSET(0x1E3DBB20)
#define MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_RECORDERFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1E3D9850)
#define MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_RECORDERFRAME_OFFSET UNITYSDK_OFFSET(0x1E3D9820)
#define MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_SETINSTANCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E3DA8C0)
#define MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_SETMATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1E3DA170)
#define MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_UPDATEINSTANCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E3DA800)
#define MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DBBE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SourceFrameRecorder_TypeDefinitionIndex = 32190;

	class SourceFrameRecorder : public ::System::Object
	{
	public:
		// static const ::System::String* MaterialFrameKey; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TextureRecorderUnit*>* recorderUnitTs; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* propertyIDs; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Timeline::FloatRecorderUnit*>* recorderUnitFs; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Timeline::ColorRecorderUnit*>* recorderUnitCs; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Timeline::Vector4RecorderUnit*>* recorderUnitV4s; // 0x30
		::System::Double frameTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER__CTOR_OFFSET))(this);
		}

		::System::Void ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_CLEARDATA_OFFSET))(this);
		}

		::System::Void RecorderFrame(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* recorderFrameInfos, ::UnityEngine::Material* sourceMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_RECORDERFRAME_OFFSET))(this, recorderFrameInfos, sourceMaterial);
		}

		::System::Void UpdateInstanceMaterial(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* recorderFrameInfos, ::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_UPDATEINSTANCEMATERIAL_OFFSET))(this, recorderFrameInfos, sourceMaterial, material);
		}

		::System::Void RecorderFrameInfo(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* recorderFrameInfos, ::UnityEngine::Material* sourceMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_RECORDERFRAMEINFO_OFFSET))(this, recorderFrameInfos, sourceMaterial);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetMaterialKey(::System::String* recorderAttrKey)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_GETMATERIALKEY_OFFSET))(recorderAttrKey);
		}

		::System::Void SetMaterialPropertyBlock(::UnityEngine::Material* sourceMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_SETMATERIALPROPERTYBLOCK_OFFSET))(this, sourceMaterial);
		}

		::System::Void SetInstanceMaterial(::System::Collections::Generic::List_1<::UnityEngine::Material*>* instanceMaterials)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEFRAMERECORDER_SETINSTANCEMATERIAL_OFFSET))(this, instanceMaterials);
		}
	};
}

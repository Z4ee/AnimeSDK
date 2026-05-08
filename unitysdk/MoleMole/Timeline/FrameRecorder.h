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
namespace UnityEngine { class MaterialPropertyBlock; }

#define MOLEMOLE_TIMELINE_FRAMERECORDER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1C2219B0)
#define MOLEMOLE_TIMELINE_FRAMERECORDER_GETMATERIALKEY_OFFSET UNITYSDK_OFFSET(0x1C223E20)
#define MOLEMOLE_TIMELINE_FRAMERECORDER_RECORDERFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1C221AE0)
#define MOLEMOLE_TIMELINE_FRAMERECORDER_RECORDERFRAME_OFFSET UNITYSDK_OFFSET(0x1C221AB0)
#define MOLEMOLE_TIMELINE_FRAMERECORDER_SETINSTANCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C222B60)
#define MOLEMOLE_TIMELINE_FRAMERECORDER_SETMATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1C222410)
#define MOLEMOLE_TIMELINE_FRAMERECORDER_UPDATEINSTANCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C222AA0)
#define MOLEMOLE_TIMELINE_FRAMERECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C223EE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FrameRecorder_TypeDefinitionIndex = 30614;

	class FrameRecorder : public ::System::Object
	{
	public:
		// static const ::System::String* MaterialFrameKey; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* propertyIDs; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Timeline::FloatRecorderUnit*>* recorderUnitFs; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Timeline::Vector4RecorderUnit*>* recorderUnitV4s; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Timeline::ColorRecorderUnit*>* recorderUnitCs; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TextureRecorderUnit*>* recorderUnitTs; // 0x30
		::System::Double frameTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FRAMERECORDER__CTOR_OFFSET))(this);
		}

		::System::Void ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FRAMERECORDER_CLEARDATA_OFFSET))(this);
		}

		::System::Void RecorderFrame(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* recorderFrameInfos, ::UnityEngine::MaterialPropertyBlock* materialPropertyBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FRAMERECORDER_RECORDERFRAME_OFFSET))(this, recorderFrameInfos, materialPropertyBlock);
		}

		::System::Void UpdateInstanceMaterial(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* recorderFrameInfos, ::UnityEngine::MaterialPropertyBlock* materialPropertyBlock, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FRAMERECORDER_UPDATEINSTANCEMATERIAL_OFFSET))(this, recorderFrameInfos, materialPropertyBlock, material);
		}

		::System::Void RecorderFrameInfo(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* recorderFrameInfos, ::UnityEngine::MaterialPropertyBlock* materialPropertyBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FRAMERECORDER_RECORDERFRAMEINFO_OFFSET))(this, recorderFrameInfos, materialPropertyBlock);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetMaterialKey(::System::String* recorderAttrKey)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FRAMERECORDER_GETMATERIALKEY_OFFSET))(recorderAttrKey);
		}

		::System::Void SetMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* materialPropertyBlock)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FRAMERECORDER_SETMATERIALPROPERTYBLOCK_OFFSET))(this, materialPropertyBlock);
		}

		::System::Void SetInstanceMaterial(::System::Collections::Generic::List_1<::UnityEngine::Material*>* instanceMaterials)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FRAMERECORDER_SETINSTANCEMATERIAL_OFFSET))(this, instanceMaterials);
		}
	};
}

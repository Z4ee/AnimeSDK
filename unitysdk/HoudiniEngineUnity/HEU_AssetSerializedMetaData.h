#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class CurveNodeData; }
namespace HoudiniEngineUnity { class HEU_InputCurveInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_GET_SAVEDCURVENODEDATA_OFFSET UNITYSDK_OFFSET(0x1500B7D0)
#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_GET_SAVEDINPUTCURVEINFO_OFFSET UNITYSDK_OFFSET(0x1500B7E0)
#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_GET_SOFTDELETED_OFFSET UNITYSDK_OFFSET(0x1500B7B0)
#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1500B7F0)
#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_SET_SOFTDELETED_OFFSET UNITYSDK_OFFSET(0x1500B7C0)
#define HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1500B860)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetSerializedMetaData_TypeDefinitionIndex = 38219;

	class HEU_AssetSerializedMetaData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean _softDeleted; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* _savedCurveNodeData; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputCurveInfo*>* _savedInputCurveInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_SoftDeleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_GET_SOFTDELETED_OFFSET))(this);
		}

		::System::Void set_SoftDeleted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_SET_SOFTDELETED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>* get_SavedCurveNodeData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_GET_SAVEDCURVENODEDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputCurveInfo*>* get_SavedInputCurveInfo()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_InputCurveInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_GET_SAVEDINPUTCURVEINFO_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_AssetSerializedMetaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_AssetSerializedMetaData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSERIALIZEDMETADATA_ISEQUIVALENTTO_OFFSET))(this, a1);
		}
	};
}

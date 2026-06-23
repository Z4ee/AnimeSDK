#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/SceneAssetDensityCell_SceneAssetDensityCellSerializedData.h"
#include "unitysdk/NapStreaming/SceneAssetDensityOverReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define NAPSTREAMING_SCENEASSETDENSITYCELL_ADDMATERIALS_OFFSET UNITYSDK_OFFSET(0xFFE0770)
#define NAPSTREAMING_SCENEASSETDENSITYCELL_CHECKBUDGET_OFFSET UNITYSDK_OFFSET(0xFFE0920)
#define NAPSTREAMING_SCENEASSETDENSITYCELL_CLEAR_OFFSET UNITYSDK_OFFSET(0xFFE07C0)
#define NAPSTREAMING_SCENEASSETDENSITYCELL_GETMAX_OFFSET UNITYSDK_OFFSET(0xFFE0300)
#define NAPSTREAMING_SCENEASSETDENSITYCELL_GETOVERREASONCOLOR_OFFSET UNITYSDK_OFFSET(0xFFE1080)
#define NAPSTREAMING_SCENEASSETDENSITYCELL_GETOVERREASONSTR_OFFSET UNITYSDK_OFFSET(0xFFE0A10)
#define NAPSTREAMING_SCENEASSETDENSITYCELL_GETSERIALIZEDDATA_OFFSET UNITYSDK_OFFSET(0xFFE10F0)
#define NAPSTREAMING_SCENEASSETDENSITYCELL_ISVALID_OFFSET UNITYSDK_OFFSET(0xFFE08C0)
#define NAPSTREAMING_SCENEASSETDENSITYCELL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xFFE0190)
#define NAPSTREAMING_SCENEASSETDENSITYCELL_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0xFFE0240)
#define NAPSTREAMING_SCENEASSETDENSITYCELL_STOPADDANDCALC_OFFSET UNITYSDK_OFFSET(0xFFE0420)
#define NAPSTREAMING_SCENEASSETDENSITYCELL__CCTOR_OFFSET UNITYSDK_OFFSET(0xFFE1360)
#define NAPSTREAMING_SCENEASSETDENSITYCELL__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE11E0)

namespace NapStreaming
{
	inline static constexpr unsigned int SceneAssetDensityCell_TypeDefinitionIndex = 76947;

	class SceneAssetDensityCell : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_s_overReasonInfos()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SceneAssetDensityCell_TypeDefinitionIndex)->GetStaticField(0x41B80);
		}
		::System::Collections::Generic::HashSet_1<::UnityEngine::Texture*>* textures; // 0x10
		::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>* materials; // 0x18
		::System::Int32 skinnedMeshCount; // 0x20
		::System::Int32 objectCount; // 0x24
		::System::Int32 animationClipCount; // 0x28
		::System::Int32 materialCount; // 0x2C
		::System::Double texturePixelCount; // 0x30
		::System::Int32 vertexCount; // 0x38
		::System::Int32 lightCount; // 0x3C
		::System::Int32 rendererCount; // 0x40
		::System::Int32 particleCount; // 0x44
		::UnityEngine::Bounds bounds; // 0x48
		::System::Int32 textureCount; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL__CCTOR_OFFSET))();
		}

		static ::NapStreaming::SceneAssetDensityCell* op_Addition(::NapStreaming::SceneAssetDensityCell* a, ::NapStreaming::SceneAssetDensityCell* b)
		{
			return ((::NapStreaming::SceneAssetDensityCell*(*)(::NapStreaming::SceneAssetDensityCell*, ::NapStreaming::SceneAssetDensityCell*))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_OP_ADDITION_OFFSET))(a, b);
		}

		static ::NapStreaming::SceneAssetDensityCell* op_Division(::NapStreaming::SceneAssetDensityCell* a, ::System::Int32 b)
		{
			return ((::NapStreaming::SceneAssetDensityCell*(*)(::NapStreaming::SceneAssetDensityCell*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_OP_DIVISION_OFFSET))(a, b);
		}

		::System::Void GetMax(::NapStreaming::SceneAssetDensityCell* b)
		{
			return ((::System::Void(*)(::PVOID, ::NapStreaming::SceneAssetDensityCell*))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_GETMAX_OFFSET))(this, b);
		}

		::System::Void StopAddAndCalc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_STOPADDANDCALC_OFFSET))(this);
		}

		::System::Void AddMaterials(::UnityEngine::Renderer* r)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_ADDMATERIALS_OFFSET))(this, r);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_CLEAR_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_ISVALID_OFFSET))(this);
		}

		::NapStreaming::SceneAssetDensityOverReason CheckBudget(::NapStreaming::SceneAssetDensityCell* budgetCell)
		{
			return ((::NapStreaming::SceneAssetDensityOverReason(*)(::PVOID, ::NapStreaming::SceneAssetDensityCell*))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_CHECKBUDGET_OFFSET))(this, budgetCell);
		}

		::System::String* GetOverReasonStr(::NapStreaming::SceneAssetDensityOverReason reason, ::NapStreaming::SceneAssetDensityCell* budgetCell, ::System::String* title)
		{
			return ((::System::String*(*)(::PVOID, ::NapStreaming::SceneAssetDensityOverReason, ::NapStreaming::SceneAssetDensityCell*, ::System::String*))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_GETOVERREASONSTR_OFFSET))(this, reason, budgetCell, title);
		}

		static ::UnityEngine::Color GetOverReasonColor(::NapStreaming::SceneAssetDensityOverReason reason)
		{
			return ((::UnityEngine::Color(*)(::NapStreaming::SceneAssetDensityOverReason))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_GETOVERREASONCOLOR_OFFSET))(reason);
		}

		::NapStreaming::SceneAssetDensityCell_SceneAssetDensityCellSerializedData GetSerializedData()
		{
			return ((::NapStreaming::SceneAssetDensityCell_SceneAssetDensityCellSerializedData(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENEASSETDENSITYCELL_GETSERIALIZEDDATA_OFFSET))(this);
		}
	};
}

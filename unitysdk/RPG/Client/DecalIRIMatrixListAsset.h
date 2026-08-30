#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DecalIRIMatrixListAsset_PerInstancePreview.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DECALIRIMATRIXLISTASSET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x192DFB70)
#define RPG_CLIENT_DECALIRIMATRIXLISTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x192DFBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int DecalIRIMatrixListAsset_TypeDefinitionIndex = 70846;

	class DecalIRIMatrixListAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* InstanceData; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* CustomData; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* InstanceNames; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::DecalIRIMatrixListAsset_PerInstancePreview>* PreviewData; // 0x30
		::UnityEngine::Bounds AABB; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALIRIMATRIXLISTASSET__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DECALIRIMATRIXLISTASSET_GET_COUNT_OFFSET))(this);
		}
	};
}

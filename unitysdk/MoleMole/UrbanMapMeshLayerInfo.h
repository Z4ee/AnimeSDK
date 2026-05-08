#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace MoleMole { class UrbanMapMeshHeightInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_URBANMAPMESHLAYERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE862D10)

namespace MoleMole
{
	inline static constexpr unsigned int UrbanMapMeshLayerInfo_TypeDefinitionIndex = 58128;

	class UrbanMapMeshLayerInfo : public ::System::Object
	{
	public:
		::System::String* AreaInfoPath; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* AreaNames; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Bounds>* MeshBounds; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* AreaPriority; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::UrbanMapMeshHeightInfo*>* MeshHeightInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPMESHLAYERINFO__CTOR_OFFSET))(this);
		}
	};
}

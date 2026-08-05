#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/StreamingLayer.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAPSTREAMING_SCENELAYERTOSTREAMINGDATA_GETDROPDOWNLAYERNAMES_OFFSET UNITYSDK_OFFSET(0x7C0D40)
#define NAPSTREAMING_SCENELAYERTOSTREAMINGDATA_GETDROPDOWNPATHS_OFFSET UNITYSDK_OFFSET(0x7C0D90)

namespace NapStreaming
{
	inline static constexpr unsigned int SceneLayerToStreamingData_TypeDefinitionIndex = 62512;

	struct alignas(8) SceneLayerToStreamingData
	{
		static ::Il2CppArray<::System::String*>** StaticGet_dropDownLayers()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SceneLayerToStreamingData_TypeDefinitionIndex)->GetStaticField(0x43380);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_dropDownPaths()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SceneLayerToStreamingData_TypeDefinitionIndex)->GetStaticField(0x43388);
		}
		::System::String* sceneLayerName; // 0x10
		::System::String* layerRootPath; // 0x18
		::NapStreaming::StreamingLayer streamingLayer; // 0x20

		::Il2CppArray<::System::String*>* GetDropdownLayerNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENELAYERTOSTREAMINGDATA_GETDROPDOWNLAYERNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetDropdownPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_SCENELAYERTOSTREAMINGDATA_GETDROPDOWNPATHS_OFFSET))(this);
		}
	};
}

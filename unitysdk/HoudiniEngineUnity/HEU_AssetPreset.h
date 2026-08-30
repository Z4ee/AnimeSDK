#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_InputPreset; }
namespace HoudiniEngineUnity { class HEU_VolumeCachePreset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_ASSETPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C3B80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetPreset_TypeDefinitionIndex = 39068;

	class HEU_AssetPreset : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* _identifier; // 0x10
		::System::Int32 _version; // 0x18
		::System::String* _assetOPName; // 0x20
		::Il2CppArray<::System::Byte>* _parameterPreset; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _curveNames; // 0x30
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Byte>*>* _curvePresets; // 0x38
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* inputPresets; // 0x40
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* volumeCachePresets; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETPRESET__CTOR_OFFSET))(this);
		}
	};
}

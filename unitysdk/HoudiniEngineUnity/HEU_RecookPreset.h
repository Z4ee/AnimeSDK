#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_InputPreset; }
namespace HoudiniEngineUnity { class HEU_VolumeCachePreset; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_RECOOKPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x8CB38A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_RecookPreset_TypeDefinitionIndex = 43485;

	class HEU_RecookPreset : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCachePreset*>* _volumeCachePresets; // 0x10
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputPreset*>* _inputPresets; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_RECOOKPRESET__CTOR_OFFSET))(this);
		}
	};
}

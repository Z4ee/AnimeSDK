#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputNode_InputObjectType.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_InputAssetPreset; }
namespace HoudiniEngineUnity { class HEU_InputObjectPreset; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_INPUTPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x8C81570)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputPreset_TypeDefinitionIndex = 43480;

	class HEU_InputPreset : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_InputNode_InputObjectType _inputObjectType; // 0x10
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputObjectPreset*>* _inputObjectPresets; // 0x18
		::System::String* _inputAssetName; // 0x20
		::System::Int32 _inputIndex; // 0x28
		::System::String* _inputName; // 0x30
		::System::Boolean _keepWorldTransform; // 0x38
		::System::Boolean _packGeometryBeforeMerging; // 0x39
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputAssetPreset*>* _inputAssetPresets; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTPRESET__CTOR_OFFSET))(this);
		}
	};
}

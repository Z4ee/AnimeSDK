#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_TreePrototypeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_VOLUMESCATTERTREES__CTOR_OFFSET UNITYSDK_OFFSET(0x849AB40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_VolumeScatterTrees_TypeDefinitionIndex = 37866;

	class HEU_VolumeScatterTrees : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _heightScales; // 0x10
		::Il2CppArray<::System::Single>* _rotations; // 0x18
		::Il2CppArray<::System::Int32>* _prototypeIndices; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* _positions; // 0x28
		::Il2CppArray<::System::Single>* _widthScales; // 0x30
		::Il2CppArray<::UnityEngine::Color32>* _colors; // 0x38
		::Il2CppArray<::UnityEngine::Color32>* _lightmapColors; // 0x40
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo*>* _treePrototypInfos; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_VOLUMESCATTERTREES__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_InputNodeUICache_HEU_InputAssetUICache; }
namespace HoudiniEngineUnity { class HEU_InputNodeUICache_HEU_InputObjectUICache; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_INPUTNODEUICACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x8469540)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputNodeUICache_TypeDefinitionIndex = 37634;

	class HEU_InputNodeUICache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputObjectUICache*>* _inputObjectCache; // 0x10
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNodeUICache_HEU_InputAssetUICache*>* _inputAssetCache; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTNODEUICACHE__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_2593F628332844CE_OFFSET UNITYSDK_OFFSET(0x18296AA0)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_28872D6E4B46BF42_OFFSET UNITYSDK_OFFSET(0x18296C70)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_BC88CEC0C10F4677_OFFSET UNITYSDK_OFFSET(0x182968C0)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_DB6B779165662A1C_OFFSET UNITYSDK_OFFSET(0x18296730)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x18296D40)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingLayerSetting_TypeDefinitionIndex = 70355;

	class StreamingLayerSetting : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* _CachePersistentLayerName; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingLayerDetail*>* LayerSettings; // 0x20
		::System::Single VisionDistanceFactor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING__CTOR_OFFSET))(this);
		}

		::RPG::Client::OpenWorld::StreamingLayerDetail* Method_3_DB6B779165662A1C(::System::String* a1)
		{
			return ((::RPG::Client::OpenWorld::StreamingLayerDetail*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_DB6B779165662A1C_OFFSET))(this, a1);
		}

		::System::String* Method_3_BC88CEC0C10F4677(::UnityEngine::Bounds a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_BC88CEC0C10F4677_OFFSET))(this, a1);
		}

		::System::String* Method_3_2593F628332844CE(::System::Single a1, ::RPG::GameCore::StreamingLayerType a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single, ::RPG::GameCore::StreamingLayerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_2593F628332844CE_OFFSET))(this, a1, a2);
		}

		::System::String* Method_3_28872D6E4B46BF42()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_28872D6E4B46BF42_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_22BD8D72769270B8_OFFSET UNITYSDK_OFFSET(0xAC05980)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_3D21ABACCE7E1D6F_OFFSET UNITYSDK_OFFSET(0xAC05AC0)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_C01E7BA2861FC0AA_OFFSET UNITYSDK_OFFSET(0xAC05C60)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_E9A11033FF6FC2DF_OFFSET UNITYSDK_OFFSET(0xAC05DF0)
#define RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xAC05EA0)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingLayerSetting_TypeDefinitionIndex = 67896;

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

		::RPG::Client::OpenWorld::StreamingLayerDetail* Method_3_22BD8D72769270B8(::System::String* a1)
		{
			return ((::RPG::Client::OpenWorld::StreamingLayerDetail*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_22BD8D72769270B8_OFFSET))(this, a1);
		}

		::System::String* Method_3_3D21ABACCE7E1D6F(::UnityEngine::Bounds a1)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_3D21ABACCE7E1D6F_OFFSET))(this, a1);
		}

		::System::String* Method_3_C01E7BA2861FC0AA(::System::Single a1, ::RPG::GameCore::StreamingLayerType a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single, ::RPG::GameCore::StreamingLayerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_C01E7BA2861FC0AA_OFFSET))(this, a1, a2);
		}

		::System::String* Method_3_E9A11033FF6FC2DF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGLAYERSETTING_METHOD_3_E9A11033FF6FC2DF_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ArtPrefabPreview; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTIVITYRANDOMPAINTCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD5E7CB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTIVITYRANDOMPAINTCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xD5E7100)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTIVITYRANDOMPAINTCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5E7DD0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftActivityRandomPaintController_TypeDefinitionIndex = 79968;

	class MechCraftActivityRandomPaintController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ArtPrefabPreview* _ArtPrefabPreview; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* DIOFMGCMBPF; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTIVITYRANDOMPAINTCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTIVITYRANDOMPAINTCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTACTIVITYRANDOMPAINTCONTROLLER_ONDESTROY_OFFSET))(this);
		}
	};
}

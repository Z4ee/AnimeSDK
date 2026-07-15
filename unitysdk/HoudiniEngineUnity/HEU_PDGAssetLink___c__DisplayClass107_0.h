#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_PDGAssetLink; }
namespace HoudiniEngineUnity { class HEU_SyncedEventData; }
namespace HoudiniEngineUnity { class HEU_TOPNodeData; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK___C__DISPLAYCLASS107_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10894050)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGAssetLink___c__DisplayClass107_0_TypeDefinitionIndex = 38379;

	class HEU_PDGAssetLink___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_PDGAssetLink* __4__this; // 0x10
		::System::Action_2<::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_SyncedEventData*>* OnSynced; // 0x18
		::HoudiniEngineUnity::HEU_TOPNodeData* topNode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK___C__DISPLAYCLASS107_0__CTOR_OFFSET))(this);
		}
	};
}

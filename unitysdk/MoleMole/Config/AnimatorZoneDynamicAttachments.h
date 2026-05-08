#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicAttachmentAnimSync.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1240D620)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1240CF00)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1240D340)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1240D6B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1240D6C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1240D790)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1240D840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDynamicAttachments_TypeDefinitionIndex = 81735;

	class AnimatorZoneDynamicAttachments : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachItem*>* attachmentGroupList; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachmentAnimSync>* animSyncs; // 0x58
		::System::String* syncParentAnimState; // 0x60
		::System::String* syncAttachmentAnimState; // 0x68
		::System::Single endNormalizedTime; // 0x70
		::System::Single startNormalizedTime; // 0x74
		::System::Boolean isFollow; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}

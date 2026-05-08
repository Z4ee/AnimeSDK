#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class Class_1_677CEA8C88AC78AB;
class Class_3_FFD0045B4597F294;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x11021FD0)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_FINDBYNAME_OFFSET UNITYSDK_OFFSET(0x11021450)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x11020B70)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x110216F0)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_POPRENDERERVISIBLEBYZONE_OFFSET UNITYSDK_OFFSET(0x11021580)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_PUSHRENDERERVISIBLEBYZONE_OFFSET UNITYSDK_OFFSET(0x11020960)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x11022060)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x110220F0)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x110221C0)
#define MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x11022270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneRenderVisible_TypeDefinitionIndex = 62393;

	class AnimatorZoneRenderVisible : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Paths; // 0x50
		::System::Boolean ApplyAllRenderers; // 0x58
		::System::Boolean visible; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE__CTOR_OFFSET))(this);
		}

		::System::Void PushRendererVisibleByZone(::Class_3_FFD0045B4597F294* matComponent, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::UnityEngine::Renderer* renderer, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FFD0045B4597F294*, ::Class_1_677CEA8C88AC78AB*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_PUSHRENDERERVISIBLEBYZONE_OFFSET))(this, matComponent, zoneInfo, renderer, path);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void PopRendererVisibleByZone(::Class_3_FFD0045B4597F294* matComponent, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::UnityEngine::Renderer* renderer, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_FFD0045B4597F294*, ::Class_1_677CEA8C88AC78AB*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_POPRENDERERVISIBLEBYZONE_OFFSET))(this, matComponent, zoneInfo, renderer, path);
		}

		static ::UnityEngine::Renderer* FindByName(::Il2CppArray<::UnityEngine::Renderer*>* renderers, ::System::String* name)
		{
			return ((::UnityEngine::Renderer*(*)(::Il2CppArray<::UnityEngine::Renderer*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_FINDBYNAME_OFFSET))(renderers, name);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_677CEA8C88AC78AB* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::Class_1_677CEA8C88AC78AB* CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::Class_1_677CEA8C88AC78AB* __base_CreateZoneInfoInstance()
		{
			return ((::Class_1_677CEA8C88AC78AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::Class_1_677CEA8C88AC78AB* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_677CEA8C88AC78AB*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONERENDERVISIBLE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}

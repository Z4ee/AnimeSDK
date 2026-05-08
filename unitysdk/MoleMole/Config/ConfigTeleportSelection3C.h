#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTION3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1753CAB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTeleportSelection3C_TypeDefinitionIndex = 46076;

	class ConfigTeleportSelection3C : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigPosRot* SwitchInPosRot; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* BlockColliderTags; // 0x18
		::System::String* BlockRayStartPoint; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>* BlockColliderLayers; // 0x28
		::System::String* ButtonIconPath; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* AnimatorTagBlacklist; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* GrappleAnimatorTags; // 0x40
		::System::Single GrappleInteractDistance; // 0x48
		::System::Single GrapplePreInteractDistance; // 0x4C
		::System::Single MajorAxisLength; // 0x50
		::System::Single MinorAxisLength; // 0x54
		::System::Single GrappleHiddenDistance; // 0x58
		::UnityEngine::Vector3 BlockRayStartPointOffset; // 0x5C
		::System::Int32 SwitchInIndex; // 0x68
		::System::Int32 MaxShowIconNum; // 0x6C
		::System::Single GrappleInteractAngle; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTELEPORTSELECTION3C__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AssemNPCColliderInfo; }
namespace RPG::Client { class AssemblyNPCAttachPointInfo; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_ENTITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x90D8140)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNPCPedestrianEntityConfig_EntityInfo_TypeDefinitionIndex = 56593;

	class ArtNPCPedestrianEntityConfig_EntityInfo : public ::System::Object
	{
	public:
		::System::String* Comment; // 0x10
		::System::String* NPCName; // 0x18
		::RPG::Client::AssemNPCColliderInfo* ColliderInfo; // 0x20
		::Il2CppArray<::RPG::Client::AssemblyNPCAttachPointInfo*>* AttachPoints; // 0x28
		::System::String* AnimatorPath; // 0x30
		::System::Single Scale; // 0x38
		::UnityEngine::AnimationCurve* MoveCurve00; // 0x40
		::UnityEngine::AnimationCurve* MoveCurve01; // 0x48
		::System::String* CapsuleOcclusionPresetPath; // 0x50
		::System::String* AdventureCharacterConfigPath; // 0x58
		::Il2CppArray<::System::Int32>* MeshLodRedirect; // 0x60
		::System::Boolean ForbidDitherWithPlayer; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_ENTITYINFO__CTOR_OFFSET))(this);
		}
	};
}

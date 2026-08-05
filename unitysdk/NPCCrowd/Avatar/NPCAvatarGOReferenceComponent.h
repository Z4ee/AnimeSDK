#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENT_GETALLPARTS_OFFSET UNITYSDK_OFFSET(0xF0E0CE0)
#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENT_GETANIMATOR_OFFSET UNITYSDK_OFFSET(0xF0E0D20)
#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENT_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0xF0E0C30)
#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF0E0A40)
#define NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF0E0D60)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarGOReferenceComponent_TypeDefinitionIndex = 52065;

	class NPCAvatarGOReferenceComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ENPCAvatarSize size; // 0x18
		::ENPCAvatarGender gender; // 0x1C
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>* parts; // 0x20
		::UnityEngine::Animator* animator; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Boolean GetComponent(::ENPCAvatarBodyPart part, ::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*& compInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENPCAvatarBodyPart, ::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENT_GETCOMPONENT_OFFSET))(this, part, compInfo);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>* GetAllParts()
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENT_GETALLPARTS_OFFSET))(this);
		}

		::UnityEngine::Animator* GetAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARGOREFERENCECOMPONENT_GETANIMATOR_OFFSET))(this);
		}
	};
}

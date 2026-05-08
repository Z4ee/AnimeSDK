#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_MONOCROWDAVATARRESOURCEHANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0xEA590C0)
#define NPCCROWD_AVATAR_MONOCROWDAVATARRESOURCEHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEA58F00)
#define NPCCROWD_AVATAR_MONOCROWDAVATARRESOURCEHANDLER_SETPARTSANDACCESSORIES_OFFSET UNITYSDK_OFFSET(0xEA58EA0)
#define NPCCROWD_AVATAR_MONOCROWDAVATARRESOURCEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEA590D0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int MonoCrowdAvatarResourceHandler_TypeDefinitionIndex = 53569;

	class MonoCrowdAvatarResourceHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>* _parts; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* _accessories; // 0x20
		::System::Boolean _resourceUnloadFinished; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_MONOCROWDAVATARRESOURCEHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void SetPartsAndAccessories(::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>* parts, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_MONOCROWDAVATARRESOURCEHANDLER_SETPARTSANDACCESSORIES_OFFSET))(this, parts, accessories);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_MONOCROWDAVATARRESOURCEHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_MONOCROWDAVATARRESOURCEHANDLER_FINALIZE_OFFSET))(this);
		}
	};
}

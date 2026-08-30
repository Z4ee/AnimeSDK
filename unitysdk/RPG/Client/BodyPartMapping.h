#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AttachPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BODYPARTMAPPING_AWAKE_OFFSET UNITYSDK_OFFSET(0xC95DF20)
#define RPG_CLIENT_BODYPARTMAPPING_FINDBODYPART_OFFSET UNITYSDK_OFFSET(0xC95E060)
#define RPG_CLIENT_BODYPARTMAPPING_GETALLBODYPART_OFFSET UNITYSDK_OFFSET(0xC95E1B0)
#define RPG_CLIENT_BODYPARTMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0xC95DEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int BodyPartMapping_TypeDefinitionIndex = 68337;

	class BodyPartMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AttachPoint*>* BodyParts; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* KALHKIMLAJJ; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BODYPARTMAPPING__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BODYPARTMAPPING_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Transform* FindBodyPart(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BODYPARTMAPPING_FINDBODYPART_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* GetAllBodyPart()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BODYPARTMAPPING_GETALLBODYPART_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class BatchAnimationAttachPointMapping_AttachPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BATCHANIMATIONATTACHPOINTMAPPING_AWAKE_OFFSET UNITYSDK_OFFSET(0x18695FD0)
#define RPG_CLIENT_BATCHANIMATIONATTACHPOINTMAPPING_GETBONEINDEX_OFFSET UNITYSDK_OFFSET(0x18695ED0)
#define RPG_CLIENT_BATCHANIMATIONATTACHPOINTMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x186960D0)

namespace RPG::Client
{
	inline static constexpr unsigned int BatchAnimationAttachPointMapping_TypeDefinitionIndex = 66385;

	class BatchAnimationAttachPointMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::BatchAnimationAttachPointMapping_AttachPoint*>* AttachPoints; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONATTACHPOINTMAPPING__CTOR_OFFSET))(this);
		}

		::System::Boolean GetBoneIndex(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONATTACHPOINTMAPPING_GETBONEINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONATTACHPOINTMAPPING_AWAKE_OFFSET))(this);
		}
	};
}

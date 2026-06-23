#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class EntitySpawnSubsystem_EntitySpawnRequest; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNBUNDLE_ADDINVALIDRID_OFFSET UNITYSDK_OFFSET(0x182C8590)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNBUNDLE_ADDREQUEST_OFFSET UNITYSDK_OFFSET(0x182C86A0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNBUNDLE_GET_REACHEDREQUESTS_OFFSET UNITYSDK_OFFSET(0x182C81D0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNBUNDLE_ISREQUESTSALLREACHED_OFFSET UNITYSDK_OFFSET(0x182C8820)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x182C81E0)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySpawnSubsystem_EntitySpawnBundle_TypeDefinitionIndex = 71880;

	class EntitySpawnSubsystem_EntitySpawnBundle : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _invalidRid; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ridBundle; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*>* _reachedRequests; // 0x20
		::System::Boolean IsCanceled; // 0x28

		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* ridBundle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNBUNDLE__CTOR_OFFSET))(this, ridBundle);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*>* get_ReachedRequests()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNBUNDLE_GET_REACHEDREQUESTS_OFFSET))(this);
		}

		::System::Int32 AddInvalidRid(::System::UInt32 rid)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNBUNDLE_ADDINVALIDRID_OFFSET))(this, rid);
		}

		::System::Int32 AddRequest(::System::UInt32 rid, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNBUNDLE_ADDREQUEST_OFFSET))(this, rid, request);
		}

		::System::Boolean IsRequestsAllReached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ENTITYSPAWNBUNDLE_ISREQUESTSALLREACHED_OFFSET))(this);
		}
	};
}

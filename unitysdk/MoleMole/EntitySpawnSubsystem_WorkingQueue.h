#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class EntitySpawnSubsystem_EntitySpawnRequest; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE_ADD_OFFSET UNITYSDK_OFFSET(0x16D30950)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x16D30930)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE_PEEK_OFFSET UNITYSDK_OFFSET(0x16D30B00)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE_POP_OFFSET UNITYSDK_OFFSET(0x16D30B90)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE_REMOVE_OFFSET UNITYSDK_OFFSET(0x16D30A70)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D30C40)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySpawnSubsystem_WorkingQueue_TypeDefinitionIndex = 58735;

	class EntitySpawnSubsystem_WorkingQueue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*>* _workingRequests; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE_ADD_OFFSET))(this, request);
		}

		::System::Void Remove(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE_REMOVE_OFFSET))(this, request);
		}

		::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* Peek()
		{
			return ((::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE_PEEK_OFFSET))(this);
		}

		::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* Pop()
		{
			return ((::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_WORKINGQUEUE_POP_OFFSET))(this);
		}
	};
}

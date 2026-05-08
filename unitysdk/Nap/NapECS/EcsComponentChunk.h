#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class IEcsComponentList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSCOMPONENTCHUNK_REGISTERENTITY_OFFSET UNITYSDK_OFFSET(0x192CEE10)
#define NAP_NAPECS_ECSCOMPONENTCHUNK_REMOVESWAPENTITYID_OFFSET UNITYSDK_OFFSET(0x192CF920)
#define NAP_NAPECS_ECSCOMPONENTCHUNK_UNREGISTERENTITY_OFFSET UNITYSDK_OFFSET(0x192CF2D0)
#define NAP_NAPECS_ECSCOMPONENTCHUNK__CTOR_OFFSET UNITYSDK_OFFSET(0x192C7CB0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentChunk_TypeDefinitionIndex = 35745;

	class EcsComponentChunk : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _entityIdToComponentIndex; // 0x10
		::Il2CppArray<::Nap::NapECS::IEcsComponentList*>* _components; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _componentIndexToEntityId; // 0x20
		::Nap::NapECS::ComponentMask _mask; // 0x28

		::System::Void _ctor(::System::Int32 worldTypeID, ::Nap::NapECS::ComponentMask& mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTCHUNK__CTOR_OFFSET))(this, worldTypeID, mask);
		}

		::System::Void RegisterEntity(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTCHUNK_REGISTERENTITY_OFFSET))(this, entity);
		}

		::System::Void UnRegisterEntity(::Nap::NapECS::EcsEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTCHUNK_UNREGISTERENTITY_OFFSET))(this, entity);
		}

		::System::Int32 RemoveSwapEntityId(::System::Int32 componentIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTCHUNK_REMOVESWAPENTITYID_OFFSET))(this, componentIndex);
		}
	};
}

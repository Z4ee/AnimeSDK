#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsIdGenerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAP_NAPECS_ECSCOMPONENTGROUP_ADD_OFFSET UNITYSDK_OFFSET(0x1B2ED740)
#define NAP_NAPECS_ECSCOMPONENTGROUP_DESTROY_OFFSET UNITYSDK_OFFSET(0x1B2EE9F0)
#define NAP_NAPECS_ECSCOMPONENTGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B2EEAD0)
#define NAP_NAPECS_ECSCOMPONENTGROUP_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1B2EE980)
#define NAP_NAPECS_ECSCOMPONENTGROUP_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B2EE920)
#define NAP_NAPECS_ECSCOMPONENTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EE860)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentGroup_TypeDefinitionIndex = 37287;

	class EcsComponentGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Nap::NapECS::EcsComponent*>* componentList; // 0x10
		::Nap::NapECS::EcsIdGenerator* componentIdGenerator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Add(::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTGROUP_ADD_OFFSET))(this, component);
		}

		::System::Void Remove(::System::UInt32 componentId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTGROUP_REMOVE_OFFSET))(this, componentId);
		}

		::System::Void Remove_1(::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTGROUP_REMOVE_1_OFFSET))(this, component);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTGROUP_DESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSCOMPONENTGROUP_DISPOSE_OFFSET))(this);
		}
	};
}

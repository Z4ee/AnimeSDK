#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsWorld; }
namespace Nap::NapECS { template <typename T> class ObjectPool_1; }
namespace System { template <typename T> class Action_1; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int GenericPooledComponent_1_TypeDefinitionIndex = 37955;

	template <typename T>
	class GenericPooledComponent_1 : public ::System::Object
	{
	public:
		static ::Nap::NapECS::ObjectPool_1<T>** StaticGet_s_Pool()
		{
			return (::Nap::NapECS::ObjectPool_1<T>**)Il2CppClass::FromTypeDefinitionIndex(GenericPooledComponent_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::Nap::NapECS::EcsComponent*>** StaticGet__storeAction()
		{
			return (::System::Action_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(GenericPooledComponent_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class ComponentMaskFilter; }
namespace Nap::NapECS { class EcsWorld; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int ReadAccessRequest_1_TypeDefinitionIndex = 37261;

	template <typename T>
	class ReadAccessRequest_1 : public ::System::Object
	{
	public:
		static ::Nap::NapECS::ComponentMask* StaticGet__mask()
		{
			return (::Nap::NapECS::ComponentMask*)Il2CppClass::FromTypeDefinitionIndex(ReadAccessRequest_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTypeMeta_1_TypeDefinitionIndex = 35715;

	template <typename T>
	class EcsWorldTypeMeta_1 : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__TypeID_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EcsWorldTypeMeta_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet__ClassComponentIdEnd_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EcsWorldTypeMeta_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

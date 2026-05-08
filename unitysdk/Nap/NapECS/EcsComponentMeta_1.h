#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsComponentMeta_1_TypeDefinitionIndex = 35769;

	template <typename T>
	class EcsComponentMeta_1 : public ::System::Object
	{
	public:
		static T* StaticGet_Dummy()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMeta_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet__ClassId_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMeta_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet__ShotClassId_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMeta_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet__IsAsync_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsComponentMeta_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

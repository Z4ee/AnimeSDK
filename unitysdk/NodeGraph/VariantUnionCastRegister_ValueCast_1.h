#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { template <typename T> class IVariantUnionCaster_1; }

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCastRegister_ValueCast_1_TypeDefinitionIndex = 44353;

	template <typename T>
	class VariantUnionCastRegister_ValueCast_1 : public ::System::Object
	{
	public:
		static ::NodeGraph::IVariantUnionCaster_1<T>** StaticGet_Caster()
		{
			return (::NodeGraph::IVariantUnionCaster_1<T>**)Il2CppClass::FromTypeDefinitionIndex(VariantUnionCastRegister_ValueCast_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

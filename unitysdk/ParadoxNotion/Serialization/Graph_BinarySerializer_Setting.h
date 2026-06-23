#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D542AA0)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int Graph_BinarySerializer_Setting_TypeDefinitionIndex = 29332;

	class Graph_BinarySerializer_Setting : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_isWritePropertyName()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Graph_BinarySerializer_Setting_TypeDefinitionIndex)->GetStaticField(0x12F80);
		}
		// static const ::System::Boolean IS_WRITE_META_TO_GRAPH; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GRAPH_BINARYSERIALIZER_SETTING__CCTOR_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_Class_1_1275DFE0B563CFB3_TypeDefinitionIndex = 34546;

	template <typename T>
	class GeneratedMessagePackResolver_Class_1_1275DFE0B563CFB3 : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter_1<T>** StaticGet_Field_1_0()
		{
			return (::MessagePack::Formatters::IMessagePackFormatter_1<T>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedMessagePackResolver_Class_1_1275DFE0B563CFB3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}

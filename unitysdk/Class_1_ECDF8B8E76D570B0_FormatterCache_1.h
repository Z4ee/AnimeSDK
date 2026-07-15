#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

inline static constexpr unsigned int Class_1_ECDF8B8E76D570B0_FormatterCache_1_TypeDefinitionIndex = 35660;

template <typename T>
class Class_1_ECDF8B8E76D570B0_FormatterCache_1 : public ::System::Object
{
public:
	static ::MessagePack::Formatters::IMessagePackFormatter_1<T>** StaticGet_Formatter()
	{
		return (::MessagePack::Formatters::IMessagePackFormatter_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECDF8B8E76D570B0_FormatterCache_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};

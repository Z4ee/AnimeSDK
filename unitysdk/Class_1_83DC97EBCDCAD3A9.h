#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_174BD6D3EB04B2EE.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

inline static constexpr unsigned int Class_1_83DC97EBCDCAD3A9_TypeDefinitionIndex = 86005;

template <typename T>
class Class_1_83DC97EBCDCAD3A9 : public ::System::Object
{
public:
	::MessagePack::Formatters::IMessagePackFormatter_1<T>* Field_1_0; // 0x0
};

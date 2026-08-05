#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MoleMole/BubbleGraphStruct.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_9F2FBF386FA9D245_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x170643F0)
#define CLASS_1_9F2FBF386FA9D245_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17064190)
#define CLASS_1_9F2FBF386FA9D245__CCTOR_OFFSET UNITYSDK_OFFSET(0x17064680)
#define CLASS_1_9F2FBF386FA9D245__CTOR_OFFSET UNITYSDK_OFFSET(0x17064670)

inline static constexpr unsigned int Class_1_9F2FBF386FA9D245_TypeDefinitionIndex = 83050;

class Class_1_9F2FBF386FA9D245 : public ::System::Object
{
public:
	static ::Class_1_9F2FBF386FA9D245** StaticGet_Field_1_0()
	{
		return (::Class_1_9F2FBF386FA9D245**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9F2FBF386FA9D245_TypeDefinitionIndex)->GetStaticField(0x41920);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2FBF386FA9D245__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9F2FBF386FA9D245__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::BubbleGraphStruct a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::BubbleGraphStruct, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_9F2FBF386FA9D245_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::BubbleGraphStruct Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::BubbleGraphStruct(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_9F2FBF386FA9D245_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

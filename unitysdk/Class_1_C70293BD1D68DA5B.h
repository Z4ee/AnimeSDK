#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_B04487F8B1A141C9.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_C70293BD1D68DA5B_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x101545B0)
#define CLASS_1_C70293BD1D68DA5B_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x10154530)
#define CLASS_1_C70293BD1D68DA5B__CTOR_OFFSET UNITYSDK_OFFSET(0x10154700)

inline static constexpr unsigned int Class_1_C70293BD1D68DA5B_TypeDefinitionIndex = 75978;

class Class_1_C70293BD1D68DA5B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C70293BD1D68DA5B__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_B04487F8B1A141C9 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_B04487F8B1A141C9, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C70293BD1D68DA5B_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_B04487F8B1A141C9 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_B04487F8B1A141C9(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C70293BD1D68DA5B_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

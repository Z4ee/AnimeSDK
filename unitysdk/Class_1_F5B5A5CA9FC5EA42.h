#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_F5B5A5CA9FC5EA42_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x165E9FB0)
#define CLASS_1_F5B5A5CA9FC5EA42_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x165E9CD0)
#define CLASS_1_F5B5A5CA9FC5EA42__CTOR_OFFSET UNITYSDK_OFFSET(0x165EA460)

inline static constexpr unsigned int Class_1_F5B5A5CA9FC5EA42_TypeDefinitionIndex = 28856;

class Class_1_F5B5A5CA9FC5EA42 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5B5A5CA9FC5EA42__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::GameCore::FixVec3 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::GameCore::FixVec3, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F5B5A5CA9FC5EA42_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixVec3 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::RPG::GameCore::FixVec3(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_F5B5A5CA9FC5EA42_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

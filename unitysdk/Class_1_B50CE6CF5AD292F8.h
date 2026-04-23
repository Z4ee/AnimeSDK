#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_B50CE6CF5AD292F8_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D48C70)
#define CLASS_1_B50CE6CF5AD292F8_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D48BA0)
#define CLASS_1_B50CE6CF5AD292F8__CTOR_OFFSET UNITYSDK_OFFSET(0x17D49070)

inline static constexpr unsigned int Class_1_B50CE6CF5AD292F8_TypeDefinitionIndex = 34592;

class Class_1_B50CE6CF5AD292F8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B50CE6CF5AD292F8__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::MVector3 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::MVector3, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_B50CE6CF5AD292F8_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::MVector3 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_B50CE6CF5AD292F8_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

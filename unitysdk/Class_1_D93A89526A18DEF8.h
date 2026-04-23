#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_D93A89526A18DEF8_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CC6430)
#define CLASS_1_D93A89526A18DEF8_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CC6390)
#define CLASS_1_D93A89526A18DEF8__CTOR_OFFSET UNITYSDK_OFFSET(0x17CC6680)

inline static constexpr unsigned int Class_1_D93A89526A18DEF8_TypeDefinitionIndex = 34588;

class Class_1_D93A89526A18DEF8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D93A89526A18DEF8__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::GameCore::FixPoint a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::GameCore::FixPoint, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_D93A89526A18DEF8_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixPoint Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_D93A89526A18DEF8_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

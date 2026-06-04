#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_A8FD0EBD1D71E1AC_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18B66CE0)
#define CLASS_1_A8FD0EBD1D71E1AC_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18B669C0)
#define CLASS_1_A8FD0EBD1D71E1AC__CTOR_OFFSET UNITYSDK_OFFSET(0x18B671D0)

inline static constexpr unsigned int Class_1_A8FD0EBD1D71E1AC_TypeDefinitionIndex = 34873;

class Class_1_A8FD0EBD1D71E1AC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8FD0EBD1D71E1AC__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::GameCore::FixVec3 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::GameCore::FixVec3, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A8FD0EBD1D71E1AC_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::FixVec3 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::RPG::GameCore::FixVec3(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_A8FD0EBD1D71E1AC_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

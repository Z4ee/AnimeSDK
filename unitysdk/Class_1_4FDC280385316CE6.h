#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_4FDC280385316CE6_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6D4F40)
#define CLASS_1_4FDC280385316CE6_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6D4E70)
#define CLASS_1_4FDC280385316CE6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D5340)

inline static constexpr unsigned int Class_1_4FDC280385316CE6_TypeDefinitionIndex = 37205;

class Class_1_4FDC280385316CE6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4FDC280385316CE6__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::RPG::MVector3 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::RPG::MVector3, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_4FDC280385316CE6_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::RPG::MVector3 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_4FDC280385316CE6_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

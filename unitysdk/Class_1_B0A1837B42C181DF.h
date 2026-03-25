#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_C2402B82A82704DB.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_B0A1837B42C181DF_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x165CC340)
#define CLASS_1_B0A1837B42C181DF_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x165CC1C0)
#define CLASS_1_B0A1837B42C181DF__CCTOR_OFFSET UNITYSDK_OFFSET(0x165CC600)
#define CLASS_1_B0A1837B42C181DF__CTOR_OFFSET UNITYSDK_OFFSET(0x165AB1A0)

inline static constexpr unsigned int Class_1_B0A1837B42C181DF_TypeDefinitionIndex = 28677;

class Class_1_B0A1837B42C181DF : public ::System::Object
{
public:
	static ::Class_1_B0A1837B42C181DF** StaticGet_Field_1_0()
	{
		return (::Class_1_B0A1837B42C181DF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B0A1837B42C181DF_TypeDefinitionIndex)->GetStaticField(0x25090);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0A1837B42C181DF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B0A1837B42C181DF__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_C2402B82A82704DB a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_C2402B82A82704DB, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_B0A1837B42C181DF_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_C2402B82A82704DB Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_C2402B82A82704DB(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_B0A1837B42C181DF_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

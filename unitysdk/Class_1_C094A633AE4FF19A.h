#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_C094A633AE4FF19A_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15B58E30)
#define CLASS_1_C094A633AE4FF19A_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15B58DA0)
#define CLASS_1_C094A633AE4FF19A__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B58EB0)
#define CLASS_1_C094A633AE4FF19A__CTOR_OFFSET UNITYSDK_OFFSET(0x15B58EA0)

inline static constexpr unsigned int Class_1_C094A633AE4FF19A_TypeDefinitionIndex = 59606;

class Class_1_C094A633AE4FF19A : public ::System::Object
{
public:
	static ::Class_1_C094A633AE4FF19A** StaticGet_Field_1_0()
	{
		return (::Class_1_C094A633AE4FF19A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C094A633AE4FF19A_TypeDefinitionIndex)->GetStaticField(0x41950);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C094A633AE4FF19A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C094A633AE4FF19A__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_B76C9DBDAECC6C19 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_B76C9DBDAECC6C19, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C094A633AE4FF19A_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_B76C9DBDAECC6C19 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_B76C9DBDAECC6C19(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_C094A633AE4FF19A_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

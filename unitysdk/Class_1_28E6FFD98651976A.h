#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/Struct_2_B679E4D914A10080_1.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_28E6FFD98651976A_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x145CE3C0)
#define CLASS_1_28E6FFD98651976A_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x145CE320)
#define CLASS_1_28E6FFD98651976A__CCTOR_OFFSET UNITYSDK_OFFSET(0x145CE470)
#define CLASS_1_28E6FFD98651976A__CTOR_OFFSET UNITYSDK_OFFSET(0x145CE460)

inline static constexpr unsigned int Class_1_28E6FFD98651976A_TypeDefinitionIndex = 65819;

class Class_1_28E6FFD98651976A : public ::System::Object
{
public:
	static ::Class_1_28E6FFD98651976A** StaticGet_Field_1_0()
	{
		return (::Class_1_28E6FFD98651976A**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28E6FFD98651976A_TypeDefinitionIndex)->GetStaticField(0x41970);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28E6FFD98651976A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28E6FFD98651976A__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::Struct_2_B679E4D914A10080_1 a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::Struct_2_B679E4D914A10080_1, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_28E6FFD98651976A_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_B679E4D914A10080_1 Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::Struct_2_B679E4D914A10080_1(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_28E6FFD98651976A_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MoleMole/BubbleGraphStruct.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define CLASS_1_21301CEDE936093C_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x147EAB30)
#define CLASS_1_21301CEDE936093C_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x147EA8D0)
#define CLASS_1_21301CEDE936093C__CCTOR_OFFSET UNITYSDK_OFFSET(0x147EADC0)
#define CLASS_1_21301CEDE936093C__CTOR_OFFSET UNITYSDK_OFFSET(0x147EADB0)

inline static constexpr unsigned int Class_1_21301CEDE936093C_TypeDefinitionIndex = 46027;

class Class_1_21301CEDE936093C : public ::System::Object
{
public:
	static ::Class_1_21301CEDE936093C** StaticGet_Field_1_0()
	{
		return (::Class_1_21301CEDE936093C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21301CEDE936093C_TypeDefinitionIndex)->GetStaticField(0x36200);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21301CEDE936093C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21301CEDE936093C__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::BubbleGraphStruct a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::BubbleGraphStruct, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_21301CEDE936093C_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::BubbleGraphStruct Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::BubbleGraphStruct(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_21301CEDE936093C_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

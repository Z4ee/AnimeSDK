#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MoleMole::FlowCanvas::Nodes { class LDSetInLevelStateGroup_StateGroupKeyValue; }

#define CLASS_1_5C02F337EB8609A6_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11BCB7C0)
#define CLASS_1_5C02F337EB8609A6_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11BCB740)
#define CLASS_1_5C02F337EB8609A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BCB880)
#define CLASS_1_5C02F337EB8609A6__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCB870)

inline static constexpr unsigned int Class_1_5C02F337EB8609A6_TypeDefinitionIndex = 52117;

class Class_1_5C02F337EB8609A6 : public ::System::Object
{
public:
	static ::Class_1_5C02F337EB8609A6** StaticGet_Field_1_0()
	{
		return (::Class_1_5C02F337EB8609A6**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5C02F337EB8609A6_TypeDefinitionIndex)->GetStaticField(0x40360);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C02F337EB8609A6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C02F337EB8609A6__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_5C02F337EB8609A6_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_5C02F337EB8609A6_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

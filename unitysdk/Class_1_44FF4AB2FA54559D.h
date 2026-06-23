#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MoleMole::FlowCanvas::Nodes { class LDSetInLevelStateGroup_StateGroupKeyValue; }

#define CLASS_1_44FF4AB2FA54559D_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12750600)
#define CLASS_1_44FF4AB2FA54559D_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12750580)
#define CLASS_1_44FF4AB2FA54559D__CCTOR_OFFSET UNITYSDK_OFFSET(0x127506C0)
#define CLASS_1_44FF4AB2FA54559D__CTOR_OFFSET UNITYSDK_OFFSET(0x127506B0)

inline static constexpr unsigned int Class_1_44FF4AB2FA54559D_TypeDefinitionIndex = 62829;

class Class_1_44FF4AB2FA54559D : public ::System::Object
{
public:
	static ::Class_1_44FF4AB2FA54559D** StaticGet_Field_1_0()
	{
		return (::Class_1_44FF4AB2FA54559D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44FF4AB2FA54559D_TypeDefinitionIndex)->GetStaticField(0x36260);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44FF4AB2FA54559D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44FF4AB2FA54559D__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& a1, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* a2, ::MessagePack::MessagePackSerializerOptions* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_44FF4AB2FA54559D_SERIALIZE_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* Deserialize(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + CLASS_1_44FF4AB2FA54559D_DESERIALIZE_OFFSET))(this, a1, a2);
	}
};

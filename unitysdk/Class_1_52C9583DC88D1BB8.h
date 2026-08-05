#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_52C9583DC88D1BB8_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0xF79B8A0)
#define CLASS_1_52C9583DC88D1BB8_METHOD_1_9609B770215E6C39_OFFSET UNITYSDK_OFFSET(0xF79BAD0)
#define CLASS_1_52C9583DC88D1BB8_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xF79BAE0)

inline static constexpr unsigned int Class_1_52C9583DC88D1BB8_TypeDefinitionIndex = 51422;

class Class_1_52C9583DC88D1BB8 : public ::System::Object
{
public:
	static ::MoleMole::ConfigUICoopTeam3D** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUICoopTeam3D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52C9583DC88D1BB8_TypeDefinitionIndex)->GetStaticField(0x30E90);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::ConfigUICoopTeam3D* Method_1_9609B770215E6C39()
	{
		return ((::MoleMole::ConfigUICoopTeam3D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_METHOD_1_9609B770215E6C39_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};

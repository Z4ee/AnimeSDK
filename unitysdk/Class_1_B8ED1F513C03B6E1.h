#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIScripts; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B8ED1F513C03B6E1_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x17E9A010)
#define CLASS_1_B8ED1F513C03B6E1_METHOD_1_6230C0D0E2C3143C_OFFSET UNITYSDK_OFFSET(0x17E9A240)
#define CLASS_1_B8ED1F513C03B6E1_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x17E9A250)

inline static constexpr unsigned int Class_1_B8ED1F513C03B6E1_TypeDefinitionIndex = 86369;

class Class_1_B8ED1F513C03B6E1 : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIScripts** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUIScripts**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8ED1F513C03B6E1_TypeDefinitionIndex)->GetStaticField(0x341E0);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B8ED1F513C03B6E1_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::ConfigUIScripts* Method_1_6230C0D0E2C3143C()
	{
		return ((::MoleMole::ConfigUIScripts*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8ED1F513C03B6E1_METHOD_1_6230C0D0E2C3143C_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8ED1F513C03B6E1_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};

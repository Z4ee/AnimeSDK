#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUINewMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E0A929115A175CC9_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x14A981B0)
#define CLASS_1_E0A929115A175CC9_METHOD_1_702E59CE27344498_OFFSET UNITYSDK_OFFSET(0x14A983E0)
#define CLASS_1_E0A929115A175CC9_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x14A980C0)

inline static constexpr unsigned int Class_1_E0A929115A175CC9_TypeDefinitionIndex = 49939;

class Class_1_E0A929115A175CC9 : public ::System::Object
{
public:
	static ::MoleMole::ConfigUINewMap** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUINewMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E0A929115A175CC9_TypeDefinitionIndex)->GetStaticField(0x362A0);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E0A929115A175CC9_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::ConfigUINewMap* Method_1_702E59CE27344498()
	{
		return ((::MoleMole::ConfigUINewMap*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E0A929115A175CC9_METHOD_1_702E59CE27344498_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E0A929115A175CC9_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFish; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F2AD78D0EC129B77_METHOD_1_1AC20F25E84C4836_OFFSET UNITYSDK_OFFSET(0x171F0940)
#define CLASS_1_F2AD78D0EC129B77_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x171F0950)
#define CLASS_1_F2AD78D0EC129B77_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x171F0B80)

inline static constexpr unsigned int Class_1_F2AD78D0EC129B77_TypeDefinitionIndex = 42564;

class Class_1_F2AD78D0EC129B77 : public ::System::Object
{
public:
	static ::MoleMole::ConfigUIFish** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUIFish**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2AD78D0EC129B77_TypeDefinitionIndex)->GetStaticField(0x34260);
	}

	static ::MoleMole::ConfigUIFish* Method_1_1AC20F25E84C4836()
	{
		return ((::MoleMole::ConfigUIFish*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2AD78D0EC129B77_METHOD_1_1AC20F25E84C4836_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F2AD78D0EC129B77_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F2AD78D0EC129B77_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};

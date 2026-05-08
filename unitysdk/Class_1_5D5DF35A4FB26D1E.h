#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUILight; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5D5DF35A4FB26D1E_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0xF99B4F0)
#define CLASS_1_5D5DF35A4FB26D1E_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0xF99B400)
#define CLASS_1_5D5DF35A4FB26D1E_METHOD_1_F5C3AE9A684C696D_OFFSET UNITYSDK_OFFSET(0xF99B710)

inline static constexpr unsigned int Class_1_5D5DF35A4FB26D1E_TypeDefinitionIndex = 51212;

class Class_1_5D5DF35A4FB26D1E : public ::System::Object
{
public:
	static ::MoleMole::ConfigUILight** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigUILight**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D5DF35A4FB26D1E_TypeDefinitionIndex)->GetStaticField(0x42E00);
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D5DF35A4FB26D1E_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::ConfigUILight* Method_1_F5C3AE9A684C696D()
	{
		return ((::MoleMole::ConfigUILight*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D5DF35A4FB26D1E_METHOD_1_F5C3AE9A684C696D_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5D5DF35A4FB26D1E_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNpcPrototype; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_C8116EB1F0D068AE_METHOD_1_06C9B785FC0C19FB_OFFSET UNITYSDK_OFFSET(0x10C94680)
#define CLASS_1_C8116EB1F0D068AE_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x10C94A30)
#define CLASS_1_C8116EB1F0D068AE_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x10C94940)
#define CLASS_1_C8116EB1F0D068AE_METHOD_1_B09185061AFC1033_OFFSET UNITYSDK_OFFSET(0x10C94670)

inline static constexpr unsigned int Class_1_C8116EB1F0D068AE_TypeDefinitionIndex = 63340;

class Class_1_C8116EB1F0D068AE : public ::System::Object
{
public:
	static ::MoleMole::ConfigNpcPrototype** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigNpcPrototype**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8116EB1F0D068AE_TypeDefinitionIndex)->GetStaticField(0x342F0);
	}

	static ::MoleMole::ConfigNpcPrototype* Method_1_B09185061AFC1033()
	{
		return ((::MoleMole::ConfigNpcPrototype*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8116EB1F0D068AE_METHOD_1_B09185061AFC1033_OFFSET))();
	}

	static ::System::Void Method_1_06C9B785FC0C19FB(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C8116EB1F0D068AE_METHOD_1_06C9B785FC0C19FB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C8116EB1F0D068AE_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C8116EB1F0D068AE_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};

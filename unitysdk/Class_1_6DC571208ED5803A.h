#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace MoleMole::Config { class CharacterAimModeConstant; }
namespace MoleMole::Config { class ConfigCharacterAimMode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_6DC571208ED5803A_METHOD_1_06AE2C3FCFB66ACB_OFFSET UNITYSDK_OFFSET(0x1AE9BDA0)
#define CLASS_1_6DC571208ED5803A_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x1AE9BB90)
#define CLASS_1_6DC571208ED5803A_METHOD_1_23FE3485B915D497_OFFSET UNITYSDK_OFFSET(0x1AE9B890)
#define CLASS_1_6DC571208ED5803A_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x1AE9BAA0)
#define CLASS_1_6DC571208ED5803A__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE9B880)

inline static constexpr unsigned int Class_1_6DC571208ED5803A_TypeDefinitionIndex = 63207;

class Class_1_6DC571208ED5803A : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCharacterAimMode** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigCharacterAimMode**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DC571208ED5803A_TypeDefinitionIndex)->GetStaticField(0x3D3C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Config::CharacterAimModeConfig* Method_1_23FE3485B915D497(::System::String* a1)
	{
		return ((::MoleMole::Config::CharacterAimModeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_METHOD_1_23FE3485B915D497_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::CharacterAimModeConstant* Method_1_06AE2C3FCFB66ACB()
	{
		return ((::MoleMole::Config::CharacterAimModeConstant*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_METHOD_1_06AE2C3FCFB66ACB_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};

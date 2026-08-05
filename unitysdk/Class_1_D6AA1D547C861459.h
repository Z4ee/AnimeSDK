#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace MoleMole::Config { class CharacterAimModeConstant; }
namespace MoleMole::Config { class ConfigCharacterAimMode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D6AA1D547C861459_METHOD_1_02EC919859331699_OFFSET UNITYSDK_OFFSET(0x178F4D80)
#define CLASS_1_D6AA1D547C861459_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x178F4920)
#define CLASS_1_D6AA1D547C861459_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x178F4C90)
#define CLASS_1_D6AA1D547C861459_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x178F4C40)
#define CLASS_1_D6AA1D547C861459_METHOD_1_D2114EA55728DB39_OFFSET UNITYSDK_OFFSET(0x178F4B50)
#define CLASS_1_D6AA1D547C861459_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x178F4BF0)
#define CLASS_1_D6AA1D547C861459__CTOR_OFFSET UNITYSDK_OFFSET(0x178F4910)

inline static constexpr unsigned int Class_1_D6AA1D547C861459_TypeDefinitionIndex = 40576;

class Class_1_D6AA1D547C861459 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigCharacterAimMode** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigCharacterAimMode**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6AA1D547C861459_TypeDefinitionIndex)->GetStaticField(0x390F0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D6AA1D547C861459_TypeDefinitionIndex)->GetStaticField(0xD7A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6AA1D547C861459__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D6AA1D547C861459_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::CharacterAimModeConstant* Method_1_D2114EA55728DB39()
	{
		return ((::MoleMole::Config::CharacterAimModeConstant*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6AA1D547C861459_METHOD_1_D2114EA55728DB39_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6AA1D547C861459_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D6AA1D547C861459_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D6AA1D547C861459_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::CharacterAimModeConfig* Method_1_02EC919859331699(::System::String* a1)
	{
		return ((::MoleMole::Config::CharacterAimModeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D6AA1D547C861459_METHOD_1_02EC919859331699_OFFSET))(a1);
	}
};

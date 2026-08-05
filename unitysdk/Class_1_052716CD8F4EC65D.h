#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelShootGameConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_052716CD8F4EC65D_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x16DF1970)
#define CLASS_1_052716CD8F4EC65D_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x16DF1880)
#define CLASS_1_052716CD8F4EC65D_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16DF1BA0)
#define CLASS_1_052716CD8F4EC65D_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x16DF1830)
#define CLASS_1_052716CD8F4EC65D_METHOD_1_FEA4EACE994470B1_OFFSET UNITYSDK_OFFSET(0x16DF17D0)
#define CLASS_1_052716CD8F4EC65D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DF17C0)

inline static constexpr unsigned int Class_1_052716CD8F4EC65D_TypeDefinitionIndex = 91484;

class Class_1_052716CD8F4EC65D : public ::System::Object
{
public:
	static ::MoleMole::Config::LevelShootGameConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::LevelShootGameConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_052716CD8F4EC65D_TypeDefinitionIndex)->GetStaticField(0x2F490);
	}
	static ::System::Boolean* StaticGet_Field_1_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_052716CD8F4EC65D_TypeDefinitionIndex)->GetStaticField(0xA4B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_052716CD8F4EC65D__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::LevelShootGameConfig* Method_1_FEA4EACE994470B1()
	{
		return ((::MoleMole::Config::LevelShootGameConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_052716CD8F4EC65D_METHOD_1_FEA4EACE994470B1_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_052716CD8F4EC65D_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_052716CD8F4EC65D_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_052716CD8F4EC65D_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_052716CD8F4EC65D_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}
};

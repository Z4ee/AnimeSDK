#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSurfVehicle; }
namespace MoleMole::Config { class MonoSurfConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F33EBDE1519D7BAD_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0xF0AE830)
#define CLASS_1_F33EBDE1519D7BAD_METHOD_1_4A685295D86BBB32_OFFSET UNITYSDK_OFFSET(0xF0AEA60)
#define CLASS_1_F33EBDE1519D7BAD_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0xF0AED00)
#define CLASS_1_F33EBDE1519D7BAD_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF0AEDF0)
#define CLASS_1_F33EBDE1519D7BAD_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xF0AECB0)
#define CLASS_1_F33EBDE1519D7BAD__CTOR_OFFSET UNITYSDK_OFFSET(0xF0AE820)

inline static constexpr unsigned int Class_1_F33EBDE1519D7BAD_TypeDefinitionIndex = 55541;

class Class_1_F33EBDE1519D7BAD : public ::System::Object
{
public:
	static ::MoleMole::Config::MonoSurfConfig** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::MonoSurfConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33EBDE1519D7BAD_TypeDefinitionIndex)->GetStaticField(0x3D720);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F33EBDE1519D7BAD_TypeDefinitionIndex)->GetStaticField(0xE5F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33EBDE1519D7BAD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F33EBDE1519D7BAD_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigSurfVehicle* Method_1_4A685295D86BBB32(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigSurfVehicle*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F33EBDE1519D7BAD_METHOD_1_4A685295D86BBB32_OFFSET))(a1);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33EBDE1519D7BAD_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F33EBDE1519D7BAD_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F33EBDE1519D7BAD_METHOD_1_5790A55946AA509D_OFFSET))();
	}
};

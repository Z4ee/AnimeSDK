#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace MoleMole::Config { class ConfigVirtualJoystickParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_A7A2447EE878942B_METHOD_1_49DFA39A30A44449_OFFSET UNITYSDK_OFFSET(0x14AB3260)
#define CLASS_1_A7A2447EE878942B_METHOD_1_502A81344CAEE4A4_OFFSET UNITYSDK_OFFSET(0x14AB3550)
#define CLASS_1_A7A2447EE878942B_METHOD_1_661695F6A3C4AD9D_OFFSET UNITYSDK_OFFSET(0x14AB3480)
#define CLASS_1_A7A2447EE878942B_METHOD_1_8786A5BF0BEC4F2E_OFFSET UNITYSDK_OFFSET(0x14AB3500)
#define CLASS_1_A7A2447EE878942B_METHOD_1_D82C6A9F13453DDE_OFFSET UNITYSDK_OFFSET(0x14AB3030)

inline static constexpr unsigned int Class_1_A7A2447EE878942B_TypeDefinitionIndex = 75491;

class Class_1_A7A2447EE878942B : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUIVirtualJoystick** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUIVirtualJoystick**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A7A2447EE878942B_TypeDefinitionIndex)->GetStaticField(0x3B600);
	}

	static ::MoleMole::Config::ConfigVirtualJoystickParam* Method_1_D82C6A9F13453DDE(::Enum_3_71AA90D596A09AC8 a1)
	{
		return ((::MoleMole::Config::ConfigVirtualJoystickParam*(*)(::Enum_3_71AA90D596A09AC8))((::PBYTE)hIl2Cpp + CLASS_1_A7A2447EE878942B_METHOD_1_D82C6A9F13453DDE_OFFSET))(a1);
	}

	static ::System::Void Method_1_49DFA39A30A44449(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A7A2447EE878942B_METHOD_1_49DFA39A30A44449_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigVirtualJoystickParam* Method_1_661695F6A3C4AD9D(::System::Int32 a1)
	{
		return ((::MoleMole::Config::ConfigVirtualJoystickParam*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A7A2447EE878942B_METHOD_1_661695F6A3C4AD9D_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigUIVirtualJoystick* Method_1_8786A5BF0BEC4F2E()
	{
		return ((::MoleMole::Config::ConfigUIVirtualJoystick*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A7A2447EE878942B_METHOD_1_8786A5BF0BEC4F2E_OFFSET))();
	}

	static ::System::Void Method_1_502A81344CAEE4A4(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A7A2447EE878942B_METHOD_1_502A81344CAEE4A4_OFFSET))(a1, a2, a3, a4);
	}
};

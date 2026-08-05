#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHackerDrone; }
namespace MoleMole::Config { class HackChargeConfig; }
namespace MoleMole::Config { class HackerDroneConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_DDE135C4E633F4DA_METHOD_1_248D755AD742AF1E_OFFSET UNITYSDK_OFFSET(0x101B7F90)
#define CLASS_1_DDE135C4E633F4DA_METHOD_1_6E46030B497D1749_OFFSET UNITYSDK_OFFSET(0x101B7C80)
#define CLASS_1_DDE135C4E633F4DA_METHOD_1_9317E20A1674E445_OFFSET UNITYSDK_OFFSET(0x101B80B0)
#define CLASS_1_DDE135C4E633F4DA_METHOD_1_E1D9096C1E1EFB5B_OFFSET UNITYSDK_OFFSET(0x101B7C30)
#define CLASS_1_DDE135C4E633F4DA_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x101B7EA0)

inline static constexpr unsigned int Class_1_DDE135C4E633F4DA_TypeDefinitionIndex = 89038;

class Class_1_DDE135C4E633F4DA : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHackerDrone** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigHackerDrone**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DDE135C4E633F4DA_TypeDefinitionIndex)->GetStaticField(0x4E380);
	}

	static ::MoleMole::Config::ConfigHackerDrone* Method_1_E1D9096C1E1EFB5B()
	{
		return ((::MoleMole::Config::ConfigHackerDrone*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_METHOD_1_E1D9096C1E1EFB5B_OFFSET))();
	}

	static ::System::Void Method_1_6E46030B497D1749(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_METHOD_1_6E46030B497D1749_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_248D755AD742AF1E(::System::String* a1, ::MoleMole::Config::HackChargeConfig*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::HackChargeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_METHOD_1_248D755AD742AF1E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9317E20A1674E445(::System::String* a1, ::MoleMole::Config::HackerDroneConfig*& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::HackerDroneConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_METHOD_1_9317E20A1674E445_OFFSET))(a1, a2);
	}
};

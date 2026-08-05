#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_20E58F76D44AFEF6;
namespace MoleMole::Config { class ConfigMonsterAlerts; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5E2A8BD9D2714BA0_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x109C18C0)
#define CLASS_1_5E2A8BD9D2714BA0_METHOD_1_4151B26B9E61852E_OFFSET UNITYSDK_OFFSET(0x109C1680)
#define CLASS_1_5E2A8BD9D2714BA0_METHOD_1_6E7B8A05F3580405_OFFSET UNITYSDK_OFFSET(0x109C18B0)
#define CLASS_1_5E2A8BD9D2714BA0_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x109C19B0)
#define CLASS_1_5E2A8BD9D2714BA0_METHOD_1_9EEC1B6161ACA887_OFFSET UNITYSDK_OFFSET(0x109C1690)

inline static constexpr unsigned int Class_1_5E2A8BD9D2714BA0_TypeDefinitionIndex = 88724;

class Class_1_5E2A8BD9D2714BA0 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMonsterAlerts** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigMonsterAlerts**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E2A8BD9D2714BA0_TypeDefinitionIndex)->GetStaticField(0x3B3E0);
	}

	static ::System::Void Method_1_4151B26B9E61852E(::MoleMole::Config::ConfigMonsterAlerts* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigMonsterAlerts*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_METHOD_1_4151B26B9E61852E_OFFSET))(a1);
	}

	static ::Class_1_20E58F76D44AFEF6* Method_1_9EEC1B6161ACA887(::System::String* a1)
	{
		return ((::Class_1_20E58F76D44AFEF6*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_METHOD_1_9EEC1B6161ACA887_OFFSET))(a1);
	}

	static ::MoleMole::Config::ConfigMonsterAlerts* Method_1_6E7B8A05F3580405()
	{
		return ((::MoleMole::Config::ConfigMonsterAlerts*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_METHOD_1_6E7B8A05F3580405_OFFSET))();
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5E2A8BD9D2714BA0_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}
};

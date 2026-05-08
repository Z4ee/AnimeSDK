#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityTimeSlowBase; }
namespace MoleMole::Config { class ConfigEntityTimeSlows; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_947A86BD8C39FD80_METHOD_1_2E04E911EC2F4E81_OFFSET UNITYSDK_OFFSET(0x114B40C0)
#define CLASS_1_947A86BD8C39FD80_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x114B3FD0)
#define CLASS_1_947A86BD8C39FD80_METHOD_1_58062C9F4D7B874C_OFFSET UNITYSDK_OFFSET(0x114B4070)
#define CLASS_1_947A86BD8C39FD80_METHOD_1_611142A6ECF0D805_OFFSET UNITYSDK_OFFSET(0x114B4BF0)
#define CLASS_1_947A86BD8C39FD80_METHOD_1_973D86D483BD8ACE_OFFSET UNITYSDK_OFFSET(0x114B4440)
#define CLASS_1_947A86BD8C39FD80_METHOD_1_D6652B517220D4C1_OFFSET UNITYSDK_OFFSET(0x114B4340)
#define CLASS_1_947A86BD8C39FD80_METHOD_1_E999C39FCBEC5E3E_OFFSET UNITYSDK_OFFSET(0x114B4AC0)
#define CLASS_1_947A86BD8C39FD80__CCTOR_OFFSET UNITYSDK_OFFSET(0x114B3FC0)

inline static constexpr unsigned int Class_1_947A86BD8C39FD80_TypeDefinitionIndex = 65336;

class Class_1_947A86BD8C39FD80 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTimeSlowBase*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTimeSlowBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_947A86BD8C39FD80_TypeDefinitionIndex)->GetStaticField(0x44000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_947A86BD8C39FD80__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_947A86BD8C39FD80_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_58062C9F4D7B874C(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_947A86BD8C39FD80_METHOD_1_58062C9F4D7B874C_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigEntityTimeSlowBase* Method_1_D6652B517220D4C1(::System::String* a1)
	{
		return ((::MoleMole::Config::ConfigEntityTimeSlowBase*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_947A86BD8C39FD80_METHOD_1_D6652B517220D4C1_OFFSET))(a1);
	}

	static ::System::Void Method_1_973D86D483BD8ACE(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityTimeSlows*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityTimeSlows*>*))((::PBYTE)hIl2Cpp + CLASS_1_947A86BD8C39FD80_METHOD_1_973D86D483BD8ACE_OFFSET))(a1);
	}

	static ::System::Void Method_1_2E04E911EC2F4E81(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_947A86BD8C39FD80_METHOD_1_2E04E911EC2F4E81_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E999C39FCBEC5E3E(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_947A86BD8C39FD80_METHOD_1_E999C39FCBEC5E3E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_611142A6ECF0D805(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_947A86BD8C39FD80_METHOD_1_611142A6ECF0D805_OFFSET))(a1);
	}
};

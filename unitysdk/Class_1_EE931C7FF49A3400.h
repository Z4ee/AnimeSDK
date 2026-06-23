#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageTextStyleConfig.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUITextStyle; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EE931C7FF49A3400_METHOD_1_22C2C34231AFEB14_OFFSET UNITYSDK_OFFSET(0x133488D0)
#define CLASS_1_EE931C7FF49A3400_METHOD_1_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x13348880)
#define CLASS_1_EE931C7FF49A3400_METHOD_1_3C0CA0EBE9245933_OFFSET UNITYSDK_OFFSET(0x133481A0)
#define CLASS_1_EE931C7FF49A3400_METHOD_1_94DB8DE0982416A5_OFFSET UNITYSDK_OFFSET(0x13348A40)
#define CLASS_1_EE931C7FF49A3400_METHOD_1_D046F7A44995FEBA_OFFSET UNITYSDK_OFFSET(0x133480B0)
#define CLASS_1_EE931C7FF49A3400_METHOD_1_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x133482B0)

inline static constexpr unsigned int Class_1_EE931C7FF49A3400_TypeDefinitionIndex = 51324;

class Class_1_EE931C7FF49A3400 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigUITextStyle** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigUITextStyle**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE931C7FF49A3400_TypeDefinitionIndex)->GetStaticField(0x47390);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LanguageTextStyleConfig>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LanguageTextStyleConfig>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE931C7FF49A3400_TypeDefinitionIndex)->GetStaticField(0x47398);
	}

	static ::System::Void Method_1_D046F7A44995FEBA(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE931C7FF49A3400_METHOD_1_D046F7A44995FEBA_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE931C7FF49A3400_METHOD_1_DDFCBBB54CA12CE0_OFFSET))();
	}

	static ::System::Void Method_1_3C0CA0EBE9245933(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_EE931C7FF49A3400_METHOD_1_3C0CA0EBE9245933_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2839AE123F8ECAA7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE931C7FF49A3400_METHOD_1_2839AE123F8ECAA7_OFFSET))();
	}

	static ::System::Boolean Method_1_22C2C34231AFEB14(::System::String* a1, ::MoleMole::Config::LanguageTextStyleConfig& a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::MoleMole::Config::LanguageTextStyleConfig&))((::PBYTE)hIl2Cpp + CLASS_1_EE931C7FF49A3400_METHOD_1_22C2C34231AFEB14_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigUITextStyle* Method_1_94DB8DE0982416A5()
	{
		return ((::MoleMole::Config::ConfigUITextStyle*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE931C7FF49A3400_METHOD_1_94DB8DE0982416A5_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigRabGame; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_61DF82B77D2BECEA_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x1A0D5DC0)
#define CLASS_1_61DF82B77D2BECEA_METHOD_1_0F5B47B0EEB3D5A0_OFFSET UNITYSDK_OFFSET(0x1A0D5DB0)
#define CLASS_1_61DF82B77D2BECEA_METHOD_1_8B54356D0FC7DE33_OFFSET UNITYSDK_OFFSET(0x1A0D5EB0)
#define CLASS_1_61DF82B77D2BECEA_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x1A0D5BF0)

inline static constexpr unsigned int Class_1_61DF82B77D2BECEA_TypeDefinitionIndex = 65274;

class Class_1_61DF82B77D2BECEA : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigRabGame** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigRabGame**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61DF82B77D2BECEA_TypeDefinitionIndex)->GetStaticField(0x45800);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_61DF82B77D2BECEA_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0F5B47B0EEB3D5A0(::MoleMole::Config::ConfigRabGame* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigRabGame*))((::PBYTE)hIl2Cpp + CLASS_1_61DF82B77D2BECEA_METHOD_1_0F5B47B0EEB3D5A0_OFFSET))(a1);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_61DF82B77D2BECEA_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigRabGame* Method_1_8B54356D0FC7DE33()
	{
		return ((::MoleMole::Config::ConfigRabGame*(*)())((::PBYTE)hIl2Cpp + CLASS_1_61DF82B77D2BECEA_METHOD_1_8B54356D0FC7DE33_OFFSET))();
	}
};

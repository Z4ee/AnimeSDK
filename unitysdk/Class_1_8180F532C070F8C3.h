#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformance; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8180F532C070F8C3_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x14495BA0)
#define CLASS_1_8180F532C070F8C3_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x144959D0)
#define CLASS_1_8180F532C070F8C3_METHOD_1_E3F1F4FF7B6F59D2_OFFSET UNITYSDK_OFFSET(0x14495C90)
#define CLASS_1_8180F532C070F8C3_METHOD_1_EAEE3A2A336305B9_OFFSET UNITYSDK_OFFSET(0x14495B90)

inline static constexpr unsigned int Class_1_8180F532C070F8C3_TypeDefinitionIndex = 54185;

class Class_1_8180F532C070F8C3 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigGachaPerformance** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigGachaPerformance**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8180F532C070F8C3_TypeDefinitionIndex)->GetStaticField(0x38930);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8180F532C070F8C3_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EAEE3A2A336305B9(::MoleMole::Config::ConfigGachaPerformance* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigGachaPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_8180F532C070F8C3_METHOD_1_EAEE3A2A336305B9_OFFSET))(a1);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8180F532C070F8C3_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigGachaPerformance* Method_1_E3F1F4FF7B6F59D2()
	{
		return ((::MoleMole::Config::ConfigGachaPerformance*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8180F532C070F8C3_METHOD_1_E3F1F4FF7B6F59D2_OFFSET))();
	}
};

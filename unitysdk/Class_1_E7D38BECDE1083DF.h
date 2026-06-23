#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/ConfigBuddyBehaviour.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuddyMisc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_E7D38BECDE1083DF_METHOD_1_0947F577F1E5AE4F_OFFSET UNITYSDK_OFFSET(0x13753D70)
#define CLASS_1_E7D38BECDE1083DF_METHOD_1_2672ADDB5302C155_OFFSET UNITYSDK_OFFSET(0x13754020)
#define CLASS_1_E7D38BECDE1083DF_METHOD_1_6FFDA3E45A04741B_OFFSET UNITYSDK_OFFSET(0x13754040)
#define CLASS_1_E7D38BECDE1083DF_METHOD_1_78B044C430BB3A86_OFFSET UNITYSDK_OFFSET(0x13754030)
#define CLASS_1_E7D38BECDE1083DF_METHOD_1_8E2C129DE4FC3609_OFFSET UNITYSDK_OFFSET(0x13753E60)

inline static constexpr unsigned int Class_1_E7D38BECDE1083DF_TypeDefinitionIndex = 48977;

class Class_1_E7D38BECDE1083DF : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigBuddyMisc** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigBuddyMisc**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7D38BECDE1083DF_TypeDefinitionIndex)->GetStaticField(0x32010);
	}

	static ::System::Void Method_1_0947F577F1E5AE4F(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_METHOD_1_0947F577F1E5AE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_2672ADDB5302C155(::MoleMole::Config::ConfigBuddyMisc* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigBuddyMisc*))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_METHOD_1_2672ADDB5302C155_OFFSET))(a1);
	}

	static ::System::Void Method_1_8E2C129DE4FC3609(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_METHOD_1_8E2C129DE4FC3609_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigBuddyMisc* Method_1_78B044C430BB3A86()
	{
		return ((::MoleMole::Config::ConfigBuddyMisc*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_METHOD_1_78B044C430BB3A86_OFFSET))();
	}

	static ::System::Boolean Method_1_6FFDA3E45A04741B(::MoleMole::Config::BuddyBehaviourType a1, ::MoleMole::Config::ConfigBuddyBehaviour& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::BuddyBehaviourType, ::MoleMole::Config::ConfigBuddyBehaviour&))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_METHOD_1_6FFDA3E45A04741B_OFFSET))(a1, a2);
	}
};

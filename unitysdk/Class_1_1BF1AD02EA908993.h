#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSwitchTeamActivity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1BF1AD02EA908993_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xF9DBDF0)
#define CLASS_1_1BF1AD02EA908993_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xF9DBD00)
#define CLASS_1_1BF1AD02EA908993_METHOD_1_EACE6053B8DF1FA2_OFFSET UNITYSDK_OFFSET(0xF9DBCF0)

inline static constexpr unsigned int Class_1_1BF1AD02EA908993_TypeDefinitionIndex = 78974;

class Class_1_1BF1AD02EA908993 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSwitchTeamActivity** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigSwitchTeamActivity**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1BF1AD02EA908993_TypeDefinitionIndex)->GetStaticField(0x3D6A0);
	}

	static ::MoleMole::Config::ConfigSwitchTeamActivity* Method_1_EACE6053B8DF1FA2()
	{
		return ((::MoleMole::Config::ConfigSwitchTeamActivity*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1BF1AD02EA908993_METHOD_1_EACE6053B8DF1FA2_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1BF1AD02EA908993_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1BF1AD02EA908993_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTurnBaseBattle; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EE6F6A610AE92B17_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x17F5A3F0)
#define CLASS_1_EE6F6A610AE92B17_METHOD_1_0EDAC49B69C10567_OFFSET UNITYSDK_OFFSET(0x17F5A600)
#define CLASS_1_EE6F6A610AE92B17_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x17F5A300)

inline static constexpr unsigned int Class_1_EE6F6A610AE92B17_TypeDefinitionIndex = 79418;

class Class_1_EE6F6A610AE92B17 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTurnBaseBattle** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigTurnBaseBattle**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE6F6A610AE92B17_TypeDefinitionIndex)->GetStaticField(0x38F80);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE6F6A610AE92B17_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_EE6F6A610AE92B17_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigTurnBaseBattle* Method_1_0EDAC49B69C10567()
	{
		return ((::MoleMole::Config::ConfigTurnBaseBattle*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE6F6A610AE92B17_METHOD_1_0EDAC49B69C10567_OFFSET))();
	}
};

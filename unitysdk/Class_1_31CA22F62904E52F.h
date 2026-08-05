#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSummerTideTreasure; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_31CA22F62904E52F_METHOD_1_0B4D77EF1A316D47_OFFSET UNITYSDK_OFFSET(0x167A7DC0)
#define CLASS_1_31CA22F62904E52F_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x167A7BB0)
#define CLASS_1_31CA22F62904E52F_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x167A7E10)

inline static constexpr unsigned int Class_1_31CA22F62904E52F_TypeDefinitionIndex = 75815;

class Class_1_31CA22F62904E52F : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigSummerTideTreasure** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigSummerTideTreasure**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31CA22F62904E52F_TypeDefinitionIndex)->GetStaticField(0x3C670);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_31CA22F62904E52F_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigSummerTideTreasure* Method_1_0B4D77EF1A316D47()
	{
		return ((::MoleMole::Config::ConfigSummerTideTreasure*(*)())((::PBYTE)hIl2Cpp + CLASS_1_31CA22F62904E52F_METHOD_1_0B4D77EF1A316D47_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_31CA22F62904E52F_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}
};

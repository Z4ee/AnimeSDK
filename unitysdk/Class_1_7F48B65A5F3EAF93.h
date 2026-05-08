#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_7F48B65A5F3EAF93_METHOD_1_08C0815CD79B1EAE_OFFSET UNITYSDK_OFFSET(0x14AB2B20)
#define CLASS_1_7F48B65A5F3EAF93_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x14AB2C20)
#define CLASS_1_7F48B65A5F3EAF93_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x14AB2B30)

inline static constexpr unsigned int Class_1_7F48B65A5F3EAF93_TypeDefinitionIndex = 43958;

class Class_1_7F48B65A5F3EAF93 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigMultiplayer** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigMultiplayer**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F48B65A5F3EAF93_TypeDefinitionIndex)->GetStaticField(0x33310);
	}

	static ::MoleMole::Config::ConfigMultiplayer* Method_1_08C0815CD79B1EAE()
	{
		return ((::MoleMole::Config::ConfigMultiplayer*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F48B65A5F3EAF93_METHOD_1_08C0815CD79B1EAE_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F48B65A5F3EAF93_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_7F48B65A5F3EAF93_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};

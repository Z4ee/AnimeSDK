#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHack; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8CFFFE4E3AAF88DC_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x1297BE70)
#define CLASS_1_8CFFFE4E3AAF88DC_METHOD_1_7DE4395D171BC600_OFFSET UNITYSDK_OFFSET(0x1297C080)
#define CLASS_1_8CFFFE4E3AAF88DC_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x1297BD80)

inline static constexpr unsigned int Class_1_8CFFFE4E3AAF88DC_TypeDefinitionIndex = 63137;

class Class_1_8CFFFE4E3AAF88DC : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHack** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigHack**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CFFFE4E3AAF88DC_TypeDefinitionIndex)->GetStaticField(0x43BC0);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8CFFFE4E3AAF88DC_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8CFFFE4E3AAF88DC_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigHack* Method_1_7DE4395D171BC600()
	{
		return ((::MoleMole::Config::ConfigHack*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CFFFE4E3AAF88DC_METHOD_1_7DE4395D171BC600_OFFSET))();
	}
};

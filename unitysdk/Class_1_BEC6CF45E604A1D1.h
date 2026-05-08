#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLinkZone; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_BEC6CF45E604A1D1_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xA938E60)
#define CLASS_1_BEC6CF45E604A1D1_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xA938D70)
#define CLASS_1_BEC6CF45E604A1D1_METHOD_1_FA4E4A4834C2D9B1_OFFSET UNITYSDK_OFFSET(0xA939070)

inline static constexpr unsigned int Class_1_BEC6CF45E604A1D1_TypeDefinitionIndex = 38564;

class Class_1_BEC6CF45E604A1D1 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigLinkZone** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigLinkZone**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEC6CF45E604A1D1_TypeDefinitionIndex)->GetStaticField(0x47EC0);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEC6CF45E604A1D1_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigLinkZone* Method_1_FA4E4A4834C2D9B1()
	{
		return ((::MoleMole::Config::ConfigLinkZone*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEC6CF45E604A1D1_METHOD_1_FA4E4A4834C2D9B1_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BEC6CF45E604A1D1_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}
};

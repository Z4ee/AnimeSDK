#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessoryEffect; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1AFC0A21A6062417_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x14E72DA0)
#define CLASS_1_1AFC0A21A6062417_METHOD_1_4822F5FAE60CF556_OFFSET UNITYSDK_OFFSET(0x14E730A0)
#define CLASS_1_1AFC0A21A6062417_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x14E72FB0)
#define CLASS_1_1AFC0A21A6062417__CTOR_OFFSET UNITYSDK_OFFSET(0x14E72D90)

inline static constexpr unsigned int Class_1_1AFC0A21A6062417_TypeDefinitionIndex = 56213;

class Class_1_1AFC0A21A6062417 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigPlayerAccessoryEffect** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigPlayerAccessoryEffect**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1AFC0A21A6062417_TypeDefinitionIndex)->GetStaticField(0x408D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFC0A21A6062417__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1AFC0A21A6062417_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1AFC0A21A6062417_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigPlayerAccessoryEffect* Method_1_4822F5FAE60CF556()
	{
		return ((::MoleMole::Config::ConfigPlayerAccessoryEffect*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1AFC0A21A6062417_METHOD_1_4822F5FAE60CF556_OFFSET))();
	}
};

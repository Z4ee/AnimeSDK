#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FeverConfig; }
namespace MoleMole::Config { class ConfigInspireZoneOperation; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8E00AA9EEE182AD5_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x138CC5E0)
#define CLASS_1_8E00AA9EEE182AD5_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x138CC4F0)
#define CLASS_1_8E00AA9EEE182AD5_METHOD_1_CA7C355210C5E1F4_OFFSET UNITYSDK_OFFSET(0x138CC7F0)
#define CLASS_1_8E00AA9EEE182AD5_METHOD_1_DDBBA8C3CF2D9B99_OFFSET UNITYSDK_OFFSET(0x138CC800)

inline static constexpr unsigned int Class_1_8E00AA9EEE182AD5_TypeDefinitionIndex = 80775;

class Class_1_8E00AA9EEE182AD5 : public ::System::Object
{
public:
	static ::MoleMole::FeverConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::FeverConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E00AA9EEE182AD5_TypeDefinitionIndex)->GetStaticField(0x313E0);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8E00AA9EEE182AD5_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::FeverConfig* Method_1_CA7C355210C5E1F4()
	{
		return ((::MoleMole::FeverConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E00AA9EEE182AD5_METHOD_1_CA7C355210C5E1F4_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8E00AA9EEE182AD5_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::ConfigInspireZoneOperation* Method_1_DDBBA8C3CF2D9B99(::MoleMole::Battle::InspireZoneOperationType a1)
	{
		return ((::MoleMole::Config::ConfigInspireZoneOperation*(*)(::MoleMole::Battle::InspireZoneOperationType))((::PBYTE)hIl2Cpp + CLASS_1_8E00AA9EEE182AD5_METHOD_1_DDBBA8C3CF2D9B99_OFFSET))(a1);
	}
};

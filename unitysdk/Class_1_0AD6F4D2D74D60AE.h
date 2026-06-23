#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigInspireZoneOperation; }
namespace MoleMole::Config { class ConfigTeamInspireZone; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_0AD6F4D2D74D60AE_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x19544ED0)
#define CLASS_1_0AD6F4D2D74D60AE_METHOD_1_2D944EAFBDDDE0CE_OFFSET UNITYSDK_OFFSET(0x19545290)
#define CLASS_1_0AD6F4D2D74D60AE_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x19545190)
#define CLASS_1_0AD6F4D2D74D60AE_METHOD_1_BB98F44BD3DEB2BA_OFFSET UNITYSDK_OFFSET(0x195450E0)
#define CLASS_1_0AD6F4D2D74D60AE_METHOD_1_CF673AEC60AE51AE_OFFSET UNITYSDK_OFFSET(0x195452E0)

inline static constexpr unsigned int Class_1_0AD6F4D2D74D60AE_TypeDefinitionIndex = 44228;

class Class_1_0AD6F4D2D74D60AE : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigTeamInspireZone** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::ConfigTeamInspireZone**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6F4D2D74D60AE_TypeDefinitionIndex)->GetStaticField(0x38160);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_BB98F44BD3DEB2BA(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_METHOD_1_BB98F44BD3DEB2BA_OFFSET))(a1);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::ConfigTeamInspireZone* Method_1_2D944EAFBDDDE0CE()
	{
		return ((::MoleMole::Config::ConfigTeamInspireZone*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_METHOD_1_2D944EAFBDDDE0CE_OFFSET))();
	}

	static ::MoleMole::Config::ConfigInspireZoneOperation* Method_1_CF673AEC60AE51AE(::MoleMole::Battle::InspireZoneOperationType a1)
	{
		return ((::MoleMole::Config::ConfigInspireZoneOperation*(*)(::MoleMole::Battle::InspireZoneOperationType))((::PBYTE)hIl2Cpp + CLASS_1_0AD6F4D2D74D60AE_METHOD_1_CF673AEC60AE51AE_OFFSET))(a1);
	}
};

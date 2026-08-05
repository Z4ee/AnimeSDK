#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;

#define MOLEMOLE_LINKZONESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DC9430)
#define MOLEMOLE_LINKZONESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC9470)
#define MOLEMOLE_LINKZONESUBSYSTEM___C__STARTLINKZONEAVATARULT_B__45_1_OFFSET UNITYSDK_OFFSET(0x19DC9480)

namespace MoleMole
{
	inline static constexpr unsigned int LinkZoneSubSystem___c_TypeDefinitionIndex = 84075;

	class LinkZoneSubSystem___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C** StaticGet___9__45_1()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(LinkZoneSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x4C3A0);
		}
		static ::MoleMole::LinkZoneSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::LinkZoneSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(LinkZoneSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x4C3A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _StartLinkZoneAvatarUlt_b__45_1(::Class_0_16E4307DCC419505_36* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___C__STARTLINKZONEAVATARULT_B__45_1_OFFSET))(this, msg);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;

#define MOLEMOLE_LINKZONESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170DAE30)
#define MOLEMOLE_LINKZONESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170DAE70)
#define MOLEMOLE_LINKZONESUBSYSTEM___C__STARTLINKZONEAVATARULT_B__45_1_OFFSET UNITYSDK_OFFSET(0x170DAE80)

namespace MoleMole
{
	inline static constexpr unsigned int LinkZoneSubSystem___c_TypeDefinitionIndex = 79820;

	class LinkZoneSubSystem___c : public ::System::Object
	{
	public:
		static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__45_1()
		{
			return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(LinkZoneSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x45BD0);
		}
		static ::MoleMole::LinkZoneSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::LinkZoneSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(LinkZoneSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x45BD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _StartLinkZoneAvatarUlt_b__45_1(::Class_0_16E4307DCC419505_11* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___C__STARTLINKZONEAVATARULT_B__45_1_OFFSET))(this, msg);
		}
	};
}

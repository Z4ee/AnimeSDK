#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D76391934630D6CD;

#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E848040)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E848080)
#define MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1E848090)

namespace MoleMole
{
	inline static constexpr unsigned int UICpRoleSelectChildWindowController___c_TypeDefinitionIndex = 90799;

	class UICpRoleSelectChildWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UICpRoleSelectChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UICpRoleSelectChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UICpRoleSelectChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4E500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__40_0(::Class_1_D76391934630D6CD* l, ::Class_1_D76391934630D6CD* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_D76391934630D6CD*, ::Class_1_D76391934630D6CD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPROLESELECTCHILDWINDOWCONTROLLER___C___CCTOR_B__40_0_OFFSET))(this, l, r);
		}
	};
}

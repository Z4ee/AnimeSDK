#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1848BFD0)
#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1848C010)
#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__ONCLICKBUYBTN_B__28_0_OFFSET UNITYSDK_OFFSET(0x1848C020)
#define MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__ONCLICKBUYBTN_B__28_4_OFFSET UNITYSDK_OFFSET(0x1848C080)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleHiveBoxPageController___c_TypeDefinitionIndex = 60454;

	class UISuibianTempleHiveBoxPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleHiveBoxPageController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleHiveBoxPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleHiveBoxPageController___c_TypeDefinitionIndex)->GetStaticField(0x47330);
		}
		static ::System::Action_1<::System::UInt32>** StaticGet___9__28_4()
		{
			return (::System::Action_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleHiveBoxPageController___c_TypeDefinitionIndex)->GetStaticField(0x47338);
		}
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleHiveBoxPageController___c_TypeDefinitionIndex)->GetStaticField(0x47340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBuyBtn_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__ONCLICKBUYBTN_B__28_0_OFFSET))(this);
		}

		::System::Void _OnClickBuyBtn_b__28_4(::System::UInt32 slotId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEHIVEBOXPAGECONTROLLER___C__ONCLICKBUYBTN_B__28_4_OFFSET))(this, slotId);
		}
	};
}

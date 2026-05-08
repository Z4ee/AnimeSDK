#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D611B0)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D611F0)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__SETCONTACTUSERLIST_B__6_0_OFFSET UNITYSDK_OFFSET(0x14D61200)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessagePopWindowController___c_TypeDefinitionIndex = 65134;

	class UIPrivateMessagePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1*>**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessagePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38090);
		}
		static ::MoleMole::UIPrivateMessagePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIPrivateMessagePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessagePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetContactUserList_b__6_0(::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1* l, ::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1*, ::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__SETCONTACTUSERLIST_B__6_0_OFFSET))(this, l, r);
		}
	};
}

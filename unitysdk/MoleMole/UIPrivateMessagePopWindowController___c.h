#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x152A6DC0)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x152A6E00)
#define MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__SETCONTACTUSERLIST_B__6_0_OFFSET UNITYSDK_OFFSET(0x152A6E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessagePopWindowController___c_TypeDefinitionIndex = 79493;

	class UIPrivateMessagePopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*>**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessagePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A5A0);
		}
		static ::MoleMole::UIPrivateMessagePopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIPrivateMessagePopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIPrivateMessagePopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A5A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetContactUserList_b__6_0(::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2* l, ::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*, ::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEPOPWINDOWCONTROLLER___C__SETCONTACTUSERLIST_B__6_0_OFFSET))(this, l, r);
		}
	};
}

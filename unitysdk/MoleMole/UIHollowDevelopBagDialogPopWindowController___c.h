#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18491620)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18491660)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__GETALLCARDS_B__10_0_OFFSET UNITYSDK_OFFSET(0x18491670)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDevelopBagDialogPopWindowController___c_TypeDefinitionIndex = 82824;

	class UIHollowDevelopBagDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_1_0D6706375CDAAE8C*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowDevelopBagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37BA0);
		}
		static ::MoleMole::UIHollowDevelopBagDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowDevelopBagDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowDevelopBagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x37BA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllCards_b__10_0(::Class_1_0D6706375CDAAE8C* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__GETALLCARDS_B__10_0_OFFSET))(this, data);
		}
	};
}

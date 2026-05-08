#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162EE750)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162EE790)
#define MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0x162EE7A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowRewardBagDialogPopWindowController___c_TypeDefinitionIndex = 82650;

	class UIHollowRewardBagDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowRewardBagDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowRewardBagDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRewardBagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2EE90);
		}
		static ::System::Comparison_1<::Class_1_0D6706375CDAAE8C*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowRewardBagDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2EE98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__14_0(::Class_1_0D6706375CDAAE8C* cardA, ::Class_1_0D6706375CDAAE8C* cardB)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWREWARDBAGDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__14_0_OFFSET))(this, cardA, cardB);
		}
	};
}

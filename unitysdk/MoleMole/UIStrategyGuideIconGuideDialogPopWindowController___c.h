#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B93490)
#define MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B934D0)
#define MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__REFRESHDETAIL_B__13_0_OFFSET UNITYSDK_OFFSET(0x17B934E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideIconGuideDialogPopWindowController___c_TypeDefinitionIndex = 63521;

	class UIStrategyGuideIconGuideDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIStrategyGuideIconGuideDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIStrategyGuideIconGuideDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideIconGuideDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x31080);
		}
		static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideIconGuideDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x31088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshDetail_b__13_0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEICONGUIDEDIALOGPOPWINDOWCONTROLLER___C__REFRESHDETAIL_B__13_0_OFFSET))(this, vp);
		}
	};
}

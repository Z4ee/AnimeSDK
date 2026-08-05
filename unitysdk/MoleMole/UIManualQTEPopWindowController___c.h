#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CA15A0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA15E0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__ONBTNCLICKED_B__8_0_OFFSET UNITYSDK_OFFSET(0x19CA15F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIManualQTEPopWindowController___c_TypeDefinitionIndex = 56731;

	class UIManualQTEPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(UIManualQTEPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36E30);
		}
		static ::MoleMole::UIManualQTEPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIManualQTEPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIManualQTEPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x36E38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBtnClicked_b__8_0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__ONBTNCLICKED_B__8_0_OFFSET))(this, vp);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9529ED64113E4E9;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE87070)
#define MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE870B0)
#define MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x1AE870C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowVideoPlayDialogPopWindowController___c_TypeDefinitionIndex = 91571;

	class UIHollowVideoPlayDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_E9529ED64113E4E9*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::Class_1_E9529ED64113E4E9*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowVideoPlayDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D100);
		}
		static ::MoleMole::UIHollowVideoPlayDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowVideoPlayDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowVideoPlayDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3D108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__4_0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWVIDEOPLAYDIALOGPOPWINDOWCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET))(this, vp);
		}
	};
}

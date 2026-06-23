#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EEF090)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EEF0D0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__ONPOPSHOWED_B__10_0_OFFSET UNITYSDK_OFFSET(0x15EEF0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_HadalResult_PopWindowController___c_TypeDefinitionIndex = 43784;

	class UILevel_HadalResult_PopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILevel_HadalResult_PopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UILevel_HadalResult_PopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UILevel_HadalResult_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CB60);
		}
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILevel_HadalResult_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CB68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnPopShowed_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___C__ONPOPSHOWED_B__10_0_OFFSET))(this);
		}
	};
}

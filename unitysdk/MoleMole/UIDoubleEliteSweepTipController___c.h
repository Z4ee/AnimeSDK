#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197169A0)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197169E0)
#define MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___C__ONUIINIT_B__5_3_OFFSET UNITYSDK_OFFSET(0x197169F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleEliteSweepTipController___c_TypeDefinitionIndex = 51474;

	class UIDoubleEliteSweepTipController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIDoubleEliteSweepTipController___c** StaticGet___9()
		{
			return (::MoleMole::UIDoubleEliteSweepTipController___c**)Il2CppClass::FromTypeDefinitionIndex(UIDoubleEliteSweepTipController___c_TypeDefinitionIndex)->GetStaticField(0x36BB0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__5_3()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIDoubleEliteSweepTipController___c_TypeDefinitionIndex)->GetStaticField(0x36BB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITESWEEPTIPCONTROLLER___C__ONUIINIT_B__5_3_OFFSET))(this);
		}
	};
}

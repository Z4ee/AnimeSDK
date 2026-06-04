#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerGroupEvent.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND_METHOD_4_8F39ADF9714DB66B_OFFSET UNITYSDK_OFFSET(0x19E16000)
#define RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND_METHOD_4_F81C3C76A4C7A242_OFFSET UNITYSDK_OFFSET(0x19E15F00)
#define RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND__CTOR_OFFSET UNITYSDK_OFFSET(0x19E15ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerGroupEventOnDialogEnd_TypeDefinitionIndex = 19940;

	class TriggerGroupEventOnDialogEnd : public ::RPG::GameCore::TriggerGroupEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8F39ADF9714DB66B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerGroupEventOnDialogEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerGroupEventOnDialogEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND_METHOD_4_8F39ADF9714DB66B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F81C3C76A4C7A242(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerGroupEventOnDialogEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerGroupEventOnDialogEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGROUPEVENTONDIALOGEND_METHOD_4_F81C3C76A4C7A242_OFFSET))(a1, a2);
		}
	};
}

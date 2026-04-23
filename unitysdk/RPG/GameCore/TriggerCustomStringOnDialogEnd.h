#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerCustomString.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND_METHOD_4_7603CB11D138AE72_OFFSET UNITYSDK_OFFSET(0x190BFDE0)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND_METHOD_4_CDCD88D2C87A2BDB_OFFSET UNITYSDK_OFFSET(0x190BFA70)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND__CTOR_OFFSET UNITYSDK_OFFSET(0x190BFA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCustomStringOnDialogEnd_TypeDefinitionIndex = 19728;

	class TriggerCustomStringOnDialogEnd : public ::RPG::GameCore::TriggerCustomString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7603CB11D138AE72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCustomStringOnDialogEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCustomStringOnDialogEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND_METHOD_4_7603CB11D138AE72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CDCD88D2C87A2BDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerCustomStringOnDialogEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerCustomStringOnDialogEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGONDIALOGEND_METHOD_4_CDCD88D2C87A2BDB_OFFSET))(a1, a2);
		}
	};
}

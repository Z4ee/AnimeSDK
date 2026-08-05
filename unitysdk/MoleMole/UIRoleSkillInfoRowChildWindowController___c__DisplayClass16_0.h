#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13005580)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS16_0__SHOWPASSIVEDETAILVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x13005590)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 62272;

	class UIRoleSkillInfoRowChildWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::String* detailDesc; // 0x10
		::System::Int32 level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::String* _ShowPassiveDetailView_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS16_0__SHOWPASSIVEDETAILVIEW_B__0_OFFSET))(this);
		}
	};
}

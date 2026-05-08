#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEB9C8F0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__SHOWPASSIVEDETAILVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xEB9C900)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 56502;

	class UIRoleSkillInfoRowChildWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* detailDesc; // 0x10
		::System::Int32 level; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::String* _ShowPassiveDetailView_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS15_0__SHOWPASSIVEDETAILVIEW_B__0_OFFSET))(this);
		}
	};
}

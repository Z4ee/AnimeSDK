#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3BC10)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__SHOWSKILLDETAILVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x15F3BC20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 43010;

	class UIRoleSkillInfoRowChildWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::String* detailDescKey; // 0x10
		::Share::EAvatarSkillType type; // 0x18
		::System::Int32 level; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::String* _ShowSkillDetailView_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__SHOWSKILLDETAILVIEW_B__0_OFFSET))(this);
		}
	};
}

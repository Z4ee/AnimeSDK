#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_296;
namespace System { class String; }

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEB9CAE0)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__SHOWSKILLDETAILVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xEB9CAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 56501;

	class UIRoleSkillInfoRowChildWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_296* template_; // 0x10
		::System::Int32 level; // 0x18
		::Share::EAvatarSkillType type; // 0x1C

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

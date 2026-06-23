#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_707;
namespace System { class String; }

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3BB10)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS16_0__SHOWSKILLPASSIVEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x15F3BB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 43009;

	class UIRoleSkillInfoRowChildWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_707* template_; // 0x10
		::System::Boolean isSimple; // 0x18
		::System::Int32 index; // 0x1C
		::System::Int32 level; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::String* _ShowSkillPassiveView_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS16_0__SHOWSKILLPASSIVEVIEW_B__0_OFFSET))(this);
		}
	};
}

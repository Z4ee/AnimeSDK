#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_443;
namespace System { class String; }

#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13005610)
#define MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__SHOWSKILLPASSIVEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x13005620)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillInfoRowChildWindowController___c__DisplayClass17_0_TypeDefinitionIndex = 62273;

	class UIRoleSkillInfoRowChildWindowController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_443* template_; // 0x10
		::System::Int32 index; // 0x18
		::System::Boolean isSimple; // 0x1C
		::System::Int32 level; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::String* _ShowSkillPassiveView_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLINFOROWCHILDWINDOWCONTROLLER___C__DISPLAYCLASS17_0__SHOWSKILLPASSIVEVIEW_B__0_OFFSET))(this);
		}
	};
}

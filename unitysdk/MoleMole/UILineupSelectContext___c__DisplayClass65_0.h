#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_0A55B5A82A61DAFA_2;
namespace MoleMole { class UIActivePropsWindowContext; }
namespace MoleMole { class UILineupSelectContext; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15004D10)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__SETHOLLOWQUESTCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x15004D20)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__SETHOLLOWQUESTCONTEXT_G__ONPOSTGETBUDDYSELECTCONTEXT_1_OFFSET UNITYSDK_OFFSET(0x15005070)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c__DisplayClass65_0_TypeDefinitionIndex = 57533;

	class UILineupSelectContext___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::Class_2_0A55B5A82A61DAFA_2* questTemp; // 0x10
		::MoleMole::UILineupSelectContext* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetHollowQuestContext_b__0(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__SETHOLLOWQUESTCONTEXT_B__0_OFFSET))(this, data);
		}

		::MoleMole::UIActivePropsWindowContext* _SetHollowQuestContext_g__OnPostGetBuddySelectContext_1(::MoleMole::UIActivePropsWindowContext* _context)
		{
			return ((::MoleMole::UIActivePropsWindowContext*(*)(::PVOID, ::MoleMole::UIActivePropsWindowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__DISPLAYCLASS65_0__SETHOLLOWQUESTCONTEXT_G__ONPOSTGETBUDDYSELECTCONTEXT_1_OFFSET))(this, _context);
		}
	};
}

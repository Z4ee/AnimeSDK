#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_2_360B5C80C04E3AB6;
class Class_3_5F8D071C8DE2658F;
namespace System { class Action; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A640540)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x1A640550)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__1_OFFSET UNITYSDK_OFFSET(0x1A640590)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController___c__DisplayClass51_0_TypeDefinitionIndex = 72969;

	class UIBaseChatPlayController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::Class_2_360B5C80C04E3AB6* runningInteraction; // 0x10
		::System::Action* afterSync; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryNoOptionSyncInteractionToServer_b__0(::Class_3_5F8D071C8DE2658F* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5F8D071C8DE2658F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__0_OFFSET))(this, msg);
		}

		::System::Void _TryNoOptionSyncInteractionToServer_b__1(::Class_0_16E4307DCC419505_36* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__1_OFFSET))(this, msg);
		}
	};
}

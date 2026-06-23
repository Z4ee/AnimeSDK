#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_2_2CBC78D5C92D43A4;
class Class_3_32CD58E95ADFF8F5_27;
namespace System { class Action; }

#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A678D0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x18A678E0)
#define MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__1_OFFSET UNITYSDK_OFFSET(0x18A67920)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlayController___c__DisplayClass51_0_TypeDefinitionIndex = 42199;

	class UIBaseChatPlayController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::Class_2_2CBC78D5C92D43A4* runningInteraction; // 0x10
		::System::Action* afterSync; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryNoOptionSyncInteractionToServer_b__0(::Class_3_32CD58E95ADFF8F5_27* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_27*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__0_OFFSET))(this, msg);
		}

		::System::Void _TryNoOptionSyncInteractionToServer_b__1(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLAYCONTROLLER___C__DISPLAYCLASS51_0__TRYNOOPTIONSYNCINTERACTIONTOSERVER_B__1_OFFSET))(this, msg);
		}
	};
}

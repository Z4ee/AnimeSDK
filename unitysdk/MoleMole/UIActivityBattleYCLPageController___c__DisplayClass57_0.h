#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7E6E8DD3EAC12A67_18;
class Class_3_AA32EAE205D9293B_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16452160)
#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__ONOPENSTYLISHRECORD_B__0_OFFSET UNITYSDK_OFFSET(0x16452170)
#define MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__ONOPENSTYLISHRECORD_B__1_OFFSET UNITYSDK_OFFSET(0x16452A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleYCLPageController___c__DisplayClass57_0_TypeDefinitionIndex = 68276;

	class UIActivityBattleYCLPageController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::Func_2<::Class_3_AA32EAE205D9293B_2*, ::System::Boolean>* __9__1; // 0x10
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOpenStylishRecord_b__0(::Class_3_7E6E8DD3EAC12A67_18* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_7E6E8DD3EAC12A67_18*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__ONOPENSTYLISHRECORD_B__0_OFFSET))(this, rsp);
		}

		::System::Boolean _OnOpenStylishRecord_b__1(::Class_3_AA32EAE205D9293B_2* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_AA32EAE205D9293B_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLEYCLPAGECONTROLLER___C__DISPLAYCLASS57_0__ONOPENSTYLISHRECORD_B__1_OFFSET))(this, match);
		}
	};
}

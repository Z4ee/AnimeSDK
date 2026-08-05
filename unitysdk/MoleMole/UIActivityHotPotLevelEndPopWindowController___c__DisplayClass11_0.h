#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_735;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class __f__AnonymousType1_2;

#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13880920)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__0_OFFSET UNITYSDK_OFFSET(0x13880930)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__2_OFFSET UNITYSDK_OFFSET(0x13880970)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__4_OFFSET UNITYSDK_OFFSET(0x13880A90)
#define MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__5_OFFSET UNITYSDK_OFFSET(0x13880AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotLevelEndPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 52958;

	class UIActivityHotPotLevelEndPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Int32, ::System::Boolean>* __9__4; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* curCardIDs; // 0x18
		::System::Func_2<::System::Int32, ::System::Boolean>* __9__5; // 0x20
		::System::Int32 curChapter; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFailTips_b__0(::Class_2_208CC9941471731A_735* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_735*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__0_OFFSET))(this, x);
		}

		::__f__AnonymousType1_2<::Class_2_208CC9941471731A_735*, ::System::Int32>* _RefreshFailTips_b__2(::Class_2_208CC9941471731A_735* build)
		{
			return ((::__f__AnonymousType1_2<::Class_2_208CC9941471731A_735*, ::System::Int32>*(*)(::PVOID, ::Class_2_208CC9941471731A_735*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__2_OFFSET))(this, build);
		}

		::System::Boolean _RefreshFailTips_b__4(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__4_OFFSET))(this, id);
		}

		::System::Boolean _RefreshFailTips_b__5(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTLEVELENDPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__REFRESHFAILTIPS_B__5_OFFSET))(this, id);
		}
	};
}

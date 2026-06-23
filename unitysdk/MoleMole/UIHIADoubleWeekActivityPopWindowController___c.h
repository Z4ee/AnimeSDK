#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_3_1699D6295DC3F818_1;
class Class_3_9F8B7B204F0D8E1D_14;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188107B0)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188107F0)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x18810800)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__23_1_OFFSET UNITYSDK_OFFSET(0x18810830)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex = 50897;

	class UIHIADoubleWeekActivityPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_1699D6295DC3F818_1*, ::Class_1_0D6706375CDAAE8C*>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::Class_3_1699D6295DC3F818_1*, ::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34630);
		}
		static ::MoleMole::UIHIADoubleWeekActivityPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHIADoubleWeekActivityPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34638);
		}
		static ::System::Func_2<::Class_3_9F8B7B204F0D8E1D_14*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::Class_3_9F8B7B204F0D8E1D_14*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__11_0(::Class_3_9F8B7B204F0D8E1D_14* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_9F8B7B204F0D8E1D_14*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__11_0_OFFSET))(this, reward);
		}

		::Class_1_0D6706375CDAAE8C* _TryTakeAllBingoRewards_b__23_1(::Class_3_1699D6295DC3F818_1* reward)
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::Class_3_1699D6295DC3F818_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPOPWINDOWCONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__23_1_OFFSET))(this, reward);
		}
	};
}

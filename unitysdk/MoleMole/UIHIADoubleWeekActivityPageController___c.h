#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_3_1699D6295DC3F818_1;
class Class_3_9F8B7B204F0D8E1D_7;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FCDFF0)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCE030)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__REFRESHVIEW_B__12_0_OFFSET UNITYSDK_OFFSET(0x19FCE040)
#define MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__24_1_OFFSET UNITYSDK_OFFSET(0x19FCE070)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex = 90101;

	class UIHIADoubleWeekActivityPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHIADoubleWeekActivityPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIHIADoubleWeekActivityPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A3F0);
		}
		static ::System::Func_2<::Class_3_9F8B7B204F0D8E1D_7*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::Class_3_9F8B7B204F0D8E1D_7*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A3F8);
		}
		static ::System::Func_2<::Class_3_1699D6295DC3F818_1*, ::Class_1_0D6706375CDAAE8C*>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::Class_3_1699D6295DC3F818_1*, ::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(UIHIADoubleWeekActivityPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshView_b__12_0(::Class_3_9F8B7B204F0D8E1D_7* reward)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_9F8B7B204F0D8E1D_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__REFRESHVIEW_B__12_0_OFFSET))(this, reward);
		}

		::Class_1_0D6706375CDAAE8C* _TryTakeAllBingoRewards_b__24_1(::Class_3_1699D6295DC3F818_1* reward)
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::Class_3_1699D6295DC3F818_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIADOUBLEWEEKACTIVITYPAGECONTROLLER___C__TRYTAKEALLBINGOREWARDS_B__24_1_OFFSET))(this, reward);
		}
	};
}

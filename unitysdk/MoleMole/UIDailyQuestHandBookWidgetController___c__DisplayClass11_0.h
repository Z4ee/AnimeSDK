#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF80A1ACD786CECB;
class Class_2_208CC9941471731A_452;

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185524A0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x185524B0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x18552560)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 43698;

	class UIDailyQuestHandBookWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_452* poolConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__0(::Class_1_FF80A1ACD786CECB* l, ::Class_1_FF80A1ACD786CECB* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_FF80A1ACD786CECB*, ::Class_1_FF80A1ACD786CECB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__0_OFFSET))(this, l, r);
		}

		::System::Int32 _RefreshView_b__1(::Class_1_FF80A1ACD786CECB* l, ::Class_1_FF80A1ACD786CECB* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_FF80A1ACD786CECB*, ::Class_1_FF80A1ACD786CECB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___C__DISPLAYCLASS11_0__REFRESHVIEW_B__1_OFFSET))(this, l, r);
		}
	};
}

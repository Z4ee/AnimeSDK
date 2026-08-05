#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5777BABDFCF175CF;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16779DC0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x16779D50)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16779ED0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16779F20)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x16779F30)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16779F40)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingBuffRowWidgetController_Data_TypeDefinitionIndex = 44102;

	class UISummerTideTreasureSellingBuffRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::UISummerTideTreasureSellingBuffRowWidgetController_Data*>* OnClickBuff; // 0x10
		::Class_2_5777BABDFCF175CF* EffectPlayerBuffList; // 0x18
		::System::Int32 Num; // 0x20
		::System::Int32 BuffConfigId; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UISummerTideTreasureSellingBuffRowWidgetController_Data* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UISummerTideTreasureSellingBuffRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGBUFFROWWIDGETCONTROLLER_DATA___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}

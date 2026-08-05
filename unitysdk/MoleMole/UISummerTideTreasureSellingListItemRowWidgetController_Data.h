#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B4AA4B9F04BE3CFD.h"
#include "unitysdk/System/Object.h"

class Class_1_C4AD88BFF83D12C6;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x11E1ADD0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E1AC50)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11E1AEC0)
#define MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x11E1AED0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureSellingListItemRowWidgetController_Data_TypeDefinitionIndex = 44623;

	class UISummerTideTreasureSellingListItemRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Func_2<::Class_1_C4AD88BFF83D12C6*, ::System::Boolean>* IsSelect; // 0x10
		::Class_1_C4AD88BFF83D12C6* Item; // 0x18
		::Struct_2_B4AA4B9F04BE3CFD WorldHandle; // 0x20
		::System::Single ShowNewAnimTime; // 0x30
		::System::Int32 PlaySequenceIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UISummerTideTreasureSellingListItemRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESELLINGLISTITEMROWWIDGETCONTROLLER_DATA___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}

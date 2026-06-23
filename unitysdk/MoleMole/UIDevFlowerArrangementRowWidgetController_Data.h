#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AF4036FBC298303A;

#define MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA_GET_FLOWERFEATUREDATA_OFFSET UNITYSDK_OFFSET(0x14C1E6F0)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA_SET_FLOWERFEATUREDATA_OFFSET UNITYSDK_OFFSET(0x14C1E700)
#define MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14C1E710)

namespace MoleMole
{
	inline static constexpr unsigned int UIDevFlowerArrangementRowWidgetController_Data_TypeDefinitionIndex = 64100;

	class UIDevFlowerArrangementRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_AF4036FBC298303A* _FlowerFeatureData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::Class_2_AF4036FBC298303A* get_FlowerFeatureData()
		{
			return ((::Class_2_AF4036FBC298303A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA_GET_FLOWERFEATUREDATA_OFFSET))(this);
		}

		::System::Void set_FlowerFeatureData(::Class_2_AF4036FBC298303A* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_AF4036FBC298303A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEVFLOWERARRANGEMENTROWWIDGETCONTROLLER_DATA_SET_FLOWERFEATUREDATA_OFFSET))(this, value);
		}
	};
}

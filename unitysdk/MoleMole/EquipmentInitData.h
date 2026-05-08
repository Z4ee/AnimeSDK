#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B_14;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EQUIPMENTINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10DFEEC0)

namespace MoleMole
{
	inline static constexpr unsigned int EquipmentInitData_TypeDefinitionIndex = 48350;

	class EquipmentInitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_14*>* subPropertyGroup; // 0x10
		::System::Int32 basePropertyID; // 0x18
		::System::Int32 equipmentID; // 0x1C
		::System::Int32 equipmentLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EQUIPMENTINITDATA__CTOR_OFFSET))(this);
		}
	};
}

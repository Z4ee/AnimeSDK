#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MOVEMENTSTOPPEDROOTMOTIONBAKEDDATA_CLASS_1_3B76E13757985C28_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9D923F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2_TypeDefinitionIndex = 56213;

	class MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_2 : public ::System::Object
	{
	public:
		::System::Single Field_1_2; // 0x10
		::System::Int32 Field_1_1; // 0x14
		::System::Int32 Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVEMENTSTOPPEDROOTMOTIONBAKEDDATA_CLASS_1_3B76E13757985C28_2__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MOVEMENTSTOPPEDROOTMOTIONBAKEDDATA_CLASS_1_3B76E13757985C28_3__CTOR_OFFSET UNITYSDK_OFFSET(0x196199D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_3_TypeDefinitionIndex = 68782;

	class MovementStoppedRootMotionBakedData_Class_1_3B76E13757985C28_3 : public ::System::Object
	{
	public:
		::System::Int32 FNNMNGCKFGI; // 0x10
		::System::Single AEKAAOCLNHE; // 0x14
		::System::Int32 MAGGNFANAGP; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVEMENTSTOPPEDROOTMOTIONBAKEDDATA_CLASS_1_3B76E13757985C28_3__CTOR_OFFSET))(this);
		}
	};
}

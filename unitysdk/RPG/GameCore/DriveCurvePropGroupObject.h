#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT_METHOD_3_18D05503664B3D5D_OFFSET UNITYSDK_OFFSET(0x196CC600)
#define RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT_METHOD_3_A233BD525D381491_OFFSET UNITYSDK_OFFSET(0x196CC710)
#define RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x196CC6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DriveCurvePropGroupObject_TypeDefinitionIndex = 21033;

	class DriveCurvePropGroupObject : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18D05503664B3D5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DriveCurvePropGroupObject*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DriveCurvePropGroupObject*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT_METHOD_3_18D05503664B3D5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A233BD525D381491(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DriveCurvePropGroupObject* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DriveCurvePropGroupObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT_METHOD_3_A233BD525D381491_OFFSET))(a1, a2);
		}
	};
}

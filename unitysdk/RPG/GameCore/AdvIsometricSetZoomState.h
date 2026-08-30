#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE_METHOD_3_0F03CFA9FAC9C2BC_OFFSET UNITYSDK_OFFSET(0x1CDCCAA0)
#define RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE_METHOD_3_DD7B4282ACBBB037_OFFSET UNITYSDK_OFFSET(0x1CDCCA60)
#define RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCCA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricSetZoomState_TypeDefinitionIndex = 21965;

	class AdvIsometricSetZoomState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ZoomFollow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DD7B4282ACBBB037(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricSetZoomState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricSetZoomState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE_METHOD_3_DD7B4282ACBBB037_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0F03CFA9FAC9C2BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricSetZoomState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricSetZoomState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETZOOMSTATE_METHOD_3_0F03CFA9FAC9C2BC_OFFSET))(a1, a2);
		}
	};
}

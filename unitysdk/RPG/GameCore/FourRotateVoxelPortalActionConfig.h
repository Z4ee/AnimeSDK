#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_METHOD_4_3094140431D77AC7_OFFSET UNITYSDK_OFFSET(0x1D6F1130)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_METHOD_4_CFF05E6DCB35B68B_OFFSET UNITYSDK_OFFSET(0x1D6F1030)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPortalActionConfig_TypeDefinitionIndex = 16765;

	class FourRotateVoxelPortalActionConfig : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Int32 TargetPortalID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CFF05E6DCB35B68B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPortalActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPortalActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_METHOD_4_CFF05E6DCB35B68B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3094140431D77AC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPortalActionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPortalActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_METHOD_4_3094140431D77AC7_OFFSET))(a1, a2);
		}
	};
}

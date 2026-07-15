#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_METHOD_3_59BAF6C557559453_OFFSET UNITYSDK_OFFSET(0x1B97D3C0)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_METHOD_3_F14F8D32A3C86FBE_OFFSET UNITYSDK_OFFSET(0x1B97D490)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97D480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPortalActionConfig_TypeDefinitionIndex = 16108;

	class FourRotateVoxelPortalActionConfig : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Int32 TargetPortalID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_59BAF6C557559453(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPortalActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPortalActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_METHOD_3_59BAF6C557559453_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F14F8D32A3C86FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPortalActionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPortalActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALACTIONCONFIG_METHOD_3_F14F8D32A3C86FBE_OFFSET))(a1, a2);
		}
	};
}

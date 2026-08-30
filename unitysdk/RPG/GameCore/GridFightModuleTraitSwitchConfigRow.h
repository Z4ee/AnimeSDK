#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODULETRAITSWITCHCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE6FFB0)
#define RPG_GAMECORE_GRIDFIGHTMODULETRAITSWITCHCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE70120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModuleTraitSwitchConfigRow_TypeDefinitionIndex = 13376;

	class GridFightModuleTraitSwitchConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 OverrideTraitID; // 0x10
		::System::UInt32 ModuleID; // 0x14
		::System::UInt32 TraitID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULETRAITSWITCHCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModuleTraitSwitchConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModuleTraitSwitchConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULETRAITSWITCHCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

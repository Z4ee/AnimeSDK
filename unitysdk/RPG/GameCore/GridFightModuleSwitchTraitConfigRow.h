#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODULESWITCHTRAITCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D06BD90)
#define RPG_GAMECORE_GRIDFIGHTMODULESWITCHTRAITCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06BF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModuleSwitchTraitConfigRow_TypeDefinitionIndex = 12983;

	class GridFightModuleSwitchTraitConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 OverrideTraitID; // 0x10
		::System::UInt32 ModuleID; // 0x14
		::System::UInt32 TraitID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULESWITCHTRAITCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULESWITCHTRAITCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

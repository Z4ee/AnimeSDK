#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODULESUBTRAITCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D06BC10)
#define RPG_GAMECORE_GRIDFIGHTMODULESUBTRAITCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06BD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModuleSubTraitConfigRow_TypeDefinitionIndex = 12987;

	class GridFightModuleSubTraitConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ModuleID; // 0x10
		::System::UInt32 SubTraitID; // 0x14
		::System::UInt32 TraitID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULESUBTRAITCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModuleSubTraitConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModuleSubTraitConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULESUBTRAITCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

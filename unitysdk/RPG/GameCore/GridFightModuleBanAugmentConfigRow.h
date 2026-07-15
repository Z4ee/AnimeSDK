#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODULEBANAUGMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D06B880)
#define RPG_GAMECORE_GRIDFIGHTMODULEBANAUGMENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06B9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModuleBanAugmentConfigRow_TypeDefinitionIndex = 12979;

	class GridFightModuleBanAugmentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ModuleId; // 0x10
		::System::UInt32 BanAugmentId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULEBANAUGMENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModuleBanAugmentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModuleBanAugmentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULEBANAUGMENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

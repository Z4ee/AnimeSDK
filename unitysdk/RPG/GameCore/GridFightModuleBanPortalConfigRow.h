#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODULEBANPORTALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D06B9B0)
#define RPG_GAMECORE_GRIDFIGHTMODULEBANPORTALCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06BAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModuleBanPortalConfigRow_TypeDefinitionIndex = 12981;

	class GridFightModuleBanPortalConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ModuleId; // 0x10
		::System::UInt32 BanPortalId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULEBANPORTALCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModuleBanPortalConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModuleBanPortalConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULEBANPORTALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

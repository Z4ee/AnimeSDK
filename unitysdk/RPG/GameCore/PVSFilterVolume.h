#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeConfigV2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PVSFILTERVOLUME_METHOD_3_250BB37977A3892D_OFFSET UNITYSDK_OFFSET(0x18BCF710)
#define RPG_GAMECORE_PVSFILTERVOLUME_METHOD_3_3A746B57A5FA63E0_OFFSET UNITYSDK_OFFSET(0x18BCF740)
#define RPG_GAMECORE_PVSFILTERVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCF730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVSFilterVolume_TypeDefinitionIndex = 18166;

	class PVSFilterVolume : public ::RPG::GameCore::StageVolumeConfigV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVSFILTERVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_250BB37977A3892D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PVSFilterVolume*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PVSFilterVolume*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVSFILTERVOLUME_METHOD_3_250BB37977A3892D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A746B57A5FA63E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PVSFilterVolume* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PVSFilterVolume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVSFILTERVOLUME_METHOD_3_3A746B57A5FA63E0_OFFSET))(a1, a2);
		}
	};
}

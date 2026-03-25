#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FOURROTATEVOXELPORTALTARGET_METHOD_2_BC8642D9925B0F08_OFFSET UNITYSDK_OFFSET(0x1721DAE0)
#define RPG_GAMECORE_FOURROTATEVOXELPORTALTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1721DB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPortalTarget_TypeDefinitionIndex = 15353;

	class FourRotateVoxelPortalTarget : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 TargetContainerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BC8642D9925B0F08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelPortalTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelPortalTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPORTALTARGET_METHOD_2_BC8642D9925B0F08_OFFSET))(a1, a2);
		}
	};
}

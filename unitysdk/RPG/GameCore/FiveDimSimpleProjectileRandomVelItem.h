#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILERANDOMVELITEM_METHOD_2_9B06471BFEA8F271_OFFSET UNITYSDK_OFFSET(0x1D87B280)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILERANDOMVELITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87B390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectileRandomVelItem_TypeDefinitionIndex = 18373;

	class FiveDimSimpleProjectileRandomVelItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 RandVelLowerBound; // 0x10
		::RPG::MVector3 RandVelUpperBound; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILERANDOMVELITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9B06471BFEA8F271(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSimpleProjectileRandomVelItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSimpleProjectileRandomVelItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILERANDOMVELITEM_METHOD_2_9B06471BFEA8F271_OFFSET))(a1, a2);
		}
	};
}

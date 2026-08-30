#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITCHILDEFFECTCONFIG_METHOD_2_5141F28796E81DBC_OFFSET UNITYSDK_OFFSET(0x1D585000)
#define RPG_GAMECORE_SUMMONUNITCHILDEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D585280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitChildEffectConfig_TypeDefinitionIndex = 20820;

	class SummonUnitChildEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::Boolean FollowTargetAlways; // 0x18
		::System::String* AttachPoint; // 0x20
		::RPG::MVector3 PositionOffset; // 0x28
		::RPG::MVector3 RotationOffset; // 0x34
		::RPG::MVector3 Scale; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5141F28796E81DBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitChildEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitChildEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITCHILDEFFECTCONFIG_METHOD_2_5141F28796E81DBC_OFFSET))(a1, a2);
		}
	};
}

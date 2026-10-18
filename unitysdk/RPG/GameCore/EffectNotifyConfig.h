#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EFFECTNOTIFYCONFIG_METHOD_2_D6BF842B21489B78_OFFSET UNITYSDK_OFFSET(0x1D630F70)
#define RPG_GAMECORE_EFFECTNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D631200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectNotifyConfig_TypeDefinitionIndex = 16962;

	class EffectNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::RPG::MVector3 PositionOffset; // 0x18
		::RPG::MVector3 RotationOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D6BF842B21489B78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTNOTIFYCONFIG_METHOD_2_D6BF842B21489B78_OFFSET))(a1, a2);
		}
	};
}

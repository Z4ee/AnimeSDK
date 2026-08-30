#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/RPG/GameCore/ForceKillShowType.h"
#include "unitysdk/RPG/GameCore/ForceKillValueType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_MODIFIERFORCEKILLCONFIG_METHOD_2_FCDDE3E6BACF8384_OFFSET UNITYSDK_OFFSET(0x1D1B2A50)
#define RPG_GAMECORE_MODIFIERFORCEKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B2CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierForceKillConfig_TypeDefinitionIndex = 18033;

	class ModifierForceKillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ForceKillValueType Type; // 0x10
		::RPG::GameCore::ForceKillShowType ShowType; // 0x14
		::RPG::GameCore::ForceKillMarkType MarkType; // 0x18
		::RPG::GameCore::DynamicFloat* ForceKillRatio; // 0x20
		::RPG::GameCore::DynamicFloat* ForceKillValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERFORCEKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FCDDE3E6BACF8384(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifierForceKillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifierForceKillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERFORCEKILLCONFIG_METHOD_2_FCDDE3E6BACF8384_OFFSET))(a1, a2);
		}
	};
}

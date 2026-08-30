#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EFFECTDURATIONCONFIG_METHOD_2_B6C8BA000EBBDF8D_OFFSET UNITYSDK_OFFSET(0x1D053460)
#define RPG_GAMECORE_EFFECTDURATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D053590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectDurationConfig_TypeDefinitionIndex = 16174;

	class EffectDurationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTDURATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B6C8BA000EBBDF8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectDurationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectDurationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTDURATIONCONFIG_METHOD_2_B6C8BA000EBBDF8D_OFFSET))(a1, a2);
		}
	};
}

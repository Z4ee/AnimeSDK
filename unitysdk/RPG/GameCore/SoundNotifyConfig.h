#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SOUNDNOTIFYCONFIG_METHOD_2_67E7D90C0AB969F9_OFFSET UNITYSDK_OFFSET(0x1D53CF80)
#define RPG_GAMECORE_SOUNDNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53D050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SoundNotifyConfig_TypeDefinitionIndex = 16762;

	class SoundNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SoundName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOUNDNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_67E7D90C0AB969F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SoundNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SoundNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOUNDNOTIFYCONFIG_METHOD_2_67E7D90C0AB969F9_OFFSET))(a1, a2);
		}
	};
}

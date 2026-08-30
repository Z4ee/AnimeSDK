#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HANUBARNOTIFYCONFIG_METHOD_2_E2C4C08A95F007AE_OFFSET UNITYSDK_OFFSET(0x1D3CB620)
#define RPG_GAMECORE_HANUBARNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CB750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HanuBarNotifyConfig_TypeDefinitionIndex = 16775;

	class HanuBarNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPoint; // 0x10
		::System::Single Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANUBARNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E2C4C08A95F007AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HanuBarNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HanuBarNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANUBARNOTIFYCONFIG_METHOD_2_E2C4C08A95F007AE_OFFSET))(a1, a2);
		}
	};
}

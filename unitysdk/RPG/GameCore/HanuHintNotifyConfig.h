#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HANUHINTNOTIFYCONFIG_METHOD_2_D4476574C1A5D8C5_OFFSET UNITYSDK_OFFSET(0x1D179310)
#define RPG_GAMECORE_HANUHINTNOTIFYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1793E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HanuHintNotifyConfig_TypeDefinitionIndex = 16774;

	class HanuHintNotifyConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AttachPoint; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANUHINTNOTIFYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D4476574C1A5D8C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HanuHintNotifyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HanuHintNotifyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HANUHINTNOTIFYCONFIG_METHOD_2_D4476574C1A5D8C5_OFFSET))(a1, a2);
		}
	};
}

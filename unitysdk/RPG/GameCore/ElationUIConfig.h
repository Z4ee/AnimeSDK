#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELATIONUICONFIG_METHOD_2_0CAE43A34B87BB44_OFFSET UNITYSDK_OFFSET(0x1D055A60)
#define RPG_GAMECORE_ELATIONUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D056E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationUIConfig_TypeDefinitionIndex = 16373;

	class ElationUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* DetailIconPath; // 0x10
		::System::String* ActionBarIconPath; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0CAE43A34B87BB44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElationUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONUICONFIG_METHOD_2_0CAE43A34B87BB44_OFFSET))(a1, a2);
		}
	};
}

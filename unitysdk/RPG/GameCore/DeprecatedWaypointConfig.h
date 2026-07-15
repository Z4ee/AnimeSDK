#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DEPRECATEDWAYPOINTCONFIG_METHOD_2_4ED160AEE5810492_OFFSET UNITYSDK_OFFSET(0x1C103320)
#define RPG_GAMECORE_DEPRECATEDWAYPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C103470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeprecatedWaypointConfig_TypeDefinitionIndex = 16792;

	class DeprecatedWaypointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnchorName; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnArrive; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPRECATEDWAYPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4ED160AEE5810492(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeprecatedWaypointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeprecatedWaypointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPRECATEDWAYPOINTCONFIG_METHOD_2_4ED160AEE5810492_OFFSET))(a1, a2);
		}
	};
}

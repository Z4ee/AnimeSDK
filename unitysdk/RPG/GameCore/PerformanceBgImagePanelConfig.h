#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONFIG_METHOD_2_DD01EE14A7B52EB1_OFFSET UNITYSDK_OFFSET(0x1BB16E10)
#define RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB16F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceBgImagePanelConfig_TypeDefinitionIndex = 18298;

	class PerformanceBgImagePanelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Comment; // 0x18
		::System::UInt32 PrefabLoadMetaIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DD01EE14A7B52EB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceBgImagePanelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceBgImagePanelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONFIG_METHOD_2_DD01EE14A7B52EB1_OFFSET))(a1, a2);
		}
	};
}

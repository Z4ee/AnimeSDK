#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STTASKCONFIG_METHOD_3_53E3C4F634FACB78_OFFSET UNITYSDK_OFFSET(0x1D4BDAB0)
#define RPG_GAMECORE_STTASKCONFIG_METHOD_3_A92D01A7216B76BB_OFFSET UNITYSDK_OFFSET(0x1D4BDAF0)
#define RPG_GAMECORE_STTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BDBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int STTaskConfig_TypeDefinitionIndex = 19861;

	class STTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STTASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_53E3C4F634FACB78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::STTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::STTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STTASKCONFIG_METHOD_3_53E3C4F634FACB78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A92D01A7216B76BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::STTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::STTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STTASKCONFIG_METHOD_3_A92D01A7216B76BB_OFFSET))(a1, a2);
		}
	};
}

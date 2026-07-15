#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTCUSOMTEVENTCONFIG_METHOD_2_ED97A9FF462F3FEC_OFFSET UNITYSDK_OFFSET(0x1B75E870)
#define RPG_GAMECORE_RTCUSOMTEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B75EA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCusomtEventConfig_TypeDefinitionIndex = 23342;

	class RtCusomtEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::JsonEnum* Event; // 0x10
		::System::Int32 Priority; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCUSOMTEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ED97A9FF462F3FEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCusomtEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCusomtEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCUSOMTEVENTCONFIG_METHOD_2_ED97A9FF462F3FEC_OFFSET))(a1, a2);
		}
	};
}

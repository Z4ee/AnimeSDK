#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }

#define RPG_GAMECORE_FREESTYLETRANSITIONINFOCONFIG_METHOD_2_6F97D1A80E0FED1A_OFFSET UNITYSDK_OFFSET(0x17220F00)
#define RPG_GAMECORE_FREESTYLETRANSITIONINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17220FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTransitionInfoConfig_TypeDefinitionIndex = 14924;

	class FreeStyleTransitionInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleMotionInfoConfig*>* FreeStyleMotionInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRANSITIONINFOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6F97D1A80E0FED1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleTransitionInfoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleTransitionInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRANSITIONINFOCONFIG_METHOD_2_6F97D1A80E0FED1A_OFFSET))(a1, a2);
		}
	};
}

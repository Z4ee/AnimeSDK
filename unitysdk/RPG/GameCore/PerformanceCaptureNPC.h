#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCECAPTURENPC_METHOD_2_89452837824197B0_OFFSET UNITYSDK_OFFSET(0x199F0130)
#define RPG_GAMECORE_PERFORMANCECAPTURENPC__CTOR_OFFSET UNITYSDK_OFFSET(0x199F0370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceCaptureNPC_TypeDefinitionIndex = 20634;

	class PerformanceCaptureNPC : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 NpcID; // 0x1C
		::System::Boolean DisableEmoGraph; // 0x20
		::System::Boolean EnableStandByBreak; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECAPTURENPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_89452837824197B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceCaptureNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceCaptureNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCECAPTURENPC_METHOD_2_89452837824197B0_OFFSET))(a1, a2);
		}
	};
}

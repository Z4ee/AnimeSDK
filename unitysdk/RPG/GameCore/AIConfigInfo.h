#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AIPathwayInfo; }
namespace RPG::GameCore { class AISlaveConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AICONFIGINFO_METHOD_2_75B337F25F4579FB_OFFSET UNITYSDK_OFFSET(0x185EF840)
#define RPG_GAMECORE_AICONFIGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x185EFAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIConfigInfo_TypeDefinitionIndex = 16351;

	class AIConfigInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AIFile; // 0x10
		::System::Boolean OverrideVariable; // 0x18
		::Il2CppArray<::RPG::GameCore::AIPathwayInfo*>* PathwayList; // 0x20
		::System::UInt32 DefaultAIPathwayIndex; // 0x28
		::Il2CppArray<::RPG::GameCore::AISlaveConfig*>* SlaveConfigList; // 0x30
		::System::Boolean EnableVision; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICONFIGINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_75B337F25F4579FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIConfigInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIConfigInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICONFIGINFO_METHOD_2_75B337F25F4579FB_OFFSET))(a1, a2);
		}
	};
}

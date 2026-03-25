#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_STACKBOOSTPOINTDIRTY_METHOD_3_102F57A8ED2DDBD0_OFFSET UNITYSDK_OFFSET(0x177610B0)
#define RPG_GAMECORE_STACKBOOSTPOINTDIRTY_METHOD_3_69181983F917D120_OFFSET UNITYSDK_OFFSET(0x17761030)
#define RPG_GAMECORE_STACKBOOSTPOINTDIRTY__CTOR_OFFSET UNITYSDK_OFFSET(0x17761080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackBoostPointDirty_TypeDefinitionIndex = 21786;

	class StackBoostPointDirty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DirtyCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTDIRTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_69181983F917D120(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackBoostPointDirty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackBoostPointDirty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTDIRTY_METHOD_3_69181983F917D120_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_102F57A8ED2DDBD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackBoostPointDirty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackBoostPointDirty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTDIRTY_METHOD_3_102F57A8ED2DDBD0_OFFSET))(a1, a2);
		}
	};
}

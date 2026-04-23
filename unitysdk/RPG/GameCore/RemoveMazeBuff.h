#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEMAZEBUFF_METHOD_3_285DF138332F6821_OFFSET UNITYSDK_OFFSET(0x18CA4B30)
#define RPG_GAMECORE_REMOVEMAZEBUFF_METHOD_3_EEA5E53A6F1FB400_OFFSET UNITYSDK_OFFSET(0x18CA4AB0)
#define RPG_GAMECORE_REMOVEMAZEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA4B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveMazeBuff_TypeDefinitionIndex = 19372;

	class RemoveMazeBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAZEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EEA5E53A6F1FB400(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveMazeBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveMazeBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAZEBUFF_METHOD_3_EEA5E53A6F1FB400_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_285DF138332F6821(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveMazeBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAZEBUFF_METHOD_3_285DF138332F6821_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETEFFECTPROGRESS_METHOD_3_0C2D611C08AF3533_OFFSET UNITYSDK_OFFSET(0x176CA030)
#define RPG_GAMECORE_SETEFFECTPROGRESS_METHOD_3_64AED65B8EEBE741_OFFSET UNITYSDK_OFFSET(0x176CA0B0)
#define RPG_GAMECORE_SETEFFECTPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x176CA080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectProgress_TypeDefinitionIndex = 22022;

	class SetEffectProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FormatString UniqueEffectName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* Progress; // 0x28
		::RPG::GameCore::DynamicFloat* TransitionDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0C2D611C08AF3533(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTPROGRESS_METHOD_3_0C2D611C08AF3533_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64AED65B8EEBE741(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTPROGRESS_METHOD_3_64AED65B8EEBE741_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR_METHOD_3_243787FF977EA3B3_OFFSET UNITYSDK_OFFSET(0x1909CC70)
#define RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR_METHOD_3_C02ED1E249B6C167_OFFSET UNITYSDK_OFFSET(0x1909CBF0)
#define RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1909CC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindSetResetPlayerAnchor_TypeDefinitionIndex = 19613;

	class TimeRewindSetResetPlayerAnchor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* AnchorIDs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C02ED1E249B6C167(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR_METHOD_3_C02ED1E249B6C167_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_243787FF977EA3B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindSetResetPlayerAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETRESETPLAYERANCHOR_METHOD_3_243787FF977EA3B3_OFFSET))(a1, a2);
		}
	};
}

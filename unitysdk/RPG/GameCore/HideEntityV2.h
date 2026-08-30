#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEENTITYV2_METHOD_3_9E40026BC326B1C5_OFFSET UNITYSDK_OFFSET(0x1D3DF740)
#define RPG_GAMECORE_HIDEENTITYV2_METHOD_3_DD433F0F1B8A1312_OFFSET UNITYSDK_OFFSET(0x1D3DF700)
#define RPG_GAMECORE_HIDEENTITYV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3DF730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideEntityV2_TypeDefinitionIndex = 21420;

	class HideEntityV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean IsHide; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DD433F0F1B8A1312(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEntityV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEntityV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYV2_METHOD_3_DD433F0F1B8A1312_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E40026BC326B1C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideEntityV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideEntityV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEENTITYV2_METHOD_3_9E40026BC326B1C5_OFFSET))(a1, a2);
		}
	};
}

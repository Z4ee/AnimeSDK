#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NullableBool.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE_METHOD_3_0EE1CA6EDA6429D8_OFFSET UNITYSDK_OFFSET(0x1D03A930)
#define RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE_METHOD_3_C99518820B5F061D_OFFSET UNITYSDK_OFFSET(0x1D03A970)
#define RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D03A960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableHeadLookAtOverride_TypeDefinitionIndex = 23213;

	class DisableHeadLookAtOverride : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::NullableBool State; // 0x20
		::System::Boolean DisableRootYawMapping; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0EE1CA6EDA6429D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableHeadLookAtOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableHeadLookAtOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE_METHOD_3_0EE1CA6EDA6429D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C99518820B5F061D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableHeadLookAtOverride* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableHeadLookAtOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEHEADLOOKATOVERRIDE_METHOD_3_C99518820B5F061D_OFFSET))(a1, a2);
		}
	};
}

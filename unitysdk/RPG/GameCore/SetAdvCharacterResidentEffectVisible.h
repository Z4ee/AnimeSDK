#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_METHOD_3_5EB6A83232F04A93_OFFSET UNITYSDK_OFFSET(0x1C2D0B60)
#define RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_METHOD_3_B654E780C00F9FEC_OFFSET UNITYSDK_OFFSET(0x1C2D0B20)
#define RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D0B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvCharacterResidentEffectVisible_TypeDefinitionIndex = 21589;

	class SetAdvCharacterResidentEffectVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::System::Boolean Visible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B654E780C00F9FEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_METHOD_3_B654E780C00F9FEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5EB6A83232F04A93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_METHOD_3_5EB6A83232F04A93_OFFSET))(a1, a2);
		}
	};
}

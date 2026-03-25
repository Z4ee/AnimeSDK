#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_METHOD_3_5EB6A83232F04A93_OFFSET UNITYSDK_OFFSET(0x176A52A0)
#define RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_METHOD_3_F5340CB139B4BEC7_OFFSET UNITYSDK_OFFSET(0x176A5220)
#define RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176A5270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAdvCharacterResidentEffectVisible_TypeDefinitionIndex = 20597;

	class SetAdvCharacterResidentEffectVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::System::Boolean Visible; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F5340CB139B4BEC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_METHOD_3_F5340CB139B4BEC7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5EB6A83232F04A93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAdvCharacterResidentEffectVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETADVCHARACTERRESIDENTEFFECTVISIBLE_METHOD_3_5EB6A83232F04A93_OFFSET))(a1, a2);
		}
	};
}

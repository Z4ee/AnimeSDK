#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceOwlbertAnimType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEOWLBERTANIM_METHOD_2_9A548E8E2B7F1672_OFFSET UNITYSDK_OFFSET(0x195EF900)
#define RPG_GAMECORE_CAKERACEOWLBERTANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x195EFAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceOwlbertAnim_TypeDefinitionIndex = 17465;

	class CakeRaceOwlbertAnim : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceOwlbertAnimType Type; // 0x10
		::System::String* InAnimName; // 0x18
		::System::String* LoopAnimName; // 0x20
		::System::String* OutAnimName; // 0x28
		::System::String* SingleAnimName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEOWLBERTANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9A548E8E2B7F1672(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceOwlbertAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceOwlbertAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEOWLBERTANIM_METHOD_2_9A548E8E2B7F1672_OFFSET))(a1, a2);
		}
	};
}

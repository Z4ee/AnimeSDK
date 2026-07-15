#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAFIREEFFECT_METHOD_3_EEEAFF887878C5DF_OFFSET UNITYSDK_OFFSET(0x1C24AD50)
#define RPG_GAMECORE_CHIMERAFIREEFFECT_METHOD_3_FF4301BFD8757871_OFFSET UNITYSDK_OFFSET(0x1C24ADB0)
#define RPG_GAMECORE_CHIMERAFIREEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24ADA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraFireEffect_TypeDefinitionIndex = 15253;

	class ChimeraFireEffect : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* AnchorName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAFIREEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EEEAFF887878C5DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraFireEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraFireEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAFIREEFFECT_METHOD_3_EEEAFF887878C5DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF4301BFD8757871(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraFireEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraFireEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAFIREEFFECT_METHOD_3_FF4301BFD8757871_OFFSET))(a1, a2);
		}
	};
}

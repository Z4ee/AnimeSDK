#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYVOICE_METHOD_3_2AB47F9EF037B87E_OFFSET UNITYSDK_OFFSET(0x1D7A9D90)
#define RPG_GAMECORE_PLAYVOICE_METHOD_3_D66C2437927E276F_OFFSET UNITYSDK_OFFSET(0x1D7A9DE0)
#define RPG_GAMECORE_PLAYVOICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A9DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVoice_TypeDefinitionIndex = 20377;

	class PlayVoice : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* VoiceIDs; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single IntervalTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2AB47F9EF037B87E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVoice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVoice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_METHOD_3_2AB47F9EF037B87E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D66C2437927E276F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayVoice* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayVoice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_METHOD_3_D66C2437927E276F_OFFSET))(a1, a2);
		}
	};
}

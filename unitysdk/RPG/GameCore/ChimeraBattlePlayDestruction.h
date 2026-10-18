#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_METHOD_3_4C2965161D8ED1A1_OFFSET UNITYSDK_OFFSET(0x1D597F90)
#define RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_METHOD_3_6FD57EB32D76BD85_OFFSET UNITYSDK_OFFSET(0x1D5999F0)
#define RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D597F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattlePlayDestruction_TypeDefinitionIndex = 15882;

	class ChimeraBattlePlayDestruction : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::String* DestructionComponentAttachPoint; // 0x20
		::RPG::MVector3 ForceDirection; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FD57EB32D76BD85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattlePlayDestruction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattlePlayDestruction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_METHOD_3_6FD57EB32D76BD85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C2965161D8ED1A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraBattlePlayDestruction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraBattlePlayDestruction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_METHOD_3_4C2965161D8ED1A1_OFFSET))(a1, a2);
		}
	};
}

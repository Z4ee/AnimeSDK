#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleMainsubKillSealScore; }
namespace RPG::GameCore { class MarbleNpcConfig; }

#define RPG_GAMECORE_MARBLEMAINSUBCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD199A0)
#define RPG_GAMECORE_MARBLEMAINSUBCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1A980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMainsubConfig_TypeDefinitionIndex = 18181;

	class MarbleMainsubConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleMainsubKillSealScore*>* KillSealScores; // 0x10
		::RPG::GameCore::MarbleNpcConfig* ANpcConfig; // 0x18
		::RPG::GameCore::MarbleNpcConfig* BNpcConfig; // 0x20
		::System::Int32 PvpLoseDeductScore; // 0x28
		::System::Int32 PvpMinRankDeductScore; // 0x2C
		::System::Int32 PvpGiveUpDeductScore; // 0x30
		::System::Int32 PvpMinRankGiveUpDeductScore; // 0x34
		::System::UInt32 PaoPaoId; // 0x38
		::System::UInt32 AbsorbSealId; // 0x3C
		::System::UInt32 BulletSealId; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAINSUBCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleMainsubConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMainsubConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAINSUBCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

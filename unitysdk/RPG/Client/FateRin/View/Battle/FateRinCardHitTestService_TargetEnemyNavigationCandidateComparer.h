#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_35A48B293C0D5CF1.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1B5C9740)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5C9820)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C9810)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinCardHitTestService_TargetEnemyNavigationCandidateComparer_TypeDefinitionIndex = 79352;

	class FateRinCardHitTestService_TargetEnemyNavigationCandidateComparer : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::View::Battle::FateRinCardHitTestService_TargetEnemyNavigationCandidateComparer** StaticGet_Instance()
		{
			return (::RPG::Client::FateRin::View::Battle::FateRinCardHitTestService_TargetEnemyNavigationCandidateComparer**)Il2CppClass::FromTypeDefinitionIndex(FateRinCardHitTestService_TargetEnemyNavigationCandidateComparer_TypeDefinitionIndex)->GetStaticField(0xC670);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER__CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::Struct_2_35A48B293C0D5CF1 a1, ::Struct_2_35A48B293C0D5CF1 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_35A48B293C0D5CF1, ::Struct_2_35A48B293C0D5CF1))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TARGETENEMYNAVIGATIONCANDIDATECOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}

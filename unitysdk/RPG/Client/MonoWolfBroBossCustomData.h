#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_MONOWOLFBROBOSSCUSTOMDATA_GETHP_OFFSET UNITYSDK_OFFSET(0x9D4F220)
#define RPG_CLIENT_MONOWOLFBROBOSSCUSTOMDATA_LOSSHP_OFFSET UNITYSDK_OFFSET(0x9D4F260)
#define RPG_CLIENT_MONOWOLFBROBOSSCUSTOMDATA_ONBEINVALIDHIT_OFFSET UNITYSDK_OFFSET(0x9D4F2E0)
#define RPG_CLIENT_MONOWOLFBROBOSSCUSTOMDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9D4F1D0)
#define RPG_CLIENT_MONOWOLFBROBOSSCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4F360)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoWolfBroBossCustomData_TypeDefinitionIndex = 56050;

	class MonoWolfBroBossCustomData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 hp; // 0x18
		::System::String* onLossHPCustomString; // 0x20
		::System::String* onInvalidHitCustomString; // 0x28
		::System::Int32 Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBOSSCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBOSSCUSTOMDATA_ONENABLE_OFFSET))(this);
		}

		::System::Int32 GetHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBOSSCUSTOMDATA_GETHP_OFFSET))(this);
		}

		::System::Void LossHp(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBOSSCUSTOMDATA_LOSSHP_OFFSET))(this, a1);
		}

		::System::Void OnBeInvalidHit(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOWOLFBROBOSSCUSTOMDATA_ONBEINVALIDHIT_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E01DF6570E9D1BA0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_GETHPPROGRESS_OFFSET UNITYSDK_OFFSET(0xCE2DD00)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_GETKILLPROGRESS_OFFSET UNITYSDK_OFFSET(0xCE2DB60)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_GETREDIRECTINFO_OFFSET UNITYSDK_OFFSET(0xCE29150)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_REGISTERREDIRECT_OFFSET UNITYSDK_OFFSET(0xCE2D040)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE__CTOR_OFFSET UNITYSDK_OFFSET(0xCE2CC40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE__GETMONSTERTIE_OFFSET UNITYSDK_OFFSET(0xCE2DC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_GridFightProgressRule_TypeDefinitionIndex = 52440;

	class GridFightManager_GridFightProgressRule : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightPenaltyRuleConfigRow* _PenaltyRuleConfigRow; // 0x10
		::System::Collections::Generic::List_1<::Class_1_E01DF6570E9D1BA0*>* _RedirectToSourceEntityMap; // 0x18

		::System::Void _ctor(::RPG::GameCore::GridFightPenaltyRuleConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE__CTOR_OFFSET))(this, a1);
		}

		::Class_1_E01DF6570E9D1BA0* GetRedirectInfo(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Class_1_E01DF6570E9D1BA0*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_GETREDIRECTINFO_OFFSET))(this, a1);
		}

		::System::Void RegisterRedirect(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_REGISTERREDIRECT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetKillProgress(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_GETKILLPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 GetHPProgress(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE_GETHPPROGRESS_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsterTie(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTPROGRESSRULE__GETMONSTERTIE_OFFSET))(this, a1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_2A420BA176281294_OFFSET UNITYSDK_OFFSET(0x1B9F0410)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_3025C325438C1838_OFFSET UNITYSDK_OFFSET(0x1B9F05F0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_47314AB0F820515F_OFFSET UNITYSDK_OFFSET(0x1B9F0620)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_69EC066A6F156695_OFFSET UNITYSDK_OFFSET(0x1B9F03D0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F0400)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareProjectileHitCount_TypeDefinitionIndex = 9952;

	class ST_Parkour_ByCompareProjectileHitCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_69EC066A6F156695(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_69EC066A6F156695_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2A420BA176281294(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_2A420BA176281294_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3025C325438C1838(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_3025C325438C1838_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47314AB0F820515F(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_47314AB0F820515F_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengeBossData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_CREATEALL_OFFSET UNITYSDK_OFFSET(0x18C0E710)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_GET_HINTTIERCEFINAL_OFFSET UNITYSDK_OFFSET(0x18C0E6F0)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_GET_MONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x18C0E6C0)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_GET_RECOMMENDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0x18C0E6D0)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_GET_VORACITYINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0x18C0E6E0)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_SET_HINTTIERCEFINAL_OFFSET UNITYSDK_OFFSET(0x18C0E700)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATENORMAL_OFFSET UNITYSDK_OFFSET(0x18C0E7C0)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATETIERCE_OFFSET UNITYSDK_OFFSET(0x18C0E980)
#define RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18C0E970)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossIntroStageViewModel_TypeDefinitionIndex = 63141;

	class ChallengeBossIntroStageViewModel : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* _RecommendDamageTypes_k__BackingField; // 0x10
		::System::Boolean _HintTierceFinal_k__BackingField; // 0x18
		::System::Int32 _VoracityInvasionLevel_k__BackingField; // 0x1C
		::System::Int32 _MonsterLevel_k__BackingField; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::RPG::GameCore::AttackDamageType>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::RPG::GameCore::AttackDamageType>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_MonsterLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_GET_MONSTERLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendDamageTypes()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_GET_RECOMMENDDAMAGETYPES_OFFSET))(this);
		}

		::System::Int32 get_VoracityInvasionLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_GET_VORACITYINVASIONLEVEL_OFFSET))(this);
		}

		::System::Boolean get_HintTierceFinal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_GET_HINTTIERCEFINAL_OFFSET))(this);
		}

		::System::Void set_HintTierceFinal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_SET_HINTTIERCEFINAL_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::ChallengeBossIntroStageViewModel*>* CreateAll(::RPG::Client::ChallengeBossData* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ChallengeBossIntroStageViewModel*>*(*)(::RPG::Client::ChallengeBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL_CREATEALL_OFFSET))(a1);
		}

		static ::RPG::Client::ChallengeBossIntroStageViewModel* _CreateNormal(::RPG::Client::ChallengeBossData* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ChallengeBossIntroStageViewModel*(*)(::RPG::Client::ChallengeBossData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATENORMAL_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChallengeBossIntroStageViewModel* _CreateTierce(::RPG::Client::ChallengeBossData* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ChallengeBossIntroStageViewModel*(*)(::RPG::Client::ChallengeBossData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINTROSTAGEVIEWMODEL__CREATETIERCE_OFFSET))(a1, a2);
		}
	};
}

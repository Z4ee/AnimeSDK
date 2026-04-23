#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99E47DBBD38370B7;
namespace RPG::Client { class BattleSkillDescItemFitter; }
namespace RPG::Client { class BattleSkillDescItemFitterParamCollector; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_BATTLESKILLDESCFITTER_ADDITEMFITTER_OFFSET UNITYSDK_OFFSET(0x9E7DF80)
#define RPG_CLIENT_BATTLESKILLDESCFITTER_CREATE_OFFSET UNITYSDK_OFFSET(0x9E7DE30)
#define RPG_CLIENT_BATTLESKILLDESCFITTER_TRYFIT_OFFSET UNITYSDK_OFFSET(0x9E7E160)
#define RPG_CLIENT_BATTLESKILLDESCFITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E7DF30)
#define RPG_CLIENT_BATTLESKILLDESCFITTER__TRYFITITEMS_OFFSET UNITYSDK_OFFSET(0x9E7E1C0)
#define RPG_CLIENT_BATTLESKILLDESCFITTER__TRYUPDATEPOS_OFFSET UNITYSDK_OFFSET(0x9E7E320)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSkillDescFitter_TypeDefinitionIndex = 66235;

	class BattleSkillDescFitter : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* _PosChangeTransform; // 0x10
		::UnityEngine::RectTransform* _NeedRefreshFitterTransform; // 0x18
		::Class_1_99E47DBBD38370B7* _RootTransformCornerData; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::BattleSkillDescItemFitter*>* _ItemFitterList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCFITTER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleSkillDescFitter* Create(::UnityEngine::RectTransform* rootTransform, ::UnityEngine::RectTransform* needRefreshFitterTransform, ::UnityEngine::RectTransform* posChangeTransform)
		{
			return ((::RPG::Client::BattleSkillDescFitter*(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCFITTER_CREATE_OFFSET))(rootTransform, needRefreshFitterTransform, posChangeTransform);
		}

		::RPG::Client::BattleSkillDescItemFitter* AddItemFitter(::RPG::Client::BattleSkillDescItemFitterParamCollector* collector)
		{
			return ((::RPG::Client::BattleSkillDescItemFitter*(*)(::PVOID, ::RPG::Client::BattleSkillDescItemFitterParamCollector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCFITTER_ADDITEMFITTER_OFFSET))(this, collector);
		}

		::System::Boolean TryFit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCFITTER_TRYFIT_OFFSET))(this);
		}

		::System::Boolean _TryFitItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCFITTER__TRYFITITEMS_OFFSET))(this);
		}

		::System::Void _TryUpdatePos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCFITTER__TRYUPDATEPOS_OFFSET))(this);
		}
	};
}

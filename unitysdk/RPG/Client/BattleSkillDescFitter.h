#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3AF00C13A1E953CE;
namespace RPG::Client { class BattleSkillDescItemFitter; }
namespace RPG::Client { class BattleSkillDescItemFitterParamCollector; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_BATTLESKILLDESCFITTER_ADDITEMFITTER_OFFSET UNITYSDK_OFFSET(0x19FBE690)
#define RPG_CLIENT_BATTLESKILLDESCFITTER_CREATE_OFFSET UNITYSDK_OFFSET(0x19FBE540)
#define RPG_CLIENT_BATTLESKILLDESCFITTER_TRYFIT_OFFSET UNITYSDK_OFFSET(0x19FBE8F0)
#define RPG_CLIENT_BATTLESKILLDESCFITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBE640)
#define RPG_CLIENT_BATTLESKILLDESCFITTER__TRYFITITEMS_OFFSET UNITYSDK_OFFSET(0x19FBE950)
#define RPG_CLIENT_BATTLESKILLDESCFITTER__TRYUPDATEPOS_OFFSET UNITYSDK_OFFSET(0x19FBEA90)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSkillDescFitter_TypeDefinitionIndex = 68626;

	class BattleSkillDescFitter : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* _NeedRefreshFitterTransform; // 0x10
		::Class_1_3AF00C13A1E953CE* _RootTransformCornerData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::BattleSkillDescItemFitter*>* _ItemFitterList; // 0x20
		::UnityEngine::RectTransform* _PosChangeTransform; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCFITTER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleSkillDescFitter* Create(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::RPG::Client::BattleSkillDescFitter*(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCFITTER_CREATE_OFFSET))(a1, a2, a3);
		}

		::RPG::Client::BattleSkillDescItemFitter* AddItemFitter(::RPG::Client::BattleSkillDescItemFitterParamCollector* a1)
		{
			return ((::RPG::Client::BattleSkillDescItemFitter*(*)(::PVOID, ::RPG::Client::BattleSkillDescItemFitterParamCollector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCFITTER_ADDITEMFITTER_OFFSET))(this, a1);
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

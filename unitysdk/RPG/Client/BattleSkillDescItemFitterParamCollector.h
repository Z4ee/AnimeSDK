#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A33B5D17A96691F2;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_ADDTEXTITEM_OFFSET UNITYSDK_OFFSET(0x19FBFAC0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_CREATE_OFFSET UNITYSDK_OFFSET(0x19FBF9B0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19FBFA70)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSkillDescItemFitterParamCollector_TypeDefinitionIndex = 68630;

	class BattleSkillDescItemFitterParamCollector : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* FitterTransform; // 0x10
		::System::Collections::Generic::List_1<::Class_1_A33B5D17A96691F2*>* TextItemList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleSkillDescItemFitterParamCollector* Create(::UnityEngine::RectTransform* a1)
		{
			return ((::RPG::Client::BattleSkillDescItemFitterParamCollector*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_CREATE_OFFSET))(a1);
		}

		::System::Void AddTextItem(::UnityEngine::RectTransform* a1, ::UnityEngine::UI::Text* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_ADDTEXTITEM_OFFSET))(this, a1, a2);
		}
	};
}

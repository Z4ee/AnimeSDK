#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A33B5D17A96691F2;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_ADDTEXTITEM_OFFSET UNITYSDK_OFFSET(0xC93B7E0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR_CREATE_OFFSET UNITYSDK_OFFSET(0xC93B6D0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTERPARAMCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC93B790)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSkillDescItemFitterParamCollector_TypeDefinitionIndex = 71829;

	class BattleSkillDescItemFitterParamCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_A33B5D17A96691F2*>* TextItemList; // 0x10
		::UnityEngine::RectTransform* FitterTransform; // 0x18

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

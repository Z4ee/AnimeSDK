#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_99E47DBBD38370B7;
class Class_1_A33B5D17A96691F2;
namespace RPG::Client { class BattleSkillDescItemFitterParamCollector; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER_CREATE_OFFSET UNITYSDK_OFFSET(0x9E7E020)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER_GETMINOUTSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x9E7E7E0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER_TRYFIT_OFFSET UNITYSDK_OFFSET(0x9E7E6C0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E7E8A0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETISFITTERINCANVAS_OFFSET UNITYSDK_OFFSET(0x9E7EAE0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETISOUTYAXIS_OFFSET UNITYSDK_OFFSET(0x9E7F190)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETMINFONTSIZE_OFFSET UNITYSDK_OFFSET(0x9E7EE50)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETRIGHTTOPOUTSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x9E7F1F0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__SETFONTSIZE_OFFSET UNITYSDK_OFFSET(0x9E7EFB0)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__TRYBINARYSETMAXFONTSIZE_OFFSET UNITYSDK_OFFSET(0x9E7EB60)
#define RPG_CLIENT_BATTLESKILLDESCITEMFITTER__TRYBROADENTEXTWIDTH_OFFSET UNITYSDK_OFFSET(0x9E7EC70)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSkillDescItemFitter_TypeDefinitionIndex = 66236;

	class BattleSkillDescItemFitter : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MIN_Graphic_FONT_SIZE = 0x10; // 0x0
		// static const ::System::Int32 _MIN_OTHER_FONT_SIZE = 0x10; // 0x0
		::UnityEngine::RectTransform* _FitterTransform; // 0x10
		::Il2CppArray<::System::Single>* _BroadenTextWidthRate; // 0x18
		::System::Collections::Generic::HashSet_1<::Enum_3_63CAB6C405C6C7B1>* _GraphicLanguageType; // 0x20
		::Class_1_99E47DBBD38370B7* _RootTransformCornerData; // 0x28
		::System::Collections::Generic::List_1<::Class_1_A33B5D17A96691F2*>* _TextItemList; // 0x30
		::System::Int32 _OriginFontSize; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleSkillDescItemFitter* Create(::RPG::Client::BattleSkillDescItemFitterParamCollector* collector, ::Class_1_99E47DBBD38370B7* rootTransformCornerData)
		{
			return ((::RPG::Client::BattleSkillDescItemFitter*(*)(::RPG::Client::BattleSkillDescItemFitterParamCollector*, ::Class_1_99E47DBBD38370B7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER_CREATE_OFFSET))(collector, rootTransformCornerData);
		}

		::System::Boolean TryFit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER_TRYFIT_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetMinOutScreenOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER_GETMINOUTSCREENOFFSET_OFFSET))(this);
		}

		::System::Boolean _TryBinarySetMaxFontSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__TRYBINARYSETMAXFONTSIZE_OFFSET))(this);
		}

		::System::Void _SetFontSize(::System::Int32 fontSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__SETFONTSIZE_OFFSET))(this, fontSize);
		}

		::System::Int32 _GetMinFontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETMINFONTSIZE_OFFSET))(this);
		}

		::System::Boolean _TryBroadenTextWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__TRYBROADENTEXTWIDTH_OFFSET))(this);
		}

		::System::Boolean _GetIsFitterInCanvas()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETISFITTERINCANVAS_OFFSET))(this);
		}

		::System::Boolean _GetIsOutYAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETISOUTYAXIS_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetRightTopOutScreenOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESKILLDESCITEMFITTER__GETRIGHTTOPOUTSCREENOFFSET_OFFSET))(this);
		}
	};
}

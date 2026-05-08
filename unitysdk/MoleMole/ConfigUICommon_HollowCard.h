#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class HollowCardCombineAnimationConfigs; }
namespace MoleMole { class HollowCardCombineConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD__CTOR_OFFSET UNITYSDK_OFFSET(0xFB179B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_HollowCard_TypeDefinitionIndex = 48467;

	class ConfigUICommon_HollowCard : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* floorOffset; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* floorMapIndex; // 0x60
		::System::Int32 TowerDefenseBuddyID; // 0x68
		::System::Int32 TowerDefenseBuddyPopGroup; // 0x6C
		::System::Int32 TowerDefenseEnhanceID; // 0x70
		::System::Int32 TowerDefenseEnhancePopGroup; // 0x74
		::UnityEngine::Vector2 SortBtnSizeMobile; // 0x78
		::UnityEngine::Vector2 SortBtnOffsetMobile; // 0x80
		::UnityEngine::Vector2 SortBtnSizePC; // 0x88
		::UnityEngine::Vector2 SortBtnOffsetPC; // 0x90
		::UnityEngine::Vector2 SortBtnSizeConsole; // 0x98
		::UnityEngine::Vector2 SortBtnOffsetConsole; // 0xA0
		::UnityEngine::Vector2 WholeEffectBtnSizeMobile; // 0xA8
		::UnityEngine::Vector2 WholeEffectBtnOffsetMobile; // 0xB0
		::UnityEngine::Vector2 WholeEffectBtnSizePC; // 0xB8
		::UnityEngine::Vector2 WholeEffectBtnOffsetPC; // 0xC0
		::UnityEngine::Vector2 WholeEffectBtnSizeConsole; // 0xC8
		::UnityEngine::Vector2 WholeEffectBtnOffsetConsole; // 0xD0
		::MoleMole::HollowCardCombineConfig* CardCombineConfig; // 0xD8
		::MoleMole::HollowCardCombineAnimationConfigs* CardCombineAnimConfig; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD__CTOR_OFFSET))(this);
		}
	};
}

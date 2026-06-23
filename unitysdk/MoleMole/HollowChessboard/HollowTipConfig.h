#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowQuestTipsSettingType.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace MoleMole::HollowChessboard { class HollowTipItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWTIPCONFIG_GETHOLLOWTIPITEM_OFFSET UNITYSDK_OFFSET(0x191314F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWTIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x191315E0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowTipConfig_TypeDefinitionIndex = 61446;

	class HollowTipConfig : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIHollowQuestTipsSettingType, ::MoleMole::HollowChessboard::HollowTipItem*>* TisTypeConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWTIPCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowTipItem* GetHollowTipItem(::MoleMole::UIHollowQuestTipsSettingType type)
		{
			return ((::MoleMole::HollowChessboard::HollowTipItem*(*)(::PVOID, ::MoleMole::UIHollowQuestTipsSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_HOLLOWTIPCONFIG_GETHOLLOWTIPITEM_OFFSET))(this, type);
		}
	};
}

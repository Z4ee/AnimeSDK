#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A734210DD9FF658C.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGeneralItemTipsDialog2Context_DialogType.h"
#include "unitysdk/Share/EBattleRewardType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_0_16E4307DCC419505_10;
class Class_1_0D6706375CDAAE8C;
class Class_1_499EDFA3518A0E64;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT_GET_USECUSTOMITEMPACKAGETYPE_OFFSET UNITYSDK_OFFSET(0x17BCED90)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BCEE60)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17BCEEF0)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17BCEF70)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x17BCEFF0)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x17BCF070)
#define MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCEDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemTipsDialog2Context_TypeDefinitionIndex = 65184;

	class UIGeneralItemTipsDialog2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* equipStateCtrlChangeAction; // 0x28
		::Class_0_16E4307DCC419505_10* photoItem; // 0x30
		::Class_1_499EDFA3518A0E64* cafeItem; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* dungeonTagIds; // 0x40
		::Class_1_0D6706375CDAAE8C* itemdata; // 0x48
		::System::Action_1<::System::Boolean>* OnAfterJump; // 0x50
		::System::Int64 cafeBeginTime; // 0x58
		::MoleMole::UIGeneralItemTipsDialog2Context_DialogType type; // 0x60
		::System::Int32 spiceId; // 0x64
		::System::Int32 NeedCount; // 0x68
		::System::Nullable_1<::System::Int32> overrideCount; // 0x6C
		::Enum_3_A734210DD9FF658C itemPackageType; // 0x74
		::System::Boolean disableJump; // 0x78
		::System::Boolean checkSuibianProductState; // 0x79
		::System::Nullable_1<::Share::EBattleRewardType> rewardType; // 0x7A
		::System::Int32 ramenId; // 0x80

		::System::Void _ctor(::Class_1_0D6706375CDAAE8C* itemdata, ::System::Boolean disableJump)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_OFFSET))(this, itemdata, disableJump);
		}

		::System::Void _ctor_1(::Class_1_0D6706375CDAAE8C* itemdata, ::Share::EBattleRewardType rewardType, ::System::Boolean disableJump)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::Share::EBattleRewardType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_1_OFFSET))(this, itemdata, rewardType, disableJump);
		}

		::System::Void _ctor_2(::System::Collections::Generic::List_1<::System::Int32>* buffs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_2_OFFSET))(this, buffs);
		}

		::System::Void _ctor_3(::System::Int32 ramenID, ::System::Int32 spiceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_3_OFFSET))(this, ramenID, spiceID);
		}

		::System::Void _ctor_4(::Class_1_499EDFA3518A0E64* cafeItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_499EDFA3518A0E64*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_4_OFFSET))(this, cafeItem);
		}

		::System::Void _ctor_5(::Class_0_16E4307DCC419505_10* photoItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_10*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT__CTOR_5_OFFSET))(this, photoItem);
		}

		::System::Boolean get_UseCustomItemPackageType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMTIPSDIALOG2CONTEXT_GET_USECUSTOMITEMPACKAGETYPE_OFFSET))(this);
		}
	};
}

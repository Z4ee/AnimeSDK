#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_0D6706375CDAAE8C;
class Class_3_1A345EAE5F749316_33;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_EXPEDITIONREWARDPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15107D80)
#define MOLEMOLE_EXPEDITIONREWARDPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x15108540)
#define MOLEMOLE_EXPEDITIONREWARDPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x15107D90)

namespace MoleMole
{
	inline static constexpr unsigned int ExpeditionRewardPopShow_TypeDefinitionIndex = 77808;

	class ExpeditionRewardPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* CombineItemDatas; // 0x28
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* OnceItem; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* AdditionalIndexs; // 0x38
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* SpecialItem; // 0x40
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* MaterialItem; // 0x48
		::System::Int32 finalAreaProgress; // 0x50
		::System::Int32 lastAreaProgress; // 0x54
		::System::Int32 lastRewardCount; // 0x58
		::System::Int32 lastExpeditionValue; // 0x5C
		::System::Int32 finalExpeditionValue; // 0x60
		::System::Int32 maxRewardCount; // 0x64
		::System::Int32 accessID; // 0x68
		::System::Int32 finalRewardCount; // 0x6C

		::System::Void _ctor(::Class_3_1A345EAE5F749316_33* material, ::Class_3_1A345EAE5F749316_33* onceReward)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_33*, ::Class_3_1A345EAE5F749316_33*))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONREWARDPOPSHOW__CTOR_OFFSET))(this, material, onceReward);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONREWARDPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EXPEDITIONREWARDPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}

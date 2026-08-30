#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C553D56653AF94EE;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_CLEARINSTANCE_OFFSET UNITYSDK_OFFSET(0x17988130)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPAREITEMDISPLAYMULTIDROP_OFFSET UNITYSDK_OFFSET(0x17988040)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPAREREWARDDISPLAY_OFFSET UNITYSDK_OFFSET(0x17987E30)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPARESORTID_OFFSET UNITYSDK_OFFSET(0x17987EA0)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17987DC0)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x179881F0)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_LOADCOMPARECONFIG_OFFSET UNITYSDK_OFFSET(0x17987840)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x17987800)

namespace RPG::Client
{
	inline static constexpr unsigned int RewardDisplaySortComparer_TypeDefinitionIndex = 65803;

	class RewardDisplaySortComparer : public ::System::Object
	{
	public:
		static ::RPG::Client::RewardDisplaySortComparer** StaticGet__Instance()
		{
			return (::RPG::Client::RewardDisplaySortComparer**)Il2CppClass::FromTypeDefinitionIndex(RewardDisplaySortComparer_TypeDefinitionIndex)->GetStaticField(0x66D50);
		}
		::System::Collections::Generic::List_1<::Class_1_C553D56653AF94EE*>* _RewardDisplaySortFilterGroups; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Void LoadCompareConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_LOADCOMPARECONFIG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_DISPOSE_OFFSET))(this);
		}

		::System::Int32 CompareRewardDisplay(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPAREREWARDDISPLAY_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareItemDisplayMultiDrop(::RPG::Client::ItemDisplayData* a1, ::RPG::Client::ItemDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPAREITEMDISPLAYMULTIDROP_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareSortID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_COMPARESORTID_OFFSET))(this, a1, a2);
		}

		static ::System::Void ClearInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_CLEARINSTANCE_OFFSET))();
		}

		static ::RPG::Client::RewardDisplaySortComparer* get_Instance()
		{
			return ((::RPG::Client::RewardDisplaySortComparer*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER_GET_INSTANCE_OFFSET))();
		}
	};
}

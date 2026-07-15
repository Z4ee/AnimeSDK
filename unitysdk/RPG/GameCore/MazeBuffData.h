#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_MAZEBUFFDATA_CANMERGE_OFFSET UNITYSDK_OFFSET(0x1978D510)
#define RPG_GAMECORE_MAZEBUFFDATA_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x1978D9E0)
#define RPG_GAMECORE_MAZEBUFFDATA_DOMERGE_OFFSET UNITYSDK_OFFSET(0x1978D370)
#define RPG_GAMECORE_MAZEBUFFDATA_INBATTLEBINDINGEQUALS_OFFSET UNITYSDK_OFFSET(0x1978D900)
#define RPG_GAMECORE_MAZEBUFFDATA_VALUEEQUALS_OFFSET UNITYSDK_OFFSET(0x1978D970)
#define RPG_GAMECORE_MAZEBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1978CDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffData_TypeDefinitionIndex = 53786;

	class MazeBuffData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* ExtraParamMap; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* TargetIndexList; // 0x18
		::System::UInt32 Level; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 ActiveWaveFlags; // 0x28
		::System::UInt32 OwnerCharacterIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::MazeBuffData* DoMerge(::RPG::GameCore::MazeBuffData* a1, ::RPG::GameCore::MazeBuffData* a2)
		{
			return ((::RPG::GameCore::MazeBuffData*(*)(::RPG::GameCore::MazeBuffData*, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFDATA_DOMERGE_OFFSET))(a1, a2);
		}

		::System::Boolean CanMerge(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFDATA_CANMERGE_OFFSET))(this, a1);
		}

		::System::Boolean ValueEquals(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFDATA_VALUEEQUALS_OFFSET))(this, a1);
		}

		::System::Boolean InBattleBindingEquals(::RPG::GameCore::MazeBuffData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFDATA_INBATTLEBINDINGEQUALS_OFFSET))(this, a1);
		}

		::RPG::GameCore::MazeBuffData* DeepCopy()
		{
			return ((::RPG::GameCore::MazeBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFDATA_DEEPCOPY_OFFSET))(this);
		}
	};
}

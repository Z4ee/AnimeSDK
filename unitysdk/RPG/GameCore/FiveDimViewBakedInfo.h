#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimChildPresetConfig; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class MeshBound; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIVEDIMVIEWBAKEDINFO_METHOD_2_2E2F8698F2EC4C49_OFFSET UNITYSDK_OFFSET(0x1BEB89F0)
#define RPG_GAMECORE_FIVEDIMVIEWBAKEDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB8CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimViewBakedInfo_TypeDefinitionIndex = 16065;

	class FiveDimViewBakedInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MeshBound* Bounds; // 0x10
		::RPG::GameCore::MeshBound* ColliderBounds; // 0x18
		::Il2CppArray<::System::String*>* DisabledRenderers; // 0x20
		::Il2CppArray<::System::String*>* DisabledColliders; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* TriggerMapping; // 0x30
		::RPG::MVector3 SplineMovePivot; // 0x38
		::RPG::MVector3 FlipCenterOffset; // 0x44
		::RPG::GameCore::FiveDimChildPresetConfig* ChildPresetConfig; // 0x50
		::System::UInt32 UnitLengthIndex; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMVIEWBAKEDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2E2F8698F2EC4C49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimViewBakedInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimViewBakedInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMVIEWBAKEDINFO_METHOD_2_2E2F8698F2EC4C49_OFFSET))(a1, a2);
		}
	};
}

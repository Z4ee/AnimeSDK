#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyBuildItemSlotExt; }

#define RPG_GAMECORE_TRAINPARTYBUILDITEMSLOT_METHOD_2_4FCEDC98F37A22E5_OFFSET UNITYSDK_OFFSET(0x1D533570)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D533780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemSlot_TypeDefinitionIndex = 16092;

	class TrainPartyBuildItemSlot : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 Tags; // 0x14
		::RPG::MVector3 LocalPosition; // 0x18
		::RPG::MVector3 LocalRotation; // 0x24
		::Il2CppArray<::RPG::GameCore::TrainPartyBuildItemSlotExt*>* Exts; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMSLOT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4FCEDC98F37A22E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemSlot*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemSlot*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMSLOT_METHOD_2_4FCEDC98F37A22E5_OFFSET))(a1, a2);
		}
	};
}

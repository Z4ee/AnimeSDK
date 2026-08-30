#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ECrowdLookAtMode.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelNPCUseAnimationType.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelLookAtAnchorInfo; }
namespace RPG::GameCore { class LevelLookAtPositionInfo; }
namespace RPG::GameCore { class LevelNPCPossessionInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELCROWDMEMBERINFO_METHOD_2_EA12CEE7070A5564_OFFSET UNITYSDK_OFFSET(0x1C10EBF0)
#define RPG_GAMECORE_LEVELCROWDMEMBERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C10F210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCrowdMemberInfo_TypeDefinitionIndex = 17084;

	class LevelCrowdMemberInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Identity; // 0x10
		::System::String* FeatureID; // 0x18
		::System::String* AssemNPCID; // 0x20
		::System::String* DefaultState; // 0x28
		::System::String* UniqueName; // 0x30
		::RPG::GameCore::ECrowdLookAtMode LookAtMode; // 0x38
		::System::String* LookAtTarget; // 0x40
		::RPG::GameCore::LevelLookAtAnchorInfo* LookAtAnchor; // 0x48
		::RPG::GameCore::LevelLookAtPositionInfo* LookAtPosition; // 0x50
		::RPG::MVector3 LocalPosition; // 0x58
		::System::Single LocalRotationX; // 0x64
		::System::Single LocalRotationY; // 0x68
		::System::Single LocalRotationZ; // 0x6C
		::RPG::GameCore::LevelNPCPossessionInfo* PossessionConfig; // 0x70
		::Il2CppArray<::RPG::GameCore::LevelNPCPossessionInfo*>* AdditivePossessionInfos; // 0x78
		::RPG::GameCore::LevelNPCUseAnimationType DefaultAnimationType; // 0x80
		::System::UInt32 DefaultIdleFreeStyleMotionID; // 0x84
		::System::String* DefaultFreeStyleGraph; // 0x88
		::System::Boolean EnableExtendLayerFreeStyle; // 0x90
		::System::String* ExtendLayerFreeStyleLayerName; // 0x98
		::System::UInt32 ExtendLayerFreeStyleMotionID; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCROWDMEMBERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EA12CEE7070A5564(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelCrowdMemberInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCrowdMemberInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCROWDMEMBERINFO_METHOD_2_EA12CEE7070A5564_OFFSET))(a1, a2);
		}
	};
}

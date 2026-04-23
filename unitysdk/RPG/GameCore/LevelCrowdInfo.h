#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelCrowdLoadPriority.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelCrowdMemberInfo; }
namespace RPG::GameCore { class MunicipalChatCrowdInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELCROWDINFO_METHOD_4_30A69730A8B0E754_OFFSET UNITYSDK_OFFSET(0x18A3DE70)
#define RPG_GAMECORE_LEVELCROWDINFO_METHOD_4_62D788DD05098A49_OFFSET UNITYSDK_OFFSET(0x18A3DE20)
#define RPG_GAMECORE_LEVELCROWDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3DE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCrowdInfo_TypeDefinitionIndex = 16398;

	class LevelCrowdInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelCrowdMemberInfo*>* MemberList; // 0x38
		::System::String* CrowdLevelGraph; // 0x40
		::System::String* NewMunicipalChatConfigPath; // 0x48
		::Il2CppArray<::RPG::GameCore::MunicipalChatCrowdInfo*>* NewMunicipalChatCrowdInfos; // 0x50
		::System::UInt32 InteractPerformanceID; // 0x58
		::System::Single TriggerRudius; // 0x5C
		::System::Single InteractPerformanceTriggerRadius; // 0x60
		::RPG::MVector3 CenterPos; // 0x64
		::RPG::GameCore::LevelCrowdLoadPriority LoadPriority; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCROWDINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_62D788DD05098A49(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelCrowdInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCrowdInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCROWDINFO_METHOD_4_62D788DD05098A49_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30A69730A8B0E754(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelCrowdInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelCrowdInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCROWDINFO_METHOD_4_30A69730A8B0E754_OFFSET))(a1, a2);
		}
	};
}

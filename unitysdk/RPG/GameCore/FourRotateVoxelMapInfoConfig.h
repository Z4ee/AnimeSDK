#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELMAPINFOCONFIG_METHOD_2_06F41ED084E3C562_OFFSET UNITYSDK_OFFSET(0x1B97C8E0)
#define RPG_GAMECORE_FOURROTATEVOXELMAPINFOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97CBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelMapInfoConfig_TypeDefinitionIndex = 16090;

	class FourRotateVoxelMapInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID TitleText; // 0x10
		::RPG::Client::TextID LockDesc; // 0x20
		::System::UInt32 UnlockQuestID; // 0x30
		::System::UInt32 GetRewardQuestID; // 0x34
		::Il2CppArray<::System::String*>* FinishTargetGP; // 0x38
		::Il2CppArray<::System::String*>* FinishTargetGPTargetValue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMAPINFOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_06F41ED084E3C562(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FourRotateVoxelMapInfoConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FourRotateVoxelMapInfoConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMAPINFOCONFIG_METHOD_2_06F41ED084E3C562_OFFSET))(a1, a2);
		}
	};
}

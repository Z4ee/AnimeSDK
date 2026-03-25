#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF_METHOD_3_BD305AE5EC3351D3_OFFSET UNITYSDK_OFFSET(0x17587C50)
#define RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF_METHOD_3_F3C7C87B2DC1B1DA_OFFSET UNITYSDK_OFFSET(0x17587BD0)
#define RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x17587C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordUseAvatarGlobalBuff_TypeDefinitionIndex = 21649;

	class RecordUseAvatarGlobalBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MazeBuffID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3C7C87B2DC1B1DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordUseAvatarGlobalBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordUseAvatarGlobalBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF_METHOD_3_F3C7C87B2DC1B1DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD305AE5EC3351D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RecordUseAvatarGlobalBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RecordUseAvatarGlobalBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDUSEAVATARGLOBALBUFF_METHOD_3_BD305AE5EC3351D3_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETULTRASKILLASSETPRELOAD_METHOD_3_5654CD8CB3F1A609_OFFSET UNITYSDK_OFFSET(0x18E490E0)
#define RPG_GAMECORE_SETULTRASKILLASSETPRELOAD_METHOD_3_EBCDDAE1154636BF_OFFSET UNITYSDK_OFFSET(0x18E49000)
#define RPG_GAMECORE_SETULTRASKILLASSETPRELOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18E49040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetUltraSkillAssetPreload_TypeDefinitionIndex = 21712;

	class SetUltraSkillAssetPreload : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillName; // 0x20
		::RPG::GameCore::DynamicFloat* SkillTargetCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLASSETPRELOAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EBCDDAE1154636BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUltraSkillAssetPreload*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUltraSkillAssetPreload*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLASSETPRELOAD_METHOD_3_EBCDDAE1154636BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5654CD8CB3F1A609(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetUltraSkillAssetPreload* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetUltraSkillAssetPreload*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLASSETPRELOAD_METHOD_3_5654CD8CB3F1A609_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB_METHOD_3_D612920DA94DF269_OFFSET UNITYSDK_OFFSET(0x19A96240)
#define RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB_METHOD_3_F3B09E4B14605154_OFFSET UNITYSDK_OFFSET(0x19A960F0)
#define RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x19A961B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropRuntimeReplaceArtPrefab_TypeDefinitionIndex = 20944;

	class PropRuntimeReplaceArtPrefab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* Index; // 0x20
		::System::Boolean IsSyncLoad; // 0x28
		::System::Boolean ResetAnimator; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3B09E4B14605154(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropRuntimeReplaceArtPrefab*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRuntimeReplaceArtPrefab*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB_METHOD_3_F3B09E4B14605154_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D612920DA94DF269(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropRuntimeReplaceArtPrefab* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropRuntimeReplaceArtPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPRUNTIMEREPLACEARTPREFAB_METHOD_3_D612920DA94DF269_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ReadParamPosition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SKILLPARAMMAPPING_METHOD_2_82AA03DE7525152B_OFFSET UNITYSDK_OFFSET(0x19C8E700)
#define RPG_GAMECORE_SKILLPARAMMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8E8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillParamMapping_TypeDefinitionIndex = 17271;

	class SkillParamMapping : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ReadParamPosition>* DynamicValues; // 0x18
		::System::Boolean WriteStance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLPARAMMAPPING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_82AA03DE7525152B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillParamMapping*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillParamMapping*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLPARAMMAPPING_METHOD_2_82AA03DE7525152B_OFFSET))(a1, a2);
		}
	};
}

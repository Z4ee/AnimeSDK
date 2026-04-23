#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ServantConfig.h"

class Class_1_2CAAA2FDF9170110;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SERVANTOVERRIDECONFIG_METHOD_4_17C9D91BCCD5AAD3_OFFSET UNITYSDK_OFFSET(0x18E043A0)
#define RPG_GAMECORE_SERVANTOVERRIDECONFIG_METHOD_4_A3E6DEEF8E06EFDF_OFFSET UNITYSDK_OFFSET(0x18E06260)
#define RPG_GAMECORE_SERVANTOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E04370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantOverrideConfig_TypeDefinitionIndex = 15639;

	class ServantOverrideConfig : public ::RPG::GameCore::ServantConfig
	{
	public:
		::System::String* ParentConfigPath; // 0x248
		::Il2CppArray<::System::String*>* InheritSkillList; // 0x250
		::Il2CppArray<::System::String*>* ReplacedSkillList; // 0x258
		::Class_1_2CAAA2FDF9170110* AdditiveDynamicValues; // 0x260

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A3E6DEEF8E06EFDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTOVERRIDECONFIG_METHOD_4_A3E6DEEF8E06EFDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_17C9D91BCCD5AAD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantOverrideConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTOVERRIDECONFIG_METHOD_4_17C9D91BCCD5AAD3_OFFSET))(a1, a2);
		}
	};
}

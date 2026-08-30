#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ServantConfig.h"

class Class_1_1C30CE192ABE4C54;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SERVANTOVERRIDECONFIG_METHOD_4_17C9D91BCCD5AAD3_OFFSET UNITYSDK_OFFSET(0x1DB4DD80)
#define RPG_GAMECORE_SERVANTOVERRIDECONFIG_METHOD_4_EB901D234E8D349C_OFFSET UNITYSDK_OFFSET(0x1DB4FC90)
#define RPG_GAMECORE_SERVANTOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4DC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantOverrideConfig_TypeDefinitionIndex = 16349;

	class ServantOverrideConfig : public ::RPG::GameCore::ServantConfig
	{
	public:
		::System::String* ParentConfigPath; // 0x258
		::Il2CppArray<::System::String*>* InheritSkillList; // 0x260
		::Il2CppArray<::System::String*>* ReplacedSkillList; // 0x268
		::Class_1_1C30CE192ABE4C54* AdditiveDynamicValues; // 0x270

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EB901D234E8D349C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTOVERRIDECONFIG_METHOD_4_EB901D234E8D349C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_17C9D91BCCD5AAD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantOverrideConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTOVERRIDECONFIG_METHOD_4_17C9D91BCCD5AAD3_OFFSET))(a1, a2);
		}
	};
}

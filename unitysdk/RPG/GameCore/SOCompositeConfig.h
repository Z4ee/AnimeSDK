#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SOCOMPOSITECONFIG_METHOD_4_62E9EA3EAC06E59C_OFFSET UNITYSDK_OFFSET(0x19BFC160)
#define RPG_GAMECORE_SOCOMPOSITECONFIG_METHOD_4_7001ED897F8DF35A_OFFSET UNITYSDK_OFFSET(0x19BFB8E0)
#define RPG_GAMECORE_SOCOMPOSITECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFC3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SOCompositeConfig_TypeDefinitionIndex = 18930;

	class SOCompositeConfig : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* WaitMessages; // 0x18
		::System::Boolean CompleteAfterMessage; // 0x20
		::System::Boolean DisableLookAt; // 0x21
		::System::Boolean EnableTalk; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCOMPOSITECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7001ED897F8DF35A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SOCompositeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SOCompositeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCOMPOSITECONFIG_METHOD_4_7001ED897F8DF35A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_62E9EA3EAC06E59C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SOCompositeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SOCompositeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOCOMPOSITECONFIG_METHOD_4_62E9EA3EAC06E59C_OFFSET))(a1, a2);
		}
	};
}

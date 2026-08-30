#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FreeStyleState; }

#define RPG_GAMECORE_FREESTYLESTATECONFIG_METHOD_2_C6FBE8EDE389A2BA_OFFSET UNITYSDK_OFFSET(0x1D11ADB0)
#define RPG_GAMECORE_FREESTYLESTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11AEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleStateConfig_TypeDefinitionIndex = 16135;

	class FreeStyleStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleState*>* StateList; // 0x10
		::System::Single GlobalStartMotionExitNormalizedTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C6FBE8EDE389A2BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATECONFIG_METHOD_2_C6FBE8EDE389A2BA_OFFSET))(a1, a2);
		}
	};
}

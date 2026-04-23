#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropBuildinBehavior.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROPSTATECONFIG_METHOD_2_BD39DAD81E3B2045_OFFSET UNITYSDK_OFFSET(0x18C798C0)
#define RPG_GAMECORE_PROPSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C79CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateConfig_TypeDefinitionIndex = 16652;

	class PropStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropState State; // 0x10
		::System::String* AnimName; // 0x18
		::System::String* EffectAnimName; // 0x20
		::RPG::GameCore::PropBuildinBehavior Behavior; // 0x28
		::System::String* ButtonIcon; // 0x30
		::RPG::Client::TextID ButtonText; // 0x38
		::System::Boolean EnableHintEffect; // 0x48
		::System::Boolean CanPlayerLock; // 0x49
		::Il2CppArray<::System::String*>* UnlockableAnimStates; // 0x50
		::System::Boolean EnableBillboard; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BD39DAD81E3B2045(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECONFIG_METHOD_2_BD39DAD81E3B2045_OFFSET))(a1, a2);
		}
	};
}

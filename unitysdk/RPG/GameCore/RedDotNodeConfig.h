#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REDDOTNODECONFIG_METHOD_2_E2F8E4E924FCE758_OFFSET UNITYSDK_OFFSET(0x1DB7D870)
#define RPG_GAMECORE_REDDOTNODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7DB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotNodeConfig_TypeDefinitionIndex = 16899;

	class RedDotNodeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Key; // 0x10
		::System::UInt32 RedDotID; // 0x18
		::System::UInt32 UnlockID; // 0x1C
		::RPG::GameCore::RedDotType Type; // 0x20
		::System::Boolean HasInstanceKeys; // 0x24
		::Il2CppArray<::System::String*>* Children; // 0x28
		::Il2CppArray<::System::UInt32>* ChildWeights; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTNODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E2F8E4E924FCE758(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RedDotNodeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RedDotNodeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTNODECONFIG_METHOD_2_E2F8E4E924FCE758_OFFSET))(a1, a2);
		}
	};
}

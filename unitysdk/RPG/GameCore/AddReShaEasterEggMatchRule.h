#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropStateMatchConfig; }

#define RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_METHOD_3_0E2B7B38F31D1940_OFFSET UNITYSDK_OFFSET(0x16F202B0)
#define RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_METHOD_3_AEFA02796422F7F8_OFFSET UNITYSDK_OFFSET(0x16F20230)
#define RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F20280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddReShaEasterEggMatchRule_TypeDefinitionIndex = 20212;

	class AddReShaEasterEggMatchRule : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateMatchConfig*>* Conditions; // 0x18
		::System::Boolean IsLoop; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMatch; // 0x28
		::System::UInt32 RouteDisplayID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AEFA02796422F7F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaEasterEggMatchRule*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaEasterEggMatchRule*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_METHOD_3_AEFA02796422F7F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E2B7B38F31D1940(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaEasterEggMatchRule* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaEasterEggMatchRule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_METHOD_3_0E2B7B38F31D1940_OFFSET))(a1, a2);
		}
	};
}

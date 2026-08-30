#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PropStateMatchConfig; }

#define RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_METHOD_3_22D4E91DD6B19AAA_OFFSET UNITYSDK_OFFSET(0x1CDB5880)
#define RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_METHOD_3_3E49178CFC401627_OFFSET UNITYSDK_OFFSET(0x1CDB5840)
#define RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB5870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddReShaEasterEggMatchRule_TypeDefinitionIndex = 21787;

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

		static ::System::Void Method_3_3E49178CFC401627(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaEasterEggMatchRule*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaEasterEggMatchRule*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_METHOD_3_3E49178CFC401627_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_22D4E91DD6B19AAA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddReShaEasterEggMatchRule* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddReShaEasterEggMatchRule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_METHOD_3_22D4E91DD6B19AAA_OFFSET))(a1, a2);
		}
	};
}

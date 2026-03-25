#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER_METHOD_3_C6BDD5895A2AC880_OFFSET UNITYSDK_OFFSET(0x17582550)
#define RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER_METHOD_3_DEE1D2EB25944CB7_OFFSET UNITYSDK_OFFSET(0x175826A0)
#define RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x17582610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReShaEasterEggStateListener_TypeDefinitionIndex = 20208;

	class ReShaEasterEggStateListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6BDD5895A2AC880(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReShaEasterEggStateListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReShaEasterEggStateListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER_METHOD_3_C6BDD5895A2AC880_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DEE1D2EB25944CB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReShaEasterEggStateListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReShaEasterEggStateListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAEASTEREGGSTATELISTENER_METHOD_3_DEE1D2EB25944CB7_OFFSET))(a1, a2);
		}
	};
}

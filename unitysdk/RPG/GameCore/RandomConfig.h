#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompositeConfig.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_RANDOMCONFIG_METHOD_4_3373E8598E206E9F_OFFSET UNITYSDK_OFFSET(0x1D198F80)
#define RPG_GAMECORE_RANDOMCONFIG_METHOD_4_CF8B1D54EE470613_OFFSET UNITYSDK_OFFSET(0x1D1990D0)
#define RPG_GAMECORE_RANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D199040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomConfig_TypeDefinitionIndex = 23506;

	class RandomConfig : public ::RPG::GameCore::CompositeConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* OddsList; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20
		::RPG::GameCore::DynamicFloat* RandomCount; // 0x28
		::System::Boolean RandomUnique; // 0x30
		::System::Boolean ContinuousNotRepeat; // 0x31
		::System::String* RandomMaskKey; // 0x38
		::System::Boolean UseIntMask; // 0x40
		::System::Boolean AutoResetRandomMask; // 0x41
		::RPG::GameCore::TargetEvaluator* RandomMaskTarget; // 0x48
		::RPG::GameCore::DynamicValueContextScope RandomMaskScope; // 0x50
		::System::Int32 _LastRandomIndex; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3373E8598E206E9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMCONFIG_METHOD_4_3373E8598E206E9F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF8B1D54EE470613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMCONFIG_METHOD_4_CF8B1D54EE470613_OFFSET))(a1, a2);
		}
	};
}

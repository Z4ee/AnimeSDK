#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVWAITTICKVALUEFINISH_METHOD_3_A8C99AC848142328_OFFSET UNITYSDK_OFFSET(0x1CDDF1A0)
#define RPG_GAMECORE_ADVWAITTICKVALUEFINISH_METHOD_3_E8289C2DA782D115_OFFSET UNITYSDK_OFFSET(0x1CDDF100)
#define RPG_GAMECORE_ADVWAITTICKVALUEFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDF160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvWaitTickValueFinish_TypeDefinitionIndex = 20790;

	class AdvWaitTickValueFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::DynamicString* ConfigName; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinishCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITTICKVALUEFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E8289C2DA782D115(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitTickValueFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitTickValueFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITTICKVALUEFINISH_METHOD_3_E8289C2DA782D115_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A8C99AC848142328(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvWaitTickValueFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvWaitTickValueFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVWAITTICKVALUEFINISH_METHOD_3_A8C99AC848142328_OFFSET))(a1, a2);
		}
	};
}

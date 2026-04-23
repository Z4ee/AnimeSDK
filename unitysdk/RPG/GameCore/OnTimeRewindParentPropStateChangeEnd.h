#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_METHOD_3_37E4C4BA8EBF3CF8_OFFSET UNITYSDK_OFFSET(0x18BC4A60)
#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_METHOD_3_C22EDB407C658AA7_OFFSET UNITYSDK_OFFSET(0x18BC49E0)
#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC4A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnTimeRewindParentPropStateChangeEnd_TypeDefinitionIndex = 19623;

	class OnTimeRewindParentPropStateChangeEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x20
		::System::Boolean IsLoop; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C22EDB407C658AA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_METHOD_3_C22EDB407C658AA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37E4C4BA8EBF3CF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_METHOD_3_37E4C4BA8EBF3CF8_OFFSET))(a1, a2);
		}
	};
}

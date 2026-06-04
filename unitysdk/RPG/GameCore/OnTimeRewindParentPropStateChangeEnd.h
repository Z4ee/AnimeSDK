#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_METHOD_3_0C6EF7266D5688E6_OFFSET UNITYSDK_OFFSET(0x199D6530)
#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_METHOD_3_36F40AA97B48268F_OFFSET UNITYSDK_OFFSET(0x199D65B0)
#define RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x199D6580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnTimeRewindParentPropStateChangeEnd_TypeDefinitionIndex = 19510;

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

		static ::System::Void Method_3_0C6EF7266D5688E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_METHOD_3_0C6EF7266D5688E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36F40AA97B48268F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONTIMEREWINDPARENTPROPSTATECHANGEEND_METHOD_3_36F40AA97B48268F_OFFSET))(a1, a2);
		}
	};
}

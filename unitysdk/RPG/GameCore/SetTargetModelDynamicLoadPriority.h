#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_METHOD_3_0B659CC3BCE64D62_OFFSET UNITYSDK_OFFSET(0x176E2780)
#define RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_METHOD_3_BD63B536175EDB71_OFFSET UNITYSDK_OFFSET(0x176E2800)
#define RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x176E27D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetModelDynamicLoadPriority_TypeDefinitionIndex = 21186;

	class SetTargetModelDynamicLoadPriority : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* PriorityKey; // 0x20
		::System::Boolean Active; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B659CC3BCE64D62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetModelDynamicLoadPriority*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetModelDynamicLoadPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_METHOD_3_0B659CC3BCE64D62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD63B536175EDB71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetModelDynamicLoadPriority* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetModelDynamicLoadPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_METHOD_3_BD63B536175EDB71_OFFSET))(a1, a2);
		}
	};
}

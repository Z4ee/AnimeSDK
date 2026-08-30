#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_METHOD_3_01C5F751881F174C_OFFSET UNITYSDK_OFFSET(0x1D511640)
#define RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_METHOD_3_BD63B536175EDB71_OFFSET UNITYSDK_OFFSET(0x1D511690)
#define RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D511680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetModelDynamicLoadPriority_TypeDefinitionIndex = 22723;

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

		static ::System::Void Method_3_01C5F751881F174C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetModelDynamicLoadPriority*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetModelDynamicLoadPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_METHOD_3_01C5F751881F174C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD63B536175EDB71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetModelDynamicLoadPriority* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetModelDynamicLoadPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETMODELDYNAMICLOADPRIORITY_METHOD_3_BD63B536175EDB71_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_METHOD_3_454116F7C855C1DC_OFFSET UNITYSDK_OFFSET(0x1D510C20)
#define RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_METHOD_3_4BE3BC9AB6CE0BB9_OFFSET UNITYSDK_OFFSET(0x1D510BE0)
#define RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D510C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetDamageTextVisible_TypeDefinitionIndex = 22953;

	class SetTargetDamageTextVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Visible; // 0x20
		::System::String* UniqueName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4BE3BC9AB6CE0BB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetDamageTextVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetDamageTextVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_METHOD_3_4BE3BC9AB6CE0BB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_454116F7C855C1DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetDamageTextVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetDamageTextVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDAMAGETEXTVISIBLE_METHOD_3_454116F7C855C1DC_OFFSET))(a1, a2);
		}
	};
}

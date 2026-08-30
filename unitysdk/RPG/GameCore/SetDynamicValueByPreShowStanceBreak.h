#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/PreShowStanceCheckType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK_METHOD_3_13AA3CD97544CCF7_OFFSET UNITYSDK_OFFSET(0x1D4F49E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK_METHOD_3_75844F2EE903EA72_OFFSET UNITYSDK_OFFSET(0x1D4F49A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F49D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByPreShowStanceBreak_TypeDefinitionIndex = 23416;

	class SetDynamicValueByPreShowStanceBreak : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillCaster; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30
		::RPG::GameCore::PreShowStanceCheckType CheckType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_75844F2EE903EA72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK_METHOD_3_75844F2EE903EA72_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_13AA3CD97544CCF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK_METHOD_3_13AA3CD97544CCF7_OFFSET))(a1, a2);
		}
	};
}

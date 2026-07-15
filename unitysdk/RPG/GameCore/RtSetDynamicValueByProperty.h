#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_RTSETDYNAMICVALUEBYPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1B768F30)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYPROPERTY_METHOD_4_351FE7D0C9C2BA78_OFFSET UNITYSDK_OFFSET(0x1B768D40)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYPROPERTY_METHOD_4_F60A11A9A50404D9_OFFSET UNITYSDK_OFFSET(0x1B768D00)
#define RPG_GAMECORE_RTSETDYNAMICVALUEBYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B768D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSetDynamicValueByProperty_TypeDefinitionIndex = 23356;

	class RtSetDynamicValueByProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::RtAbilityProperty Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F60A11A9A50404D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSetDynamicValueByProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSetDynamicValueByProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYPROPERTY_METHOD_4_F60A11A9A50404D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_351FE7D0C9C2BA78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSetDynamicValueByProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSetDynamicValueByProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYPROPERTY_METHOD_4_351FE7D0C9C2BA78_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSETDYNAMICVALUEBYPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

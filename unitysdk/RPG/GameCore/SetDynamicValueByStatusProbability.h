#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C5B90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_METHOD_4_8CFCF349DB68D634_OFFSET UNITYSDK_OFFSET(0x176C59A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_METHOD_4_97C3D9DABA1FD510_OFFSET UNITYSDK_OFFSET(0x176C58D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x176C5950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStatusProbability_TypeDefinitionIndex = 21818;

	class SetDynamicValueByStatusProbability : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::ModifierBehaviorFlag Flag; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_97C3D9DABA1FD510(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatusProbability*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatusProbability*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_METHOD_4_97C3D9DABA1FD510_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CFCF349DB68D634(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatusProbability* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatusProbability*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_METHOD_4_8CFCF349DB68D634_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

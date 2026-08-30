#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E823CE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_METHOD_4_8CFCF349DB68D634_OFFSET UNITYSDK_OFFSET(0x1E823AF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_METHOD_4_F9476E49AC54B635_OFFSET UNITYSDK_OFFSET(0x1E823AB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E823AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStatusProbability_TypeDefinitionIndex = 23313;

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

		static ::System::Void Method_4_F9476E49AC54B635(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByStatusProbability*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByStatusProbability*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTATUSPROBABILITY_METHOD_4_F9476E49AC54B635_OFFSET))(a1, a2);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/WeaknessFilterType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4F9430)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_METHOD_4_11BD17AF33A44AE9_OFFSET UNITYSDK_OFFSET(0x1D4F91F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_METHOD_4_4C34D1504D2F4348_OFFSET UNITYSDK_OFFSET(0x1D4F9240)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F9230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByWeakness_TypeDefinitionIndex = 22857;

	class SetDynamicValueByWeakness : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::WeaknessFilterType WeaknessFilter; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_11BD17AF33A44AE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWeakness*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWeakness*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_METHOD_4_11BD17AF33A44AE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4C34D1504D2F4348(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWeakness* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_METHOD_4_4C34D1504D2F4348_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWEAKNESS_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

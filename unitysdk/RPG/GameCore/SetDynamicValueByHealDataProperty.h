#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/HealDataPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYHEALDATAPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4F27B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHEALDATAPROPERTY_METHOD_4_4008903A8D33DC25_OFFSET UNITYSDK_OFFSET(0x1D4F2580)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHEALDATAPROPERTY_METHOD_4_F7F98BCC1E4B66A4_OFFSET UNITYSDK_OFFSET(0x1D4F25C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHEALDATAPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F25B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByHealDataProperty_TypeDefinitionIndex = 23325;

	class SetDynamicValueByHealDataProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::HealDataPropertyType Property; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHEALDATAPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4008903A8D33DC25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHealDataProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHealDataProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHEALDATAPROPERTY_METHOD_4_4008903A8D33DC25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F7F98BCC1E4B66A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHealDataProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHealDataProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHEALDATAPROPERTY_METHOD_4_F7F98BCC1E4B66A4_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHEALDATAPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

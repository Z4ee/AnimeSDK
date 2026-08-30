#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/GridFightEquipMask.h"
#include "unitysdk/RPG/GameCore/GridFightPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4F1280)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_METHOD_4_16DDF66DE892ABCF_OFFSET UNITYSDK_OFFSET(0x1D4F0FC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_METHOD_4_E86E8FBE4AE07F52_OFFSET UNITYSDK_OFFSET(0x1D4F1010)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F1000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByGridFightProperty_TypeDefinitionIndex = 22280;

	class SetDynamicValueByGridFightProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::GridFightPropertyType PropertyType; // 0x30
		::RPG::GameCore::GridFightEquipMask EquipMask; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_16DDF66DE892ABCF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_METHOD_4_16DDF66DE892ABCF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E86E8FBE4AE07F52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_METHOD_4_E86E8FBE4AE07F52_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

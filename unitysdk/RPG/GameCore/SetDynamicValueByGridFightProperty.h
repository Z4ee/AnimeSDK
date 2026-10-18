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

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA77B00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_METHOD_4_42032700C92A4FE6_OFFSET UNITYSDK_OFFSET(0x1DA77870)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_METHOD_4_976EBAE0BE9DBA5B_OFFSET UNITYSDK_OFFSET(0x1DA778C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA778B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByGridFightProperty_TypeDefinitionIndex = 22529;

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

		static ::System::Void Method_4_42032700C92A4FE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_METHOD_4_42032700C92A4FE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_976EBAE0BE9DBA5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_METHOD_4_976EBAE0BE9DBA5B_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

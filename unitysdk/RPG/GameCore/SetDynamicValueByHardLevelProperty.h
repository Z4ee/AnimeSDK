#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYHARDLEVELPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E22B90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHARDLEVELPROPERTY_METHOD_4_9F542E81DF93BDFB_OFFSET UNITYSDK_OFFSET(0x18E229A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHARDLEVELPROPERTY_METHOD_4_CAD668698804C0A3_OFFSET UNITYSDK_OFFSET(0x18E228D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHARDLEVELPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18E22950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByHardLevelProperty_TypeDefinitionIndex = 22569;

	class SetDynamicValueByHardLevelProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* Property; // 0x20
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHARDLEVELPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CAD668698804C0A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHardLevelProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHardLevelProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHARDLEVELPROPERTY_METHOD_4_CAD668698804C0A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9F542E81DF93BDFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByHardLevelProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByHardLevelProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHARDLEVELPROPERTY_METHOD_4_9F542E81DF93BDFB_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHARDLEVELPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

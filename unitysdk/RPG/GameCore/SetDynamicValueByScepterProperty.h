#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19C44620)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_METHOD_4_5A7B9659C89E2815_OFFSET UNITYSDK_OFFSET(0x19C44330)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_METHOD_4_F167C60CACD40235_OFFSET UNITYSDK_OFFSET(0x19C44400)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19C443B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByScepterProperty_TypeDefinitionIndex = 21850;

	class SetDynamicValueByScepterProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::RogueMagicScepterPropertyType Value; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5A7B9659C89E2815(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByScepterProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByScepterProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_METHOD_4_5A7B9659C89E2815_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F167C60CACD40235(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByScepterProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByScepterProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_METHOD_4_F167C60CACD40235_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

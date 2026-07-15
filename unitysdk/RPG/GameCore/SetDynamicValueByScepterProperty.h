#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C5F0B60)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_METHOD_4_639A51CCF6998DA8_OFFSET UNITYSDK_OFFSET(0x1C5F0900)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_METHOD_4_F167C60CACD40235_OFFSET UNITYSDK_OFFSET(0x1C5F0940)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F0930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByScepterProperty_TypeDefinitionIndex = 22277;

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

		static ::System::Void Method_4_639A51CCF6998DA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByScepterProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByScepterProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSCEPTERPROPERTY_METHOD_4_639A51CCF6998DA8_OFFSET))(a1, a2);
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

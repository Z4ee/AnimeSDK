#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUS_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E21850)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUS_METHOD_4_D11939EAEC5CDBBA_OFFSET UNITYSDK_OFFSET(0x18E214C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUS_METHOD_4_D94A1F342EBE4959_OFFSET UNITYSDK_OFFSET(0x18E21590)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUS__CTOR_OFFSET UNITYSDK_OFFSET(0x18E21540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByGridFightTraitBonus_TypeDefinitionIndex = 21419;

	class SetDynamicValueByGridFightTraitBonus : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::System::UInt32 TraitID; // 0x2C
		::RPG::GameCore::GridFightTraitBonusType TraitBonusType; // 0x30
		::RPG::GameCore::DynamicFloat* TraitBonusLayer; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D11939EAEC5CDBBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonus*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonus*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUS_METHOD_4_D11939EAEC5CDBBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D94A1F342EBE4959(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonus* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUS_METHOD_4_D94A1F342EBE4959_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUS_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

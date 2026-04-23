#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSCURRENTLAYER_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E21B90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSCURRENTLAYER_METHOD_4_0D7D8EA3BC6CE9B2_OFFSET UNITYSDK_OFFSET(0x18E21930)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSCURRENTLAYER_METHOD_4_416404B035A6E770_OFFSET UNITYSDK_OFFSET(0x18E21860)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSCURRENTLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E218E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByGridFightTraitBonusCurrentLayer_TypeDefinitionIndex = 21418;

	class SetDynamicValueByGridFightTraitBonusCurrentLayer : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::System::UInt32 TraitID; // 0x2C
		::RPG::GameCore::GridFightTraitBonusType TraitBonusType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSCURRENTLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_416404B035A6E770(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusCurrentLayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusCurrentLayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSCURRENTLAYER_METHOD_4_416404B035A6E770_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D7D8EA3BC6CE9B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusCurrentLayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusCurrentLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSCURRENTLAYER_METHOD_4_0D7D8EA3BC6CE9B2_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTTRAITBONUSCURRENTLAYER_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADDADVENTUREMODIFIER_METHOD_3_2F909BE83A0AFD50_OFFSET UNITYSDK_OFFSET(0x1BE03AC0)
#define RPG_GAMECORE_ADDADVENTUREMODIFIER_METHOD_3_D6F7D2A623CC3B15_OFFSET UNITYSDK_OFFSET(0x1BE03B00)
#define RPG_GAMECORE_ADDADVENTUREMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE03AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddAdventureModifier_TypeDefinitionIndex = 19643;

	class AddAdventureModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* Caster; // 0x20
		::System::String* ModifierName; // 0x28
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x30
		::RPG::GameCore::DynamicFloat* Count; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDADVENTUREMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F909BE83A0AFD50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddAdventureModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddAdventureModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDADVENTUREMODIFIER_METHOD_3_2F909BE83A0AFD50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D6F7D2A623CC3B15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddAdventureModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDADVENTUREMODIFIER_METHOD_3_D6F7D2A623CC3B15_OFFSET))(a1, a2);
		}
	};
}

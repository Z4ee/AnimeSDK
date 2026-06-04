#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVENTUREREVIVEPLAYER_METHOD_3_049629813FFA59B7_OFFSET UNITYSDK_OFFSET(0x194532B0)
#define RPG_GAMECORE_ADVENTUREREVIVEPLAYER_METHOD_3_8814404778A10041_OFFSET UNITYSDK_OFFSET(0x19453330)
#define RPG_GAMECORE_ADVENTUREREVIVEPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x19453300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureRevivePlayer_TypeDefinitionIndex = 20532;

	class AdventureRevivePlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RevivedHPRatio; // 0x18
		::RPG::GameCore::DynamicFloat* RevivedSPRatio; // 0x20
		::RPG::GameCore::TargetEvaluator* SpecifyTargetType; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* TargetType; // 0x30
		::System::Boolean ClientUseGMCommand; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREVIVEPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_049629813FFA59B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureRevivePlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureRevivePlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREVIVEPLAYER_METHOD_3_049629813FFA59B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8814404778A10041(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureRevivePlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureRevivePlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREREVIVEPLAYER_METHOD_3_8814404778A10041_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB780C80)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB780CC0)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__REFRESHFORMATIONINCAMERASPACE_B__181_0_OFFSET UNITYSDK_OFFSET(0xB780CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent___c_TypeDefinitionIndex = 53206;

	class TeamFormationComponent___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single>>** StaticGet___9__181_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(TeamFormationComponent___c_TypeDefinitionIndex)->GetStaticField(0x60610);
		}
		static ::RPG::GameCore::TeamFormationComponent___c** StaticGet___9()
		{
			return (::RPG::GameCore::TeamFormationComponent___c**)Il2CppClass::FromTypeDefinitionIndex(TeamFormationComponent___c_TypeDefinitionIndex)->GetStaticField(0x60618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshFormationInCameraSpace_b__181_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single> x, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single> y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single>, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__REFRESHFORMATIONINCAMERASPACE_B__181_0_OFFSET))(this, x, y);
		}
	};
}

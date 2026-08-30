#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE747210)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE747250)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__REFRESHFORMATIONINCAMERASPACE_B__185_0_OFFSET UNITYSDK_OFFSET(0xE747260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent___c_TypeDefinitionIndex = 57864;

	class TeamFormationComponent___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TeamFormationComponent___c** StaticGet___9()
		{
			return (::RPG::GameCore::TeamFormationComponent___c**)Il2CppClass::FromTypeDefinitionIndex(TeamFormationComponent___c_TypeDefinitionIndex)->GetStaticField(0x182D0);
		}
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single>>** StaticGet___9__185_0()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(TeamFormationComponent___c_TypeDefinitionIndex)->GetStaticField(0x182D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshFormationInCameraSpace_b__185_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single> a1, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single>, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::GameEntity*, ::System::Single>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT___C__REFRESHFORMATIONINCAMERASPACE_B__185_0_OFFSET))(this, a1, a2);
		}
	};
}

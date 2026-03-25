#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleEffectLifeTimeType.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0x99927D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9992240)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_LITTLEGAMETICK_OFFSET UNITYSDK_OFFSET(0x9992810)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_METHOD_6_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x9992870)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9992910)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_METHOD_6_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x9992950)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99928D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_REGISTEREFFECTLIFETIME_OFFSET UNITYSDK_OFFSET(0x9992990)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_RELEASEEFFECTBYLIFETIME_OFFSET UNITYSDK_OFFSET(0x99924D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x99923D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x998F8A0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingGameView_TypeDefinitionIndex = 63429;

	class ChenLingGameView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::Class_2_E9C9AAD7C711B3E3* Field_6_0; // 0x20
		::Class_3_543326C044264182* Field_6_1; // 0x28
		::Class_2_181A7F9409C60DBC* Field_6_2; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_6_3; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingBattleEffectLifeTimeType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* Field_6_4; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_GETENTITY_OFFSET))(this);
		}

		::System::Void LittleGameTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_LITTLEGAMETICK_OFFSET))(this, a1);
		}

		::System::Void Method_6_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_METHOD_6_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_METHOD_6_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void RegisterEffectLifeTime(::RPG::GameCore::ChenLingBattleEffectLifeTimeType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_REGISTEREFFECTLIFETIME_OFFSET))(this, a1, a2);
		}

		::System::Void ReleaseEffectByLifeTime(::RPG::GameCore::ChenLingBattleEffectLifeTimeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEVIEW_RELEASEEFFECTBYLIFETIME_OFFSET))(this, a1);
		}
	};
}

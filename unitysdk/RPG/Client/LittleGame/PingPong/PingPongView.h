#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_1152250B69783505;
class Class_2_921296CE04546AF9;
class Class_3_99BC749707F2A8AC;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0x9A38D40)
#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9A38BB0)
#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x9A38CA0)
#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9A38A90)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongView_TypeDefinitionIndex = 62441;

	class PingPongView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::Class_2_1152250B69783505* Field_6_0; // 0x20
		::Class_3_99BC749707F2A8AC* Field_6_1; // 0x28
		::Class_2_921296CE04546AF9* Field_6_2; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_GETENTITY_OFFSET))(this);
		}
	};
}

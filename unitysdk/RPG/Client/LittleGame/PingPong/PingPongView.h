#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_1152250B69783505;
class Class_2_17EDF3520C9FC3DE;
class Class_3_89DDDD327D710B05;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xBE36B80)
#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBE369E0)
#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xBE36AE0)
#define RPG_CLIENT_LITTLEGAME_PINGPONG_PINGPONGVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBE368C0)

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int PingPongView_TypeDefinitionIndex = 71256;

	class PingPongView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::Class_2_1152250B69783505* Field_6_0; // 0x20
		::Class_3_89DDDD327D710B05* Field_6_1; // 0x28
		::Class_2_17EDF3520C9FC3DE* Field_6_2; // 0x30

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

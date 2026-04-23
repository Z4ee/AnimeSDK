#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_15E317187C4E8254;
class Class_2_C8461ACA8308A704_1;
class Class_3_626F93E2306641CC;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0xA679BD0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GET_SHADERCOMP_OFFSET UNITYSDK_OFFSET(0xA6798B0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA679AC0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xA6786D0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_SETDITHERWITHANIM_OFFSET UNITYSDK_OFFSET(0xA679970)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xA677260)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceMonoView_TypeDefinitionIndex = 71653;

	class CakeRaceMonoView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::RPG::Client::BaseShaderPropertyTransition* _ShaderComp; // 0x20
		::Class_2_C8461ACA8308A704_1* _Context; // 0x28
		::Class_3_626F93E2306641CC* _Services; // 0x30
		::Class_2_15E317187C4E8254* _Entity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::BaseShaderPropertyTransition* get_ShaderComp()
		{
			return ((::RPG::Client::BaseShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GET_SHADERCOMP_OFFSET))(this);
		}

		::System::Void SetDitherWithAnim(::System::Single fDitherAlpha, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_SETDITHERWITHANIM_OFFSET))(this, fDitherAlpha, duration);
		}

		::System::Void Initialize(::Entitas::IContext* context, ::Class_1_47EE63CB5C4DC8FC_5* services, ::Entitas::IEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_INITIALIZE_OFFSET))(this, context, services, entity);
		}

		::System::Void Release(::System::String* asset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_RELEASE_OFFSET))(this, asset);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GETENTITY_OFFSET))(this);
		}
	};
}

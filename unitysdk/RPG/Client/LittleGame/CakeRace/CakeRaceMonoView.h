#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_46FD925988407D1E;
class Class_2_C8461ACA8308A704_2;
class Class_3_FA020C2C23A72B3F;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1C4CAF40)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GET_SHADERCOMP_OFFSET UNITYSDK_OFFSET(0x1C4CAC20)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C4CAE20)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C4C9AF0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_SETDITHERWITHANIM_OFFSET UNITYSDK_OFFSET(0x1C4CACD0)
#define RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C8870)

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceMonoView_TypeDefinitionIndex = 77684;

	class CakeRaceMonoView : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::RPG::Client::BaseShaderPropertyTransition* _ShaderComp; // 0x20
		::Class_2_C8461ACA8308A704_2* _Context; // 0x28
		::Class_3_FA020C2C23A72B3F* _Services; // 0x30
		::Class_2_46FD925988407D1E* _Entity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::BaseShaderPropertyTransition* get_ShaderComp()
		{
			return ((::RPG::Client::BaseShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GET_SHADERCOMP_OFFSET))(this);
		}

		::System::Void SetDitherWithAnim(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_SETDITHERWITHANIM_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CAKERACE_CAKERACEMONOVIEW_GETENTITY_OFFSET))(this);
		}
	};
}

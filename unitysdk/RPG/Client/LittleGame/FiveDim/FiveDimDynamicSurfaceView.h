#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD4DAE40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_METHOD_7_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xD4DAEC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xD4DB0E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD4DB1C0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimDynamicSurfaceView_TypeDefinitionIndex = 76702;

	class FiveDimDynamicSurfaceView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::UnityEngine::Vector3 EIKLCFAGEKP; // 0x208
		::UnityEngine::Vector3 EJLBICDOEPN; // 0x214
		::System::Boolean PENFGOBENKH; // 0x220
		::UnityEngine::BoxCollider* SurfaceCollider; // 0x228

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Method_7_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_METHOD_7_D7852DE078ACC1F1_OFFSET))(this);
		}
	};
}

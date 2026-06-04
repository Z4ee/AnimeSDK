#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBDF26E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_METHOD_7_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xBDF2930)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0xBDF2AD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBDF2FA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW___IFIXBASEPROXY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBDF2FC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0xBDF2FD0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimDynamicSurfaceView_TypeDefinitionIndex = 71700;

	class FiveDimDynamicSurfaceView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::UnityEngine::Vector3 Field_7_0; // 0x1D0
		::System::Boolean Field_7_1; // 0x1DC
		::UnityEngine::BoxCollider* SurfaceCollider; // 0x1E0

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

		::System::Void Method_7_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW_METHOD_7_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW___IFIXBASEPROXY_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICSURFACEVIEW___IFIXBASEPROXY_RELEASE_OFFSET))(this, a1);
		}
	};
}

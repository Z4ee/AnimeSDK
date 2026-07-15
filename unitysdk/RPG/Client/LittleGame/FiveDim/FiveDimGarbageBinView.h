#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropView.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_GETVIEWBOUND_OFFSET UNITYSDK_OFFSET(0x189F4100)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x189F3B40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_METHOD_8_175872DEECEEDC6A_OFFSET UNITYSDK_OFFSET(0x189F3D20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_METHOD_8_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x189F4240)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x189F3EF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x189F4330)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGarbageBinView_TypeDefinitionIndex = 73229;

	class FiveDimGarbageBinView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropView
	{
	public:
		::UnityEngine::BoxCollider* GarbageBinMainCollider; // 0x1D0
		::UnityEngine::Vector3 Field_8_1; // 0x1D8
		::UnityEngine::Vector3 Field_8_2; // 0x1E4
		::System::Boolean Field_8_3; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Boolean GetViewBound(::UnityEngine::Bounds& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_GETVIEWBOUND_OFFSET))(this, a1);
		}

		::System::Void Method_8_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_METHOD_8_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_8_175872DEECEEDC6A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_METHOD_8_175872DEECEEDC6A_OFFSET))(this, a1);
		}
	};
}

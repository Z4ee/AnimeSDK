#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropView.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class CapsuleCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x189FBD00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x189FBF90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x189FC080)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMissileView_TypeDefinitionIndex = 73239;

	class FiveDimMissileView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropView
	{
	public:
		::UnityEngine::CapsuleCollider* MissileCollider; // 0x1D0
		::UnityEngine::Vector2 Field_8_1; // 0x1D8
		::UnityEngine::Vector3 Field_8_2; // 0x1E0
		::System::Boolean Field_8_3; // 0x1EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMISSILEVIEW_RELEASE_OFFSET))(this, a1);
		}
	};
}

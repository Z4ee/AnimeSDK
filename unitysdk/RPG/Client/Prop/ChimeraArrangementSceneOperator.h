#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::Prop { class ChimeraArrangementModelInstance; }
namespace RPG::Client::Prop { class ChimeraArrangementSlot; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSCENEOPERATOR_GETPOINTEDSLOT_OFFSET UNITYSDK_OFFSET(0xC4F4730)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSCENEOPERATOR_MOVEBYDRAG_OFFSET UNITYSDK_OFFSET(0xC4F4CA0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSCENEOPERATOR_RAISETODRAGPLANE_OFFSET UNITYSDK_OFFSET(0xC4F4F90)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSCENEOPERATOR_SETLAYERASDEFAULTRECURSIVELY_OFFSET UNITYSDK_OFFSET(0xC4F51C0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSCENEOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC4F5260)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementSceneOperator_TypeDefinitionIndex = 72976;

	class ChimeraArrangementSceneOperator : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::RaycastHit>* _RaycastHits; // 0x10
		::System::Single RaycastZ; // 0x18
		::System::Single DragZ; // 0x1C
		::System::Single DragScale; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSCENEOPERATOR__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraArrangementSlot* GetPointedSlot(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::Client::Prop::ChimeraArrangementSlot*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSCENEOPERATOR_GETPOINTEDSLOT_OFFSET))(this, a1);
		}

		::System::Void MoveByDrag(::RPG::Client::Prop::ChimeraArrangementModelInstance* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSCENEOPERATOR_MOVEBYDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void RaiseToDragPlane(::RPG::Client::Prop::ChimeraArrangementModelInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSCENEOPERATOR_RAISETODRAGPLANE_OFFSET))(this, a1);
		}

		::System::Void SetLayerAsDefaultRecursively(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSCENEOPERATOR_SETLAYERASDEFAULTRECURSIVELY_OFFSET))(this, a1);
		}
	};
}

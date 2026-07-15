#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8A6989C352B0F0F0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FLIPDEVICEPOINT_GETPROPSTATE_OFFSET UNITYSDK_OFFSET(0x16D10730)
#define RPG_CLIENT_FLIPDEVICEPOINT_GET_ADDDISTANCE_OFFSET UNITYSDK_OFFSET(0x16D10710)
#define RPG_CLIENT_FLIPDEVICEPOINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x16D10EE0)
#define RPG_CLIENT_FLIPDEVICEPOINT_GET_PROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16D10EC0)
#define RPG_CLIENT_FLIPDEVICEPOINT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x16D11050)
#define RPG_CLIENT_FLIPDEVICEPOINT_GET_UIWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x16D10F90)
#define RPG_CLIENT_FLIPDEVICEPOINT_MAKESTATIC_OFFSET UNITYSDK_OFFSET(0x16D107C0)
#define RPG_CLIENT_FLIPDEVICEPOINT_ONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x16D10810)
#define RPG_CLIENT_FLIPDEVICEPOINT_SET_ADDDISTANCE_OFFSET UNITYSDK_OFFSET(0x16D10720)
#define RPG_CLIENT_FLIPDEVICEPOINT_SET_PROPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x16D10ED0)
#define RPG_CLIENT_FLIPDEVICEPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D0FD70)
#define RPG_CLIENT_FLIPDEVICEPOINT__REFRESHSTREAMINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x16D10BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FlipDevicePoint_TypeDefinitionIndex = 69963;

	class FlipDevicePoint : public ::System::Object
	{
	public:
		// static const ::System::String* AddDistanceKey; // 0x0
		// static const ::System::String* UIPointProxyPropKey; // 0x0
		// static const ::System::String* AffectedStageItemsKey; // 0x0
		// static const ::System::String* AffectedGroupsKey; // 0x0
		::RPG::GameCore::GameEntity* UIPointProxyPropEntity; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::EraStateType>>* AffectedStageItems; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* MappingProps; // 0x20
		::RPG::GameCore::GameEntity* GameEntity; // 0x28
		::RPG::GameCore::PropComponent* _PropComponent_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* AffectedGroups; // 0x38
		::System::Boolean _IsStatic; // 0x40
		::UnityEngine::Vector3 _UIPosition; // 0x44
		::System::Single _Radius; // 0x50
		::UnityEngine::Vector3 _Position; // 0x54
		::System::Single _AddDistance_k__BackingField; // 0x60

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_AddDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT_GET_ADDDISTANCE_OFFSET))(this);
		}

		::System::Void set_AddDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT_SET_ADDDISTANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropState GetPropState()
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT_GETPROPSTATE_OFFSET))(this);
		}

		::System::Void MakeStatic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT_MAKESTATIC_OFFSET))(this, a1);
		}

		::System::Void OnStateChange(::RPG::GameCore::EraStateType a1, ::RPG::GameCore::PropState a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraStateType, ::RPG::GameCore::PropState, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT_ONSTATECHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshStreamingInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT__REFRESHSTREAMINGINSTANCE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PropComponent* get_PropComponent()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT_GET_PROPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_PropComponent(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT_SET_PROPCOMPONENT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_UIWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT_GET_UIWORLDPOSITION_OFFSET))(this);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPDEVICEPOINT_GET_RADIUS_OFFSET))(this);
		}
	};
}

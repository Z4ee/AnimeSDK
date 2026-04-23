#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DeployPuzzleStoneState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_GETCURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0xADF76D0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_GET_ATTACHEDBASEPOINTPROPID_OFFSET UNITYSDK_OFFSET(0xADF98B0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_GET_PROPID_OFFSET UNITYSDK_OFFSET(0xADF9890)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_METHOD_5_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xADF9840)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_ONPUZZLEDESTROY_OFFSET UNITYSDK_OFFSET(0xADF6D40)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_ONPUZZLEFINISHED_OFFSET UNITYSDK_OFFSET(0xADF6BB0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_ONRESET_OFFSET UNITYSDK_OFFSET(0xADF5270)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_PICKUPFROMBASEPOINT_OFFSET UNITYSDK_OFFSET(0xADF90A0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_PLACETOBASEPOINT_OFFSET UNITYSDK_OFFSET(0xADF52F0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_SET_ATTACHEDBASEPOINTPROPID_OFFSET UNITYSDK_OFFSET(0xADF98C0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_SET_PROPID_OFFSET UNITYSDK_OFFSET(0xADF98A0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLESTONE__CTOR_OFFSET UNITYSDK_OFFSET(0xADF98D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleStone_TypeDefinitionIndex = 72033;

	class DeployPuzzleStone : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 _PropID_k__BackingField; // 0x18
		::System::UInt32 _AttachedBasePointPropID_k__BackingField; // 0x1C
		::RPG::Client::Prop::DeployPuzzleStoneState Field_5_2; // 0x20
		::RPG::Client::Prop::DeployPuzzleBoard* Field_5_3; // 0x28
		::RPG::GameCore::GameEntity* Field_5_4; // 0x30
		::RPG::GameCore::PropComponent* Field_5_5; // 0x38
		::System::UInt32 Field_5_6; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE__CTOR_OFFSET))(this);
		}

		::System::Void OnReset(::System::UInt32 a1, ::RPG::Client::Prop::DeployPuzzleBoard* a2, ::RPG::GameCore::PropComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Prop::DeployPuzzleBoard*, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_ONRESET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlaceToBasePoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_PLACETOBASEPOINT_OFFSET))(this, a1);
		}

		::System::Void PickupFromBasePoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_PICKUPFROMBASEPOINT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCurrentPosition(::System::Boolean a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_GETCURRENTPOSITION_OFFSET))(this, a1);
		}

		::System::Void OnPuzzleFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_ONPUZZLEFINISHED_OFFSET))(this);
		}

		::System::Void OnPuzzleDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_ONPUZZLEDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_6E57D3559C10FFA9(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_METHOD_5_6E57D3559C10FFA9_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_GET_PROPID_OFFSET))(this);
		}

		::System::Void set_PropID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_SET_PROPID_OFFSET))(this, value);
		}

		::System::UInt32 get_AttachedBasePointPropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_GET_ATTACHEDBASEPOINTPROPID_OFFSET))(this);
		}

		::System::Void set_AttachedBasePointPropID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLESTONE_SET_ATTACHEDBASEPOINTPROPID_OFFSET))(this, value);
		}
	};
}

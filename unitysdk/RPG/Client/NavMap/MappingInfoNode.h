#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xAB61020)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xAB61040)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xAB61060)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xAB61030)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0xAB61050)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_WORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xAB61080)
#define RPG_CLIENT_NAVMAP_MAPPINGINFONODE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB61090)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int MappingInfoNode_TypeDefinitionIndex = 68817;

	class MappingInfoNode : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 _WorldPosition_k__BackingField; // 0x10
		::System::UInt32 _MappingInfoID_k__BackingField; // 0x1C
		::System::UInt32 _EntryID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_ENTRYID_OFFSET))(this, value);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_MappingInfoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_MAPPINGINFOID_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_WorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_GET_WORLDPOSITION_OFFSET))(this);
		}

		::System::Void set_WorldPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_MAPPINGINFONODE_SET_WORLDPOSITION_OFFSET))(this, value);
		}
	};
}

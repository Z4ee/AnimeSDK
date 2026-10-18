#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::NavMap { class IMapDataSource; }

#define CLASS_1_F218FD695535B02A_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15D50760)
#define CLASS_1_F218FD695535B02A_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x15D50780)
#define CLASS_1_F218FD695535B02A_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x15D507A0)
#define CLASS_1_F218FD695535B02A_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x15D50730)
#define CLASS_1_F218FD695535B02A_METHOD_1_90B03F82F0ACDAD8_OFFSET UNITYSDK_OFFSET(0x15D507C0)
#define CLASS_1_F218FD695535B02A_METHOD_1_EB3D6DD45E11B1E1_OFFSET UNITYSDK_OFFSET(0x15D506E0)
#define CLASS_1_F218FD695535B02A_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15D50770)
#define CLASS_1_F218FD695535B02A_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x15D50790)
#define CLASS_1_F218FD695535B02A_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x15D507B0)
#define CLASS_1_F218FD695535B02A_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x15D50750)
#define CLASS_1_F218FD695535B02A__CTOR_OFFSET UNITYSDK_OFFSET(0x15D50970)

inline static constexpr unsigned int Class_1_F218FD695535B02A_TypeDefinitionIndex = 74577;

class Class_1_F218FD695535B02A : public ::System::Object
{
public:
	::System::UInt32 _GroupID_k__BackingField; // 0x10
	::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x14
	::System::UInt32 _InstanceID_k__BackingField; // 0x18
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A__CTOR_OFFSET))(this);
	}

	::RPG::Client::NavMap::NavSpaceType Method_1_EB3D6DD45E11B1E1()
	{
		return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A_METHOD_1_EB3D6DD45E11B1E1_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A_SET_POSITION_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A_SET_INSTANCEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_LittleGameEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A_GET_LITTLEGAMEENTITYID_OFFSET))(this);
	}

	::System::Void set_LittleGameEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A_SET_LITTLEGAMEENTITYID_OFFSET))(this, a1);
	}

	static ::Class_1_F218FD695535B02A* Method_1_90B03F82F0ACDAD8(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::Class_1_F218FD695535B02A*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F218FD695535B02A_METHOD_1_90B03F82F0ACDAD8_OFFSET))(a1, a2, a3, a4);
	}
};

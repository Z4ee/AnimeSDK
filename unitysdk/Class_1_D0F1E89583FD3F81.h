#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::NavMap { class IMapDataSource; }

#define CLASS_1_D0F1E89583FD3F81_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x16D9AE30)
#define CLASS_1_D0F1E89583FD3F81_METHOD_1_5EA1F625F58B0902_OFFSET UNITYSDK_OFFSET(0x16D9AE60)
#define CLASS_1_D0F1E89583FD3F81_METHOD_1_EB3D6DD45E11B1E1_OFFSET UNITYSDK_OFFSET(0x16D9ADE0)
#define CLASS_1_D0F1E89583FD3F81_METHOD_1_F0ADE71F76010F8C_OFFSET UNITYSDK_OFFSET(0x16D9AF60)
#define CLASS_1_D0F1E89583FD3F81_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x16D9AE50)
#define CLASS_1_D0F1E89583FD3F81__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9AFE0)

inline static constexpr unsigned int Class_1_D0F1E89583FD3F81_TypeDefinitionIndex = 74449;

class Class_1_D0F1E89583FD3F81 : public ::System::Object
{
public:
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F1E89583FD3F81__CTOR_OFFSET))(this);
	}

	::RPG::Client::NavMap::NavSpaceType Method_1_EB3D6DD45E11B1E1()
	{
		return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F1E89583FD3F81_METHOD_1_EB3D6DD45E11B1E1_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0F1E89583FD3F81_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D0F1E89583FD3F81_SET_POSITION_OFFSET))(this, a1);
	}

	static ::Class_1_D0F1E89583FD3F81* Method_1_5EA1F625F58B0902(::RPG::Client::NavMap::IMapDataSource* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Class_1_D0F1E89583FD3F81*(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0F1E89583FD3F81_METHOD_1_5EA1F625F58B0902_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_D0F1E89583FD3F81* Method_1_F0ADE71F76010F8C(::RPG::Client::NavMap::IMapDataSource* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_D0F1E89583FD3F81*(*)(::RPG::Client::NavMap::IMapDataSource*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D0F1E89583FD3F81_METHOD_1_F0ADE71F76010F8C_OFFSET))(a1, a2);
	}
};

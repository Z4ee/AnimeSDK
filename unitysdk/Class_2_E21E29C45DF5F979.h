#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class FloorConnectivityData_EdgeInfo; }

#define CLASS_2_E21E29C45DF5F979_METHOD_2_0BCABD00A8AEBC96_OFFSET UNITYSDK_OFFSET(0xAD64CE0)
#define CLASS_2_E21E29C45DF5F979_METHOD_2_F89A3CC4E9F403DC_OFFSET UNITYSDK_OFFSET(0xAD65100)
#define CLASS_2_E21E29C45DF5F979_SETUPDATA_OFFSET UNITYSDK_OFFSET(0xAD63F50)
#define CLASS_2_E21E29C45DF5F979_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0xAD648B0)
#define CLASS_2_E21E29C45DF5F979__CTOR_OFFSET UNITYSDK_OFFSET(0xAD651A0)
#define CLASS_2_E21E29C45DF5F979___IFIXBASEPROXY_SETUPDATA_OFFSET UNITYSDK_OFFSET(0xAD651B0)
#define CLASS_2_E21E29C45DF5F979___IFIXBASEPROXY_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0xAD65210)

inline static constexpr unsigned int Class_2_E21E29C45DF5F979_TypeDefinitionIndex = 60030;

class Class_2_E21E29C45DF5F979 : public ::RPG::Client::FloorConnectivityData
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E21E29C45DF5F979__CTOR_OFFSET))(this);
	}

	::System::Void SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E21E29C45DF5F979_SETUPDATA_OFFSET))(this);
	}

	::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* TryFindNextPoint(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a3)
	{
		return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_E21E29C45DF5F979_TRYFINDNEXTPOINT_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* Method_2_0BCABD00A8AEBC96(::RPG::Client::FloorConnectivityData_EdgeInfo* a1, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a2)
	{
		return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::RPG::Client::FloorConnectivityData_EdgeInfo*, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_E21E29C45DF5F979_METHOD_2_0BCABD00A8AEBC96_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_F89A3CC4E9F403DC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E21E29C45DF5F979_METHOD_2_F89A3CC4E9F403DC_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E21E29C45DF5F979___IFIXBASEPROXY_SETUPDATA_OFFSET))(this);
	}

	::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* __iFixBaseProxy_TryFindNextPoint(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a3)
	{
		return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_E21E29C45DF5F979___IFIXBASEPROXY_TRYFINDNEXTPOINT_OFFSET))(this, a1, a2, a3);
	}
};

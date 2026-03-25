#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FloorConnectivityData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FloorConnectivityData_EdgeConnectionInfo; }
namespace RPG::Client { class FloorConnectivityData_EdgeInfo; }

#define CLASS_2_66C2DA3C3E67FA4E_METHOD_2_2E28200DCA4153ED_OFFSET UNITYSDK_OFFSET(0x886B190)
#define CLASS_2_66C2DA3C3E67FA4E_METHOD_2_F89A3CC4E9F403DC_OFFSET UNITYSDK_OFFSET(0x886B5B0)
#define CLASS_2_66C2DA3C3E67FA4E_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x886A5F0)
#define CLASS_2_66C2DA3C3E67FA4E_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0x886AD60)
#define CLASS_2_66C2DA3C3E67FA4E__CTOR_OFFSET UNITYSDK_OFFSET(0x886B650)
#define CLASS_2_66C2DA3C3E67FA4E___IFIXBASEPROXY_SETUPDATA_OFFSET UNITYSDK_OFFSET(0x886B660)
#define CLASS_2_66C2DA3C3E67FA4E___IFIXBASEPROXY_TRYFINDNEXTPOINT_OFFSET UNITYSDK_OFFSET(0x886B6C0)

inline static constexpr unsigned int Class_2_66C2DA3C3E67FA4E_TypeDefinitionIndex = 52150;

class Class_2_66C2DA3C3E67FA4E : public ::RPG::Client::FloorConnectivityData
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66C2DA3C3E67FA4E__CTOR_OFFSET))(this);
	}

	::System::Void SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66C2DA3C3E67FA4E_SETUPDATA_OFFSET))(this);
	}

	::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* TryFindNextPoint(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a3)
	{
		return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_66C2DA3C3E67FA4E_TRYFINDNEXTPOINT_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* Method_2_2E28200DCA4153ED(::RPG::Client::FloorConnectivityData_EdgeInfo* a1, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* a2)
	{
		return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::RPG::Client::FloorConnectivityData_EdgeInfo*, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_66C2DA3C3E67FA4E_METHOD_2_2E28200DCA4153ED_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_F89A3CC4E9F403DC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_66C2DA3C3E67FA4E_METHOD_2_F89A3CC4E9F403DC_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_SetupData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66C2DA3C3E67FA4E___IFIXBASEPROXY_SETUPDATA_OFFSET))(this);
	}

	::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* __iFixBaseProxy_TryFindNextPoint(::System::UInt32 P0, ::System::UInt32 P1, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo* P2)
	{
		return ((::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::FloorConnectivityData_EdgeConnectionInfo*))((::PBYTE)hIl2Cpp + CLASS_2_66C2DA3C3E67FA4E___IFIXBASEPROXY_TRYFINDNEXTPOINT_OFFSET))(this, P0, P1, P2);
	}
};

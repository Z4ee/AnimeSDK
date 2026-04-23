#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"

#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xA5755D0)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xA575660)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xA575670)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePosService_RoleRemoveSummerizer_TypeDefinitionIndex = 59708;

	class GridFightRolePosService_RoleRemoveSummerizer : public ::Class_1_6D4DDF404C3CCC18
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER_UPDATEREMOVEROLE_OFFSET))(this, uid);
		}

		::System::Void __iFixBaseProxy_UpdateRemoveRole(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET))(this, P0);
		}
	};
}

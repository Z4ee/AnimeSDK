#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"

#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x98941D0)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x9894260)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0x9894270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePosService_RoleRemoveSummerizer_TypeDefinitionIndex = 52657;

	class GridFightRolePosService_RoleRemoveSummerizer : public ::Class_1_41E07A9DDAB7FC78
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

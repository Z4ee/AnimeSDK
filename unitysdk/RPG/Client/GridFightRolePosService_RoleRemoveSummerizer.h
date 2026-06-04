#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"

#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xBBE3090)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE3150)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET UNITYSDK_OFFSET(0xBBE3160)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePosService_RoleRemoveSummerizer_TypeDefinitionIndex = 60643;

	class GridFightRolePosService_RoleRemoveSummerizer : public ::Class_1_6D4DDF404C3CCC18
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_UpdateRemoveRole(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_ROLEREMOVESUMMERIZER___IFIXBASEPROXY_UPDATEREMOVEROLE_OFFSET))(this, a1);
		}
	};
}

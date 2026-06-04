#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightFrontSpecialSPDisplayType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightFrontSpecialSPConfigRow; }

#define RPG_CLIENT_GRIDFIGHTFRONTSPECIALSPCONFIG_GET_INITIALSPECIALSP_OFFSET UNITYSDK_OFFSET(0xBB47B80)
#define RPG_CLIENT_GRIDFIGHTFRONTSPECIALSPCONFIG_GET_MAXSPECIALSP_OFFSET UNITYSDK_OFFSET(0xBB47B90)
#define RPG_CLIENT_GRIDFIGHTFRONTSPECIALSPCONFIG_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xBB47B60)
#define RPG_CLIENT_GRIDFIGHTFRONTSPECIALSPCONFIG_GET_SPECIALSPTYPE_OFFSET UNITYSDK_OFFSET(0xBB47B70)
#define RPG_CLIENT_GRIDFIGHTFRONTSPECIALSPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBB47AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFrontSpecialSPConfig_TypeDefinitionIndex = 60892;

	class GridFightFrontSpecialSPConfig : public ::System::Object
	{
	public:
		::System::UInt32 _RoleID_k__BackingField; // 0x10
		::RPG::GameCore::GridFightFrontSpecialSPDisplayType _SpecialSPType_k__BackingField; // 0x14
		::RPG::GameCore::FixPoint _InitialSpecialSP_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _MaxSpecialSP_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::GridFightFrontSpecialSPConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightFrontSpecialSPConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFRONTSPECIALSPCONFIG__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFRONTSPECIALSPCONFIG_GET_ROLEID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightFrontSpecialSPDisplayType get_SpecialSPType()
		{
			return ((::RPG::GameCore::GridFightFrontSpecialSPDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFRONTSPECIALSPCONFIG_GET_SPECIALSPTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitialSpecialSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFRONTSPECIALSPCONFIG_GET_INITIALSPECIALSP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxSpecialSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFRONTSPECIALSPCONFIG_GET_MAXSPECIALSP_OFFSET))(this);
		}
	};
}

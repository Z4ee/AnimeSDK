#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightRoleConfigRow; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xBB5E0C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBB5E130)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xBB5D8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationFilter_GridFightFilterRoleConfigComparer_TypeDefinitionIndex = 60474;

	class GridFightGameFormationFilter_GridFightFilterRoleConfigComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::GridFightRoleConfigRow* a1, ::RPG::GameCore::GridFightRoleConfigRow* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}

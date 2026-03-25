#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightRoleConfigRow; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x98387F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9838860)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x9837C80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefFilter_GridFightFilterRoleConfigComparer_TypeDefinitionIndex = 52569;

	class GridFightGameRefFilter_GridFightFilterRoleConfigComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::GridFightRoleConfigRow* x, ::RPG::GameCore::GridFightRoleConfigRow* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::RPG::GameCore::GridFightRoleConfigRow* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER_GRIDFIGHTFILTERROLECONFIGCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTASKCONFIG_GET_LEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xBC08E50)
#define RPG_CLIENT_GRIDFIGHTTASKCONFIG_GET_TASKID_OFFSET UNITYSDK_OFFSET(0xBC08E40)
#define RPG_CLIENT_GRIDFIGHTTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBC08DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTaskConfig_TypeDefinitionIndex = 61239;

	class GridFightTaskConfig : public ::System::Object
	{
	public:
		::System::String* _LevelGraphPath_k__BackingField; // 0x10
		::System::UInt32 _TaskID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTASKCONFIG__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_TaskID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTASKCONFIG_GET_TASKID_OFFSET))(this);
		}

		::System::String* get_LevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTASKCONFIG_GET_LEVELGRAPHPATH_OFFSET))(this);
		}
	};
}

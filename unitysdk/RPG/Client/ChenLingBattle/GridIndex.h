#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_2;

#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_CREATEBYPROTO_OFFSET UNITYSDK_OFFSET(0x9FA6B30)
#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_GET_X_OFFSET UNITYSDK_OFFSET(0x9FA74C0)
#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_GET_Y_OFFSET UNITYSDK_OFFSET(0x9FA74E0)
#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_SET_X_OFFSET UNITYSDK_OFFSET(0x9FA74D0)
#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_SET_Y_OFFSET UNITYSDK_OFFSET(0x9FA74F0)
#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA7450)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int GridIndex_TypeDefinitionIndex = 70124;

	class GridIndex : public ::System::Object
	{
	public:
		::System::Int32 _X_k__BackingField; // 0x10
		::System::Int32 _Y_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingBattle::GridIndex* CreateByProto(::Class_1_EA5A5E4D07C4CF2B_2* proto)
		{
			return ((::RPG::Client::ChenLingBattle::GridIndex*(*)(::Class_1_EA5A5E4D07C4CF2B_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_CREATEBYPROTO_OFFSET))(proto);
		}

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_SET_X_OFFSET))(this, value);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_SET_Y_OFFSET))(this, value);
		}
	};
}

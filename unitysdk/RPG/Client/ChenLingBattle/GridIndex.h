#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_2;

#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_CREATEBYPROTO_OFFSET UNITYSDK_OFFSET(0xB5C0150)
#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_GET_X_OFFSET UNITYSDK_OFFSET(0xB5C0BE0)
#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_GET_Y_OFFSET UNITYSDK_OFFSET(0xB5C0C00)
#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_SET_X_OFFSET UNITYSDK_OFFSET(0xB5C0BF0)
#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_SET_Y_OFFSET UNITYSDK_OFFSET(0xB5C0C10)
#define RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C0B20)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int GridIndex_TypeDefinitionIndex = 70936;

	class GridIndex : public ::System::Object
	{
	public:
		::System::Int32 _Y_k__BackingField; // 0x10
		::System::Int32 _X_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingBattle::GridIndex* CreateByProto(::Class_1_EA5A5E4D07C4CF2B_2* a1)
		{
			return ((::RPG::Client::ChenLingBattle::GridIndex*(*)(::Class_1_EA5A5E4D07C4CF2B_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_CREATEBYPROTO_OFFSET))(a1);
		}

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_SET_X_OFFSET))(this, a1);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_GRIDINDEX_SET_Y_OFFSET))(this, a1);
		}
	};
}

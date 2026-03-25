#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_CREATE_OFFSET UNITYSDK_OFFSET(0x9FA1FE0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_END_OFFSET UNITYSDK_OFFSET(0x9FA2150)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_LEVELDESC_OFFSET UNITYSDK_OFFSET(0x9FA2170)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_START_OFFSET UNITYSDK_OFFSET(0x9FA2130)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_END_OFFSET UNITYSDK_OFFSET(0x9FA2160)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_LEVELDESC_OFFSET UNITYSDK_OFFSET(0x9FA2180)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_START_OFFSET UNITYSDK_OFFSET(0x9FA2140)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA2120)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameBingoRewardLevel_TypeDefinitionIndex = 54204;

	class PlanetFesMiniGameBingoRewardLevel : public ::System::Object
	{
	public:
		::System::String* _LevelDesc_k__BackingField; // 0x10
		::System::Int32 _End_k__BackingField; // 0x18
		::System::Int32 _Start_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesMiniGameBingoRewardLevel* Create(::System::Int32 start, ::System::Int32 end)
		{
			return ((::RPG::Client::PlanetFesMiniGameBingoRewardLevel*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_CREATE_OFFSET))(start, end);
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_START_OFFSET))(this, value);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_END_OFFSET))(this, value);
		}

		::System::String* get_LevelDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_LEVELDESC_OFFSET))(this);
		}

		::System::Void set_LevelDesc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_LEVELDESC_OFFSET))(this, value);
		}
	};
}

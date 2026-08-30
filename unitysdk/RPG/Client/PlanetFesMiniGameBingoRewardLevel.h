#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C37D7A0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_END_OFFSET UNITYSDK_OFFSET(0x1C37D910)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_LEVELDESC_OFFSET UNITYSDK_OFFSET(0x1C37D930)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_START_OFFSET UNITYSDK_OFFSET(0x1C37D8F0)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_END_OFFSET UNITYSDK_OFFSET(0x1C37D920)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_LEVELDESC_OFFSET UNITYSDK_OFFSET(0x1C37D940)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_START_OFFSET UNITYSDK_OFFSET(0x1C37D900)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37D8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameBingoRewardLevel_TypeDefinitionIndex = 66642;

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

		static ::RPG::Client::PlanetFesMiniGameBingoRewardLevel* Create(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::PlanetFesMiniGameBingoRewardLevel*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_START_OFFSET))(this, a1);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_END_OFFSET))(this, a1);
		}

		::System::String* get_LevelDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_GET_LEVELDESC_OFFSET))(this);
		}

		::System::Void set_LevelDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGOREWARDLEVEL_SET_LEVELDESC_OFFSET))(this, a1);
		}
	};
}

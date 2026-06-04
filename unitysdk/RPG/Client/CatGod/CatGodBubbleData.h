#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CATGOD_CATGODBUBBLEDATA_GET_CURRENTCNT_OFFSET UNITYSDK_OFFSET(0xB4BE510)
#define RPG_CLIENT_CATGOD_CATGODBUBBLEDATA_GET_TARGETCNT_OFFSET UNITYSDK_OFFSET(0xB4BE530)
#define RPG_CLIENT_CATGOD_CATGODBUBBLEDATA_SET_CURRENTCNT_OFFSET UNITYSDK_OFFSET(0xB4BE520)
#define RPG_CLIENT_CATGOD_CATGODBUBBLEDATA_SET_TARGETCNT_OFFSET UNITYSDK_OFFSET(0xB4BE540)
#define RPG_CLIENT_CATGOD_CATGODBUBBLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB4BE500)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodBubbleData_TypeDefinitionIndex = 74301;

	class CatGodBubbleData : public ::System::Object
	{
	public:
		::System::UInt32 _CurrentCnt_k__BackingField; // 0x10
		::System::UInt32 _TargetCnt_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODBUBBLEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CurrentCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODBUBBLEDATA_GET_CURRENTCNT_OFFSET))(this);
		}

		::System::Void set_CurrentCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODBUBBLEDATA_SET_CURRENTCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODBUBBLEDATA_GET_TARGETCNT_OFFSET))(this);
		}

		::System::Void set_TargetCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODBUBBLEDATA_SET_TARGETCNT_OFFSET))(this, a1);
		}
	};
}

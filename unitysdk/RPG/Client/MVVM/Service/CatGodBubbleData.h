#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_SERVICE_CATGODBUBBLEDATA_GET_CURRENTCNT_OFFSET UNITYSDK_OFFSET(0xA734580)
#define RPG_CLIENT_MVVM_SERVICE_CATGODBUBBLEDATA_GET_TARGETCNT_OFFSET UNITYSDK_OFFSET(0xA7345A0)
#define RPG_CLIENT_MVVM_SERVICE_CATGODBUBBLEDATA_SET_CURRENTCNT_OFFSET UNITYSDK_OFFSET(0xA734590)
#define RPG_CLIENT_MVVM_SERVICE_CATGODBUBBLEDATA_SET_TARGETCNT_OFFSET UNITYSDK_OFFSET(0xA7345B0)
#define RPG_CLIENT_MVVM_SERVICE_CATGODBUBBLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA734570)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int CatGodBubbleData_TypeDefinitionIndex = 68485;

	class CatGodBubbleData : public ::System::Object
	{
	public:
		::System::UInt32 _TargetCnt_k__BackingField; // 0x10
		::System::UInt32 _CurrentCnt_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 currentCnt, ::System::UInt32 targetCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_CATGODBUBBLEDATA__CTOR_OFFSET))(this, currentCnt, targetCnt);
		}

		::System::UInt32 get_CurrentCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_CATGODBUBBLEDATA_GET_CURRENTCNT_OFFSET))(this);
		}

		::System::Void set_CurrentCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_CATGODBUBBLEDATA_SET_CURRENTCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_CATGODBUBBLEDATA_GET_TARGETCNT_OFFSET))(this);
		}

		::System::Void set_TargetCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_CATGODBUBBLEDATA_SET_TARGETCNT_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequest.h"

#define FOUNDATION_ASSETASYNCREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1F6931D0)
#define FOUNDATION_ASSETASYNCREQUEST_GET_ASYNCLOADTICK_OFFSET UNITYSDK_OFFSET(0x1F6928F0)
#define FOUNDATION_ASSETASYNCREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1F692970)
#define FOUNDATION_ASSETASYNCREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1F692BF0)
#define FOUNDATION_ASSETASYNCREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1F692FD0)
#define FOUNDATION_ASSETASYNCREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1F693140)
#define FOUNDATION_ASSETASYNCREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F692AD0)
#define FOUNDATION_ASSETASYNCREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1F693250)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1F693260)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1F6932F0)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1F693310)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_LOAD_OFFSET UNITYSDK_OFFSET(0x1F693300)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1F6933A0)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F6933B0)

namespace Foundation
{
	inline static constexpr unsigned int AssetAsyncRequest_TypeDefinitionIndex = 7980;

	class AssetAsyncRequest : public ::Foundation::AssetRequest
	{
	public:
		::System::Int32 _Tick; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST__CTOR_OFFSET))(this);
		}

		static ::System::Int32 get_AsyncLoadTick()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST_GET_ASYNCLOADTICK_OFFSET))();
		}

		::System::Single get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Single __base_get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Void __base_Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST___BASE_LOAD_OFFSET))(this);
		}

		::System::Void __base_LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST___BASE_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void __base_Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST___BASE_RECYCLE_OFFSET))(this);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETASYNCREQUEST___BASE_UPDATE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequest.h"

#define FOUNDATION_ASSETASYNCREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1C00AE30)
#define FOUNDATION_ASSETASYNCREQUEST_GET_ASYNCLOADTICK_OFFSET UNITYSDK_OFFSET(0x1C00A550)
#define FOUNDATION_ASSETASYNCREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1C00A5D0)
#define FOUNDATION_ASSETASYNCREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1C00A850)
#define FOUNDATION_ASSETASYNCREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1C00AC30)
#define FOUNDATION_ASSETASYNCREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1C00ADA0)
#define FOUNDATION_ASSETASYNCREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C00A730)
#define FOUNDATION_ASSETASYNCREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00AEB0)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1C00AEC0)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x1C00AF50)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1C00AF70)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_LOAD_OFFSET UNITYSDK_OFFSET(0x1C00AF60)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1C00B000)
#define FOUNDATION_ASSETASYNCREQUEST___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C00B010)

namespace Foundation
{
	inline static constexpr unsigned int AssetAsyncRequest_TypeDefinitionIndex = 8023;

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

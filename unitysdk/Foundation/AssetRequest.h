#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestBase.h"
#include "unitysdk/Foundation/InstantiationParameters.h"

namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1BE55640)
#define FOUNDATION_ASSETREQUEST_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1BE55A50)
#define FOUNDATION_ASSETREQUEST_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BE55690)
#define FOUNDATION_ASSETREQUEST_INIT_OFFSET UNITYSDK_OFFSET(0x1BE54DE0)
#define FOUNDATION_ASSETREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1BE55300)
#define FOUNDATION_ASSETREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x1BE54E40)
#define FOUNDATION_ASSETREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1BE555B0)
#define FOUNDATION_ASSETREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1BE55340)
#define FOUNDATION_ASSETREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE55B30)
#define FOUNDATION_ASSETREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1BE55B40)
#define FOUNDATION_ASSETREQUEST___BASE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1BE55C20)
#define FOUNDATION_ASSETREQUEST___BASE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BE55B50)
#define FOUNDATION_ASSETREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1BE55C60)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequest_TypeDefinitionIndex = 8166;

	class AssetRequest : public ::Foundation::AssetRequestBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Foundation::AssetPath url, ::System::Type* assetType)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST_INIT_OFFSET))(this, url, assetType);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::UnityEngine::Object* GetInstance(::Foundation::InstantiationParameters param)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST_GETINSTANCE_OFFSET))(this, param);
		}

		::System::Boolean GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstantiationParameters param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST_GETINSTANCEASYNC_OFFSET))(this, completed, param);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}

		::UnityEngine::Object* __base_GetInstance(::Foundation::InstantiationParameters P0)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST___BASE_GETINSTANCE_OFFSET))(this, P0);
		}

		::System::Boolean __base_GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* P0, ::Foundation::InstantiationParameters P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST___BASE_GETINSTANCEASYNC_OFFSET))(this, P0, P1);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUEST___BASE_UNLOAD_OFFSET))(this);
		}
	};
}

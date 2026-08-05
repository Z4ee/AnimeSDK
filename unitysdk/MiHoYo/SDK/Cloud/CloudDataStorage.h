#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BoxConfigModel; }
namespace MiHoYo::SDK { class CloudSaveImageModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_GETCLIPBOARDDATA_OFFSET UNITYSDK_OFFSET(0x1D75F290)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_GETLOCALDATA_OFFSET UNITYSDK_OFFSET(0x1D75F1D0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_ONTRANSMITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D75F980)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SAVEIMAGE_OFFSET UNITYSDK_OFFSET(0x1D75F470)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SETBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x1D75EDC0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SETLOCALDATA_OFFSET UNITYSDK_OFFSET(0x1D75F230)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STARTLOADINGCOROUTINEIFNEED_OFFSET UNITYSDK_OFFSET(0x1D760070)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STARTSAVEIMAGECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1D75F7B0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STOPLOADINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1D760470)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STOPSAVEIMAGECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1D760030)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_TRANSMITPARTDATA_OFFSET UNITYSDK_OFFSET(0x1D75FA30)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D760560)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7604B0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__STARTSAVEIMAGECOROUTINE_B__20_0_OFFSET UNITYSDK_OFFSET(0x1D760650)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudDataStorage_TypeDefinitionIndex = 20972;

	class CloudDataStorage : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Cloud::CloudDataStorage** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Cloud::CloudDataStorage**)Il2CppClass::FromTypeDefinitionIndex(CloudDataStorage_TypeDefinitionIndex)->GetStaticField(0xAA50);
		}
		static ::MiHoYo::SDK::BoxConfigModel** StaticGet_boxConfig()
		{
			return (::MiHoYo::SDK::BoxConfigModel**)Il2CppClass::FromTypeDefinitionIndex(CloudDataStorage_TypeDefinitionIndex)->GetStaticField(0xAA58);
		}
		::UnityEngine::Coroutine* loadingCoroutine; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::CloudSaveImageModel*>* saveImageList; // 0x18
		::UnityEngine::Coroutine* saveImageCoroutine; // 0x20
		::MiHoYo::SDK::CloudSaveImageModel* currentImageModel; // 0x28
		::System::Boolean isTransmittingImage; // 0x30
		::System::Single ShareLoadingTimeOut; // 0x34
		::System::Single SaveImageTimeOut; // 0x38
		::System::Int32 ShareTextMaxLength; // 0x3C
		::System::Int32 PartSize; // 0x40
		::System::Single ClipBoardTimeOut; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__CCTOR_OFFSET))();
		}

		::System::Void SetBoxConfig(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SETBOXCONFIG_OFFSET))(this, jsonString);
		}

		::System::Void GetLocalData(::System::String* key, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_GETLOCALDATA_OFFSET))(this, key, index);
		}

		::System::Void SetLocalData(::System::String* saveData, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SETLOCALDATA_OFFSET))(this, saveData, index);
		}

		::System::Void GetClipBoardData(::System::String* key, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_GETCLIPBOARDDATA_OFFSET))(this, key, index);
		}

		::System::Void SaveImage(::System::String* jsonString, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SAVEIMAGE_OFFSET))(this, jsonString, index);
		}

		::System::Void OnTransmitCallback(::System::String* part)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_ONTRANSMITCALLBACK_OFFSET))(this, part);
		}

		::System::Void TransmitPartData(::System::Int32 part, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_TRANSMITPARTDATA_OFFSET))(this, part, callback);
		}

		::System::Void StopSaveImageCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STOPSAVEIMAGECOROUTINE_OFFSET))(this);
		}

		::System::Void StartSaveImageCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STARTSAVEIMAGECOROUTINE_OFFSET))(this);
		}

		::System::Void StartLoadingCoroutineIfNeed(::System::String* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STARTLOADINGCOROUTINEIFNEED_OFFSET))(this, args);
		}

		::System::Void StopLoadingCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STOPLOADINGCOROUTINE_OFFSET))(this);
		}

		::System::Void _StartSaveImageCoroutine_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__STARTSAVEIMAGECOROUTINE_B__20_0_OFFSET))(this);
		}
	};
}

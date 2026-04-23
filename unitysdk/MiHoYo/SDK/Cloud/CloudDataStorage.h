#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BoxConfigModel; }
namespace MiHoYo::SDK { class CloudSaveImageModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_GETCLIPBOARDDATA_OFFSET UNITYSDK_OFFSET(0x173ED420)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_GETLOCALDATA_OFFSET UNITYSDK_OFFSET(0x173ECF10)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_ONTRANSMITCALLBACK_OFFSET UNITYSDK_OFFSET(0x173EDF80)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SAVEIMAGE_OFFSET UNITYSDK_OFFSET(0x173ED690)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SETBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x173ECB20)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_SETLOCALDATA_OFFSET UNITYSDK_OFFSET(0x173ED3C0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STARTLOADINGCOROUTINEIFNEED_OFFSET UNITYSDK_OFFSET(0x173EE860)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STARTSAVEIMAGECOROUTINE_OFFSET UNITYSDK_OFFSET(0x173EDCA0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STOPLOADINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x173EEDC0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_STOPSAVEIMAGECOROUTINE_OFFSET UNITYSDK_OFFSET(0x173EE5B0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE_TRANSMITPARTDATA_OFFSET UNITYSDK_OFFSET(0x173EE030)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173EEF80)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x173EEEF0)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE__STARTSAVEIMAGECOROUTINE_B__20_0_OFFSET UNITYSDK_OFFSET(0x173EF050)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudDataStorage_TypeDefinitionIndex = 7637;

	class CloudDataStorage : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::BoxConfigModel** StaticGet_boxConfig()
		{
			return (::MiHoYo::SDK::BoxConfigModel**)Il2CppClass::FromTypeDefinitionIndex(CloudDataStorage_TypeDefinitionIndex)->GetStaticField(0x17150);
		}
		static ::MiHoYo::SDK::Cloud::CloudDataStorage** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Cloud::CloudDataStorage**)Il2CppClass::FromTypeDefinitionIndex(CloudDataStorage_TypeDefinitionIndex)->GetStaticField(0x17158);
		}
		::UnityEngine::Coroutine* loadingCoroutine; // 0x10
		::UnityEngine::Coroutine* saveImageCoroutine; // 0x18
		::MiHoYo::SDK::CloudSaveImageModel* currentImageModel; // 0x20
		::System::Collections::Generic::List_1<::MiHoYo::SDK::CloudSaveImageModel*>* saveImageList; // 0x28
		::System::Int32 ShareTextMaxLength; // 0x30
		::System::Boolean isTransmittingImage; // 0x34
		::System::Single ClipBoardTimeOut; // 0x38
		::System::Int32 PartSize; // 0x3C
		::System::Single ShareLoadingTimeOut; // 0x40
		::System::Single SaveImageTimeOut; // 0x44

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

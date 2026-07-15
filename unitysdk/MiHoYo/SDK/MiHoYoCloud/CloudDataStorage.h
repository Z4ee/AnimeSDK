#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BoxConfigModel; }
namespace MiHoYo::SDK { class CloudSaveImageModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_GETCLIPBOARDDATA_OFFSET UNITYSDK_OFFSET(0x1990EEC0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_GETLOCALDATA_OFFSET UNITYSDK_OFFSET(0x1990EAC0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_ONTRANSMITCALLBACK_OFFSET UNITYSDK_OFFSET(0x1990FA60)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SAVEIMAGE_OFFSET UNITYSDK_OFFSET(0x1990F180)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SETBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x1990E7D0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SETLOCALDATA_OFFSET UNITYSDK_OFFSET(0x1990EE30)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STARTLOADINGCOROUTINEIFNEED_OFFSET UNITYSDK_OFFSET(0x199102B0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STARTSAVEIMAGECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1990F770)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STOPLOADINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x19910830)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STOPSAVEIMAGECOROUTINE_OFFSET UNITYSDK_OFFSET(0x19910090)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_TRANSMITPARTDATA_OFFSET UNITYSDK_OFFSET(0x1990FB30)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199109B0)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19910920)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE__STARTSAVEIMAGECOROUTINE_B__20_0_OFFSET UNITYSDK_OFFSET(0x19910A80)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudDataStorage_TypeDefinitionIndex = 8801;

	class CloudDataStorage : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::BoxConfigModel** StaticGet_boxConfig()
		{
			return (::MiHoYo::SDK::BoxConfigModel**)Il2CppClass::FromTypeDefinitionIndex(CloudDataStorage_TypeDefinitionIndex)->GetStaticField(0x217A0);
		}
		static ::MiHoYo::SDK::MiHoYoCloud::CloudDataStorage** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::MiHoYoCloud::CloudDataStorage**)Il2CppClass::FromTypeDefinitionIndex(CloudDataStorage_TypeDefinitionIndex)->GetStaticField(0x217A8);
		}
		::System::Collections::Generic::List_1<::MiHoYo::SDK::CloudSaveImageModel*>* saveImageList; // 0x10
		::UnityEngine::Coroutine* saveImageCoroutine; // 0x18
		::UnityEngine::Coroutine* loadingCoroutine; // 0x20
		::MiHoYo::SDK::CloudSaveImageModel* currentImageModel; // 0x28
		::System::Single SaveImageTimeOut; // 0x30
		::System::Boolean isTransmittingImage; // 0x34
		::System::Single ShareLoadingTimeOut; // 0x38
		::System::Int32 ShareTextMaxLength; // 0x3C
		::System::Int32 PartSize; // 0x40
		::System::Single ClipBoardTimeOut; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE__CCTOR_OFFSET))();
		}

		::System::Void SetBoxConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SETBOXCONFIG_OFFSET))(this, a1);
		}

		::System::Void GetLocalData(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_GETLOCALDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalData(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SETLOCALDATA_OFFSET))(this, a1, a2);
		}

		::System::Void GetClipBoardData(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_GETCLIPBOARDDATA_OFFSET))(this, a1, a2);
		}

		::System::Void SaveImage(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_SAVEIMAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransmitCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_ONTRANSMITCALLBACK_OFFSET))(this, a1);
		}

		::System::Void TransmitPartData(::System::Int32 a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_TRANSMITPARTDATA_OFFSET))(this, a1, a2);
		}

		::System::Void StopSaveImageCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STOPSAVEIMAGECOROUTINE_OFFSET))(this);
		}

		::System::Void StartSaveImageCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STARTSAVEIMAGECOROUTINE_OFFSET))(this);
		}

		::System::Void StartLoadingCoroutineIfNeed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STARTLOADINGCOROUTINEIFNEED_OFFSET))(this, a1);
		}

		::System::Void StopLoadingCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE_STOPLOADINGCOROUTINE_OFFSET))(this);
		}

		::System::Void _StartSaveImageCoroutine_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDDATASTORAGE__STARTSAVEIMAGECOROUTINE_B__20_0_OFFSET))(this);
		}
	};
}

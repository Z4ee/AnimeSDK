#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsRequest.h"

namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsLoadFileRequest; }
namespace System { class String; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundleCreateRequest; }

#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146C1820)
#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_GET_ASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x146C1450)
#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_GET_PATH_OFFSET UNITYSDK_OFFSET(0x146C1430)
#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_SET_ASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x146C1460)
#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_SET_PATH_OFFSET UNITYSDK_OFFSET(0x146C1440)
#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x146C1600)
#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x146C1470)

namespace CriWare
{
	inline static constexpr unsigned int CriFsLoadAssetBundleRequest_TypeDefinitionIndex = 37152;

	class CriFsLoadAssetBundleRequest : public ::CriWare::CriFsRequest
	{
	public:
		::UnityEngine::AssetBundle* _assetBundle_k__BackingField; // 0x38
		::System::String* _path_k__BackingField; // 0x40
		::UnityEngine::AssetBundleCreateRequest* assetBundleReq; // 0x48
		::CriWare::CriFsLoadFileRequest* loadFileReq; // 0x50

		::System::Void _ctor(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_GET_PATH_OFFSET))(this);
		}

		::System::Void set_path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_SET_PATH_OFFSET))(this, a1);
		}

		::UnityEngine::AssetBundle* get_assetBundle()
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_GET_ASSETBUNDLE_OFFSET))(this);
		}

		::System::Void set_assetBundle(::UnityEngine::AssetBundle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AssetBundle*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_SET_ASSETBUNDLE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_DISPOSE_OFFSET))(this, a1);
		}
	};
}

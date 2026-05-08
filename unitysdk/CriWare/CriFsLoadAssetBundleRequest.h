#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriFsRequest.h"

namespace CriWare { class CriFsBinder; }
namespace CriWare { class CriFsLoadFileRequest; }
namespace System { class String; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundleCreateRequest; }

#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1E3BE0)
#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_SET_ASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x1C1E3A50)
#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1C1E3A40)
#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C1E3AF0)
#define CRIWARE_CRIFSLOADASSETBUNDLEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E3A60)

namespace CriWare
{
	inline static constexpr unsigned int CriFsLoadAssetBundleRequest_TypeDefinitionIndex = 32762;

	class CriFsLoadAssetBundleRequest : public ::CriWare::CriFsRequest
	{
	public:
		::UnityEngine::AssetBundle* _assetBundle_k__BackingField; // 0x38
		::System::String* _path_k__BackingField; // 0x40
		::CriWare::CriFsLoadFileRequest* loadFileReq; // 0x48
		::UnityEngine::AssetBundleCreateRequest* assetBundleReq; // 0x50

		::System::Void _ctor(::CriWare::CriFsBinder* binder, ::System::String* path, ::System::Int32 readUnitSize)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST__CTOR_OFFSET))(this, binder, path, readUnitSize);
		}

		::System::Void set_path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_SET_PATH_OFFSET))(this, value);
		}

		::System::Void set_assetBundle(::UnityEngine::AssetBundle* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AssetBundle*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_SET_ASSETBUNDLE_OFFSET))(this, value);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSLOADASSETBUNDLEREQUEST_DISPOSE_OFFSET))(this, disposing);
		}
	};
}

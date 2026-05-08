#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/DRect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_ARETEXTURESEQUAL_OFFSET UNITYSDK_OFFSET(0x1C038600)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GETENCAPSULATINGSAMPLINGRECT_OFFSET UNITYSDK_OFFSET(0x1C037FD0)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GETTEXNAME_OFFSET UNITYSDK_OFFSET(0x1C038450)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GETTEXTURE2D_OFFSET UNITYSDK_OFFSET(0x1C038010)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1C038300)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GET_ISIMPORTEDASNORMALMAP_OFFSET UNITYSDK_OFFSET(0x1C037DC0)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x1C0380A0)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GET_MATTILINGRECT_OFFSET UNITYSDK_OFFSET(0x1C037D90)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1C0381B0)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_SETENCAPSULATINGSAMPLINGRECT_OFFSET UNITYSDK_OFFSET(0x1C037FF0)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_SET_ISIMPORTEDASNORMALMAP_OFFSET UNITYSDK_OFFSET(0x1C037DD0)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_SET_MATTILINGRECT_OFFSET UNITYSDK_OFFSET(0x1C037DB0)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_SET_T_OFFSET UNITYSDK_OFFSET(0x1C037D80)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C038670)
#define DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C037DE0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MeshBakerMaterialTexture_TypeDefinitionIndex = 85126;

	class MeshBakerMaterialTexture : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_readyToBuildAtlases()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MeshBakerMaterialTexture_TypeDefinitionIndex)->GetStaticField(0x11DD0);
		}
		::UnityEngine::Texture2D* _t; // 0x10
		::DigitalOpus::MB::Core::DRect _matTilingRect_k__BackingField; // 0x18
		::System::Single texelDensity; // 0x38
		::System::Int32 _isImportedAsNormalMap_k__BackingField; // 0x3C
		::DigitalOpus::MB::Core::DRect encapsulatingSamplingRect; // 0x40

		::System::Void _ctor(::UnityEngine::Texture* tx, ::UnityEngine::Vector2 matTilingOffset, ::UnityEngine::Vector2 matTilingScale, ::System::Single texelDens, ::System::Int32 isImportedAsNormalMap)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE__CTOR_OFFSET))(this, tx, matTilingOffset, matTilingScale, texelDens, isImportedAsNormalMap);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE__CCTOR_OFFSET))();
		}

		::System::Void set_t(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_SET_T_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::DRect get_matTilingRect()
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GET_MATTILINGRECT_OFFSET))(this);
		}

		::System::Void set_matTilingRect(::DigitalOpus::MB::Core::DRect value)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_SET_MATTILINGRECT_OFFSET))(this, value);
		}

		::System::Int32 get_isImportedAsNormalMap()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GET_ISIMPORTEDASNORMALMAP_OFFSET))(this);
		}

		::System::Void set_isImportedAsNormalMap(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_SET_ISIMPORTEDASNORMALMAP_OFFSET))(this, value);
		}

		::DigitalOpus::MB::Core::DRect GetEncapsulatingSamplingRect()
		{
			return ((::DigitalOpus::MB::Core::DRect(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GETENCAPSULATINGSAMPLINGRECT_OFFSET))(this);
		}

		::System::Void SetEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TexSet* ts, ::DigitalOpus::MB::Core::DRect r)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::DRect))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_SETENCAPSULATINGSAMPLINGRECT_OFFSET))(this, ts, r);
		}

		::UnityEngine::Texture2D* GetTexture2D()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GETTEXTURE2D_OFFSET))(this);
		}

		::System::Boolean get_isNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GET_ISNULL_OFFSET))(this);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GET_HEIGHT_OFFSET))(this);
		}

		::System::String* GetTexName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_GETTEXNAME_OFFSET))(this);
		}

		::System::Boolean AreTexturesEqual(::DigitalOpus::MB::Core::MeshBakerMaterialTexture* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MeshBakerMaterialTexture*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MESHBAKERMATERIALTEXTURE_ARETEXTURESEQUAL_OFFSET))(this, b);
		}
	};
}

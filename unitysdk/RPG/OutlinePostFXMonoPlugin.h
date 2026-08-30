#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG { class OutlinePostFXBehavior; }
namespace RPG { class OutlineSettings; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDOBJECTRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xE7DE3F0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDSETTINGS_OFFSET UNITYSDK_OFFSET(0xE7DE470)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_HASUNIFIEDMANAGER_OFFSET UNITYSDK_OFFSET(0xE7DF690)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_REGISTERPLUGIN_OFFSET UNITYSDK_OFFSET(0xE7DD5E0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UNREGISTERPLUGIN_OFFSET UNITYSDK_OFFSET(0xE7DDAE0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xE7DF710)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDSETTINGS_OFFSET UNITYSDK_OFFSET(0xE7DF500)
#define RPG_OUTLINEPOSTFXMONOPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0xE7DFB60)
#define RPG_OUTLINEPOSTFXMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE7DFB30)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXMonoPlugin_TypeDefinitionIndex = 52014;

	class OutlinePostFXMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::OutlinePostFXBehavior*>
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::OutlinePostFXMonoPlugin*>** StaticGet_activeList()
		{
			return (::System::Collections::Generic::List_1<::RPG::OutlinePostFXMonoPlugin*>**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x21EE0);
		}
		static ::RPG::OutlineSettings** StaticGet__unifiedSettings()
		{
			return (::RPG::OutlineSettings**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x21EE8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__unifiedObjectRendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x21EF0);
		}
		static ::System::Boolean* StaticGet__hasUnifiedManager()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXMonoPlugin_TypeDefinitionIndex)->GetStaticField(0xADC0);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* ObjectRendererList; // 0x30
		::UnityEngine::Color OutlineColor; // 0x38
		::System::Boolean PCHighQuality; // 0x48
		::System::Int32 Downsample; // 0x4C
		::System::Single BlurSize; // 0x50
		::UnityEngine::Shader* OutlineShader; // 0x58
		::UnityEngine::Material* OutlineMaterial; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GetUnifiedObjectRendererList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDOBJECTRENDERERLIST_OFFSET))();
		}

		static ::RPG::OutlineSettings* GetUnifiedSettings()
		{
			return ((::RPG::OutlineSettings*(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDSETTINGS_OFFSET))();
		}

		static ::System::Boolean HasUnifiedManager()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_HASUNIFIEDMANAGER_OFFSET))();
		}

		static ::System::Void UpdateUnifiedRendererList()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDRENDERERLIST_OFFSET))();
		}

		static ::System::Void UpdateUnifiedSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDSETTINGS_OFFSET))();
		}

		static ::System::Void RegisterPlugin(::RPG::OutlinePostFXMonoPlugin* a1)
		{
			return ((::System::Void(*)(::RPG::OutlinePostFXMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_REGISTERPLUGIN_OFFSET))(a1);
		}

		static ::System::Void UnregisterPlugin(::RPG::OutlinePostFXMonoPlugin* a1)
		{
			return ((::System::Void(*)(::RPG::OutlinePostFXMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_UNREGISTERPLUGIN_OFFSET))(a1);
		}
	};
}

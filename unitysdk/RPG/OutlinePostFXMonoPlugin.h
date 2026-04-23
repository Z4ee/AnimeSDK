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

#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDOBJECTRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xB869E40)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_GETUNIFIEDSETTINGS_OFFSET UNITYSDK_OFFSET(0xB869EC0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_HASUNIFIEDMANAGER_OFFSET UNITYSDK_OFFSET(0xB86B0A0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_REGISTERPLUGIN_OFFSET UNITYSDK_OFFSET(0xB868DE0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UNREGISTERPLUGIN_OFFSET UNITYSDK_OFFSET(0xB869280)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDRENDERERLIST_OFFSET UNITYSDK_OFFSET(0xB86B120)
#define RPG_OUTLINEPOSTFXMONOPLUGIN_UPDATEUNIFIEDSETTINGS_OFFSET UNITYSDK_OFFSET(0xB86AF10)
#define RPG_OUTLINEPOSTFXMONOPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0xB86B4D0)
#define RPG_OUTLINEPOSTFXMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB86B4A0)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXMonoPlugin_TypeDefinitionIndex = 47782;

	class OutlinePostFXMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::OutlinePostFXBehavior*>
	{
	public:
		static ::RPG::OutlineSettings** StaticGet__unifiedSettings()
		{
			return (::RPG::OutlineSettings**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x66430);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__unifiedObjectRendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x66438);
		}
		static ::System::Collections::Generic::List_1<::RPG::OutlinePostFXMonoPlugin*>** StaticGet_activeList()
		{
			return (::System::Collections::Generic::List_1<::RPG::OutlinePostFXMonoPlugin*>**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x66440);
		}
		static ::System::Boolean* StaticGet__hasUnifiedManager()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x10B20);
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

		static ::System::Void RegisterPlugin(::RPG::OutlinePostFXMonoPlugin* plugin)
		{
			return ((::System::Void(*)(::RPG::OutlinePostFXMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_REGISTERPLUGIN_OFFSET))(plugin);
		}

		static ::System::Void UnregisterPlugin(::RPG::OutlinePostFXMonoPlugin* plugin)
		{
			return ((::System::Void(*)(::RPG::OutlinePostFXMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXMONOPLUGIN_UNREGISTERPLUGIN_OFFSET))(plugin);
		}
	};
}

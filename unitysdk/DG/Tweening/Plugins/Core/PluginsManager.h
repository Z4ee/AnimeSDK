#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening::Plugins::Core { class ITweenPlugin; }
namespace DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename T3> class ABSTweenPlugin_3; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DG_TWEENING_PLUGINS_CORE_PLUGINSMANAGER_PURGEALL_OFFSET UNITYSDK_OFFSET(0x1E617410)

namespace DG::Tweening::Plugins::Core
{
	inline static constexpr unsigned int PluginsManager_TypeDefinitionIndex = 27970;

	class PluginsManager : public ::System::Object
	{
	public:
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector2Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C40);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__rectOffsetPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C48);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__uintPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C50);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__colorPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C58);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__quaternionPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C60);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector4Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C68);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__ulongPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C70);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__floatPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C78);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector3Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C80);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__doublePlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C88);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__intPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C90);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__color2Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22C98);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__longPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22CA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::DG::Tweening::Plugins::Core::ITweenPlugin*>** StaticGet__customPlugins()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::DG::Tweening::Plugins::Core::ITweenPlugin*>**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22CA8);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector3ArrayPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22CB0);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__rectPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22CB8);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__stringPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x22CC0);
		}
		// static const ::System::Int32 _MaxCustomPlugins = 0x14; // 0x0

		static ::System::Void PurgeAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PLUGINSMANAGER_PURGEALL_OFFSET))();
		}
	};
}

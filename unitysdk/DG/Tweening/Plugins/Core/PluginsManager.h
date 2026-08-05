#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening::Plugins::Core { class ITweenPlugin; }
namespace DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename T3> class ABSTweenPlugin_3; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DG_TWEENING_PLUGINS_CORE_PLUGINSMANAGER_PURGEALL_OFFSET UNITYSDK_OFFSET(0x1FA0D580)

namespace DG::Tweening::Plugins::Core
{
	inline static constexpr unsigned int PluginsManager_TypeDefinitionIndex = 28574;

	class PluginsManager : public ::System::Object
	{
	public:
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__color2Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x243B0);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__colorPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x243B8);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__rectPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x243C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::DG::Tweening::Plugins::Core::ITweenPlugin*>** StaticGet__customPlugins()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::DG::Tweening::Plugins::Core::ITweenPlugin*>**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x243C8);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__floatPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x243D0);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__ulongPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x243D8);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__stringPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x243E0);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector2Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x243E8);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__longPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x243F0);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__intPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x243F8);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__doublePlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x24400);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__uintPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x24408);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__rectOffsetPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x24410);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector3Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x24418);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector4Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x24420);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector3ArrayPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x24428);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__quaternionPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x24430);
		}
		// static const ::System::Int32 _MaxCustomPlugins = 0x14; // 0x0

		static ::System::Void PurgeAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PLUGINSMANAGER_PURGEALL_OFFSET))();
		}
	};
}

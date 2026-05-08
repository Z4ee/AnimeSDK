#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening::Plugins::Core { class ITweenPlugin; }
namespace DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename T3> class ABSTweenPlugin_3; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DG_TWEENING_PLUGINS_CORE_PLUGINSMANAGER_PURGEALL_OFFSET UNITYSDK_OFFSET(0x1C2C9C10)

namespace DG::Tweening::Plugins::Core
{
	inline static constexpr unsigned int PluginsManager_TypeDefinitionIndex = 25479;

	class PluginsManager : public ::System::Object
	{
	public:
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__rectOffsetPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F010);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__ulongPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F018);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__rectPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F020);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__floatPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F028);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__longPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F030);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector4Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F038);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::DG::Tweening::Plugins::Core::ITweenPlugin*>** StaticGet__customPlugins()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::DG::Tweening::Plugins::Core::ITweenPlugin*>**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F040);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector3Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F048);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__stringPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F050);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__uintPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F058);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector3ArrayPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F060);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__colorPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F068);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__doublePlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F070);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__intPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F078);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__vector2Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F080);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__color2Plugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F088);
		}
		static ::DG::Tweening::Plugins::Core::ITweenPlugin** StaticGet__quaternionPlugin()
		{
			return (::DG::Tweening::Plugins::Core::ITweenPlugin**)Il2CppClass::FromTypeDefinitionIndex(PluginsManager_TypeDefinitionIndex)->GetStaticField(0x1F090);
		}
		// static const ::System::Int32 _MaxCustomPlugins = 0x14; // 0x0

		static ::System::Void PurgeAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DG_TWEENING_PLUGINS_CORE_PLUGINSMANAGER_PURGEALL_OFFSET))();
		}
	};
}

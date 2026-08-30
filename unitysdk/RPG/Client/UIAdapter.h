#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class UIAdaptiveConfig; }
namespace RPG::GameCore { class UIOperationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define RPG_CLIENT_UIADAPTER_DORELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x16FE8950)
#define RPG_CLIENT_UIADAPTER_GETDEFAULTUIOPERATIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x16FE8A10)
#define RPG_CLIENT_UIADAPTER_LOADCONFIG_OFFSET UNITYSDK_OFFSET(0x16FE82F0)
#define RPG_CLIENT_UIADAPTER_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x16FE8870)
#define RPG_CLIENT_UIADAPTER_UNLOADCONFIG_OFFSET UNITYSDK_OFFSET(0x16FE8800)
#define RPG_CLIENT_UIADAPTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE8BE0)
#define RPG_CLIENT_UIADAPTER__GETOPERATIONCONFIG_OFFSET UNITYSDK_OFFSET(0x16FE8A70)
#define RPG_CLIENT_UIADAPTER__LOADADAPTIVECONFIG_OFFSET UNITYSDK_OFFSET(0x16FE86A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdapter_TypeDefinitionIndex = 60211;

	class UIAdapter : public ::System::Object
	{
	public:
		static ::RPG::GameCore::UIOperationConfig** StaticGet__DefaultUIOperationConfig()
		{
			return (::RPG::GameCore::UIOperationConfig**)Il2CppClass::FromTypeDefinitionIndex(UIAdapter_TypeDefinitionIndex)->GetStaticField(0x5FD60);
		}
		static ::System::String** StaticGet__AdaptiveConfigPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIAdapter_TypeDefinitionIndex)->GetStaticField(0x5FD68);
		}
		static ::System::Collections::Generic::SortedList_2<::RPG::GameCore::UIAdaptiveDeviceType, ::System::String*>** StaticGet__AdaptiveConfigPaths()
		{
			return (::System::Collections::Generic::SortedList_2<::RPG::GameCore::UIAdaptiveDeviceType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIAdapter_TypeDefinitionIndex)->GetStaticField(0x5FD70);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::UIOperationConfig*>** StaticGet__PrefabUIOperationConfigDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::UIOperationConfig*>**)Il2CppClass::FromTypeDefinitionIndex(UIAdapter_TypeDefinitionIndex)->GetStaticField(0x5FD78);
		}
		static ::RPG::GameCore::UIAdaptiveConfig** StaticGet__AdaptiveConfig()
		{
			return (::RPG::GameCore::UIAdaptiveConfig**)Il2CppClass::FromTypeDefinitionIndex(UIAdapter_TypeDefinitionIndex)->GetStaticField(0x5FD80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER__CCTOR_OFFSET))();
		}

		static ::System::Void LoadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_LOADCONFIG_OFFSET))();
		}

		static ::System::Void UnloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_UNLOADCONFIG_OFFSET))();
		}

		static ::System::Void ReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_RELOADCONFIG_OFFSET))();
		}

		static ::System::Void DoReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_DORELOADCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::UIOperationConfig* GetDefaultUIOperationConfigs()
		{
			return ((::RPG::GameCore::UIOperationConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_GETDEFAULTUIOPERATIONCONFIGS_OFFSET))();
		}

		static ::RPG::GameCore::UIAdaptiveConfig* _LoadAdaptiveConfig()
		{
			return ((::RPG::GameCore::UIAdaptiveConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER__LOADADAPTIVECONFIG_OFFSET))();
		}

		static ::RPG::GameCore::UIOperationConfig* _GetOperationConfig(::RPG::GameCore::UIAdaptiveConfig* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::UIOperationConfig*(*)(::RPG::GameCore::UIAdaptiveConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER__GETOPERATIONCONFIG_OFFSET))(a1, a2);
		}
	};
}

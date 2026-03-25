#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_GAMECORE_CONFIGMANIFEST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8DC100)
#define RPG_GAMECORE_CONFIGMANIFEST___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA8DC140)
#define RPG_GAMECORE_CONFIGMANIFEST___C__DISCOVERCONFIGLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0xA8DC170)
#define RPG_GAMECORE_CONFIGMANIFEST___C__LOADMANIFESTITEMBYFILEDISCOVERY_B__10_0_OFFSET UNITYSDK_OFFSET(0xA8DC150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigManifest___c_TypeDefinitionIndex = 45446;

	class ConfigManifest___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::String*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigManifest___c_TypeDefinitionIndex)->GetStaticField(0x45840);
		}
		static ::RPG::GameCore::ConfigManifest___c** StaticGet___9()
		{
			return (::RPG::GameCore::ConfigManifest___c**)Il2CppClass::FromTypeDefinitionIndex(ConfigManifest___c_TypeDefinitionIndex)->GetStaticField(0x45848);
		}
		static ::System::Comparison_1<::System::String*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigManifest___c_TypeDefinitionIndex)->GetStaticField(0x45850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadManifestItemByFileDiscovery_b__10_0(::System::String* x, ::System::String* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST___C__LOADMANIFESTITEMBYFILEDISCOVERY_B__10_0_OFFSET))(this, x, y);
		}

		::System::Int32 _DiscoverConfigList_b__11_0(::System::String* x, ::System::String* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONFIGMANIFEST___C__DISCOVERCONFIGLIST_B__11_0_OFFSET))(this, x, y);
		}
	};
}

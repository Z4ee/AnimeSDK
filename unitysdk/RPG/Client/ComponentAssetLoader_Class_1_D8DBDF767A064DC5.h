#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ComponentAssetLoader_Class_1_A733C3439371489B; }
namespace System { class Type; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_D8DBDF767A064DC5_METHOD_1_A9824D5ECA42BAF4_OFFSET UNITYSDK_OFFSET(0xA0C1010)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_D8DBDF767A064DC5_METHOD_1_FD15B3DA4E61B9D2_OFFSET UNITYSDK_OFFSET(0xA0C19B0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_D8DBDF767A064DC5__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0C1A70)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_Class_1_D8DBDF767A064DC5_TypeDefinitionIndex = 63062;

	class ComponentAssetLoader_Class_1_D8DBDF767A064DC5 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B*>** StaticGet_Field_1_0()
		{
			return (::Il2CppArray<::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B*>**)Il2CppClass::FromTypeDefinitionIndex(ComponentAssetLoader_Class_1_D8DBDF767A064DC5_TypeDefinitionIndex)->GetStaticField(0x5EFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_D8DBDF767A064DC5__CCTOR_OFFSET))();
		}

		static ::System::Type* Method_1_FD15B3DA4E61B9D2(::RPG::Client::ComponentAssetLoader_AssetType a1)
		{
			return ((::System::Type*(*)(::RPG::Client::ComponentAssetLoader_AssetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_D8DBDF767A064DC5_METHOD_1_FD15B3DA4E61B9D2_OFFSET))(a1);
		}

		static ::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B* Method_1_A9824D5ECA42BAF4(::RPG::Client::ComponentAssetLoader_AssetType a1)
		{
			return ((::RPG::Client::ComponentAssetLoader_Class_1_A733C3439371489B*(*)(::RPG::Client::ComponentAssetLoader_AssetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CLASS_1_D8DBDF767A064DC5_METHOD_1_A9824D5ECA42BAF4_OFFSET))(a1);
		}
	};
}

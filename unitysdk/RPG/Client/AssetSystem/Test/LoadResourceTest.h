#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class StreamWriter; }

#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B3306F0)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_METHOD_5_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x1B330A10)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B330700)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_START_OFFSET UNITYSDK_OFFSET(0x1B330710)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B331080)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B331E30)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST__ONASYNCLOADFINISH_OFFSET UNITYSDK_OFFSET(0x1B3316C0)

namespace RPG::Client::AssetSystem::Test
{
	inline static constexpr unsigned int LoadResourceTest_TypeDefinitionIndex = 80918;

	class LoadResourceTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::AssetSystem::Test::LoadResourceTest** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::AssetSystem::Test::LoadResourceTest**)Il2CppClass::FromTypeDefinitionIndex(LoadResourceTest_TypeDefinitionIndex)->GetStaticField(0x65290);
		}
		static ::System::String** StaticGet_FDCBOKOGCPJ()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LoadResourceTest_TypeDefinitionIndex)->GetStaticField(0x65298);
		}
		::System::Collections::Generic::Queue_1<::System::String*>* FOAJPMJDPKG; // 0x18
		::System::Boolean LCFIJAJJKNK; // 0x20
		::System::Single GFNIFELHFHG; // 0x24
		::System::String* MIMMGIMPAKB; // 0x28
		::System::IO::StreamWriter* IADACDFOAJC; // 0x30
		::System::Boolean isRunninsg; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AssetSystem::Test::LoadResourceTest* get_Instance()
		{
			return ((::RPG::Client::AssetSystem::Test::LoadResourceTest*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::AssetSystem::Test::LoadResourceTest* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AssetSystem::Test::LoadResourceTest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_749948B663FCCCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_METHOD_5_749948B663FCCCEF_OFFSET))(this);
		}

		::System::Boolean _OnAsyncLoadFinish(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST__ONASYNCLOADFINISH_OFFSET))(this, a1);
		}
	};
}

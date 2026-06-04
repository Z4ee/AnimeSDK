#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class StreamWriter; }

#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB32DAC0)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_METHOD_5_61929A3103595552_OFFSET UNITYSDK_OFFSET(0xB32DE20)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB32DAD0)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_START_OFFSET UNITYSDK_OFFSET(0xB32DAE0)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_UPDATE_OFFSET UNITYSDK_OFFSET(0xB32E2D0)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST__CTOR_OFFSET UNITYSDK_OFFSET(0xB32EC60)
#define RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST__ONASYNCLOADFINISH_OFFSET UNITYSDK_OFFSET(0xB32E730)

namespace RPG::Client::AssetSystem::Test
{
	inline static constexpr unsigned int LoadResourceTest_TypeDefinitionIndex = 74488;

	class LoadResourceTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::AssetSystem::Test::LoadResourceTest** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::AssetSystem::Test::LoadResourceTest**)Il2CppClass::FromTypeDefinitionIndex(LoadResourceTest_TypeDefinitionIndex)->GetStaticField(0x61F70);
		}
		static ::System::String** StaticGet_Field_5_1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LoadResourceTest_TypeDefinitionIndex)->GetStaticField(0x61F78);
		}
		::System::Collections::Generic::Queue_1<::System::String*>* Field_5_2; // 0x18
		::System::Boolean Field_5_3; // 0x20
		::System::Single Field_5_4; // 0x24
		::System::String* Field_5_5; // 0x28
		::System::IO::StreamWriter* Field_5_6; // 0x30
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

		::System::Void Method_5_61929A3103595552()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST_METHOD_5_61929A3103595552_OFFSET))(this);
		}

		::System::Boolean _OnAsyncLoadFinish(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_TEST_LOADRESOURCETEST__ONASYNCLOADFINISH_OFFSET))(this, a1);
		}
	};
}

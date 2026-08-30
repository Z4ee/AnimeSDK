#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AudienceAssetConfig; }
namespace RPG::Client::CrowdAnimator { class CrowdAssetsPathConfig; }

#define CLASS_1_7FA2E6B51497039C_METHOD_1_9AE8EFA5D694F802_OFFSET UNITYSDK_OFFSET(0xC12C6A0)
#define CLASS_1_7FA2E6B51497039C_METHOD_1_ABE2AE11752DBB83_OFFSET UNITYSDK_OFFSET(0xC12C6B0)
#define CLASS_1_7FA2E6B51497039C_METHOD_1_F8C7231308CD2C82_1_OFFSET UNITYSDK_OFFSET(0xC12C770)
#define CLASS_1_7FA2E6B51497039C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xC12C6C0)

inline static constexpr unsigned int Class_1_7FA2E6B51497039C_TypeDefinitionIndex = 69092;

class Class_1_7FA2E6B51497039C : public ::System::Object
{
public:
	static ::RPG::Client::CrowdAnimator::CrowdAssetsPathConfig** StaticGet_NCDCMMAELHE()
	{
		return (::RPG::Client::CrowdAnimator::CrowdAssetsPathConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FA2E6B51497039C_TypeDefinitionIndex)->GetStaticField(0x5DF20);
	}
	static ::RPG::Client::AudienceAssetConfig** StaticGet_DMPEKPLLCPL()
	{
		return (::RPG::Client::AudienceAssetConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FA2E6B51497039C_TypeDefinitionIndex)->GetStaticField(0x5DF28);
	}
	static ::System::Boolean* StaticGet_AICGMPKPDMP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FA2E6B51497039C_TypeDefinitionIndex)->GetStaticField(0x133D0);
	}

	static ::RPG::Client::AudienceAssetConfig* Method_1_9AE8EFA5D694F802()
	{
		return ((::RPG::Client::AudienceAssetConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FA2E6B51497039C_METHOD_1_9AE8EFA5D694F802_OFFSET))();
	}

	static ::RPG::Client::CrowdAnimator::CrowdAssetsPathConfig* Method_1_ABE2AE11752DBB83()
	{
		return ((::RPG::Client::CrowdAnimator::CrowdAssetsPathConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FA2E6B51497039C_METHOD_1_ABE2AE11752DBB83_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FA2E6B51497039C_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FA2E6B51497039C_METHOD_1_F8C7231308CD2C82_1_OFFSET))();
	}
};

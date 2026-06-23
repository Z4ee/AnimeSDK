#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

#define DAMAGETEXTLOADER_INIT_OFFSET UNITYSDK_OFFSET(0x155B6080)
#define DAMAGETEXTLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x155B67F0)

inline static constexpr unsigned int DamageTextLoader_TypeDefinitionIndex = 52112;

class DamageTextLoader : public ::System::Object
{
public:
	static ::Foundation::AssetRequestHandle* StaticGet_prefabHandle()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(DamageTextLoader_TypeDefinitionIndex)->GetStaticField(0x49140);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_fontHandle()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(DamageTextLoader_TypeDefinitionIndex)->GetStaticField(0x49160);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_fontHandle2()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(DamageTextLoader_TypeDefinitionIndex)->GetStaticField(0x49180);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGETEXTLOADER__CTOR_OFFSET))(this);
	}

	static ::System::Void Init()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAMAGETEXTLOADER_INIT_OFFSET))();
	}
};

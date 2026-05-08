#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

#define DAMAGETEXTLOADER_INIT_OFFSET UNITYSDK_OFFSET(0x14C923B0)
#define DAMAGETEXTLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C92B20)

inline static constexpr unsigned int DamageTextLoader_TypeDefinitionIndex = 57700;

class DamageTextLoader : public ::System::Object
{
public:
	static ::Foundation::AssetRequestHandle* StaticGet_fontHandle()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(DamageTextLoader_TypeDefinitionIndex)->GetStaticField(0x470E0);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_prefabHandle()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(DamageTextLoader_TypeDefinitionIndex)->GetStaticField(0x47100);
	}
	static ::Foundation::AssetRequestHandle* StaticGet_fontHandle2()
	{
		return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(DamageTextLoader_TypeDefinitionIndex)->GetStaticField(0x47120);
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

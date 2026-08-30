#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class ReleaseAssetDel; }
namespace RPG::CustomRP { class SyncLoadAssetDel; }

inline static constexpr unsigned int Class_1_278DBA9D7544F506___O_TypeDefinitionIndex = 70144;

class Class_1_278DBA9D7544F506___O : public ::System::Object
{
public:
	static ::RPG::CustomRP::SyncLoadAssetDel** StaticGet__0___LoadFun()
	{
		return (::RPG::CustomRP::SyncLoadAssetDel**)Il2CppClass::FromTypeDefinitionIndex(Class_1_278DBA9D7544F506___O_TypeDefinitionIndex)->GetStaticField(0x57000);
	}
	static ::RPG::CustomRP::ReleaseAssetDel** StaticGet__1___ReleaseAsset()
	{
		return (::RPG::CustomRP::ReleaseAssetDel**)Il2CppClass::FromTypeDefinitionIndex(Class_1_278DBA9D7544F506___O_TypeDefinitionIndex)->GetStaticField(0x57008);
	}
};

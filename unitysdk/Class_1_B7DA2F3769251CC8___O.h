#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnAssetOperationDelegate; }

inline static constexpr unsigned int Class_1_B7DA2F3769251CC8___O_TypeDefinitionIndex = 38609;

class Class_1_B7DA2F3769251CC8___O : public ::System::Object
{
public:
	static ::RPG::Client::OnAssetOperationDelegate** StaticGet__0___OnAsyncLoaded()
	{
		return (::RPG::Client::OnAssetOperationDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7DA2F3769251CC8___O_TypeDefinitionIndex)->GetStaticField(0x1A010);
	}
};

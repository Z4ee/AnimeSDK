#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnAssetOperationDelegate; }

inline static constexpr unsigned int Class_1_A0302E9AE0B8A2B9___O_TypeDefinitionIndex = 48034;

class Class_1_A0302E9AE0B8A2B9___O : public ::System::Object
{
public:
	static ::RPG::Client::OnAssetOperationDelegate** StaticGet__0____OnAsyncLoadFinish()
	{
		return (::RPG::Client::OnAssetOperationDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0302E9AE0B8A2B9___O_TypeDefinitionIndex)->GetStaticField(0x444D0);
	}
};

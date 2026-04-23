#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnAssetOperationDelegate; }

inline static constexpr unsigned int Class_1_0D1368574F061851___O_TypeDefinitionIndex = 37872;

class Class_1_0D1368574F061851___O : public ::System::Object
{
public:
	static ::RPG::Client::OnAssetOperationDelegate** StaticGet__0___OnAsyncLoaded()
	{
		return (::RPG::Client::OnAssetOperationDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D1368574F061851___O_TypeDefinitionIndex)->GetStaticField(0xD660);
	}
};

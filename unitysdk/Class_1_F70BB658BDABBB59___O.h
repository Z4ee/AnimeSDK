#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnAssetOperationDelegate; }

inline static constexpr unsigned int Class_1_F70BB658BDABBB59___O_TypeDefinitionIndex = 39301;

class Class_1_F70BB658BDABBB59___O : public ::System::Object
{
public:
	static ::RPG::Client::OnAssetOperationDelegate** StaticGet__0____OnTimelineRefEnvProfileLoadFinish()
	{
		return (::RPG::Client::OnAssetOperationDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F70BB658BDABBB59___O_TypeDefinitionIndex)->GetStaticField(0x48B50);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnAssetOperationDelegate; }

inline static constexpr unsigned int Class_1_1F539D99D6C56687___O_TypeDefinitionIndex = 46706;

class Class_1_1F539D99D6C56687___O : public ::System::Object
{
public:
	static ::RPG::Client::OnAssetOperationDelegate** StaticGet__0____OnTimelineRefEnvProfileLoadFinish()
	{
		return (::RPG::Client::OnAssetOperationDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F539D99D6C56687___O_TypeDefinitionIndex)->GetStaticField(0x68340);
	}
};

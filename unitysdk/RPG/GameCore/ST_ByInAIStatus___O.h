#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByInAIStatus___O_TypeDefinitionIndex = 19313;

	class ST_ByInAIStatus___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AIStatus>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AIStatus>**)Il2CppClass::FromTypeDefinitionIndex(ST_ByInAIStatus___O_TypeDefinitionIndex)->GetStaticField(0x54500);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByAIStatus___O_TypeDefinitionIndex = 19817;

	class RA_ByAIStatus___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AIStatus>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AIStatus>**)Il2CppClass::FromTypeDefinitionIndex(RA_ByAIStatus___O_TypeDefinitionIndex)->GetStaticField(0x46F0);
		}
	};
}

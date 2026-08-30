#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckGameMode___O_TypeDefinitionIndex = 20541;

	class AdvByCheckGameMode___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::GameModeType>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::GameModeType>**)Il2CppClass::FromTypeDefinitionIndex(AdvByCheckGameMode___O_TypeDefinitionIndex)->GetStaticField(0x56A20);
		}
	};
}

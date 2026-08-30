#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByContainAbnormalState___O_TypeDefinitionIndex = 19852;

	class ST_ByContainAbnormalState___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AdventureCharacterUnitState>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::AdventureCharacterUnitState>**)Il2CppClass::FromTypeDefinitionIndex(ST_ByContainAbnormalState___O_TypeDefinitionIndex)->GetStaticField(0x16E60);
		}
	};
}

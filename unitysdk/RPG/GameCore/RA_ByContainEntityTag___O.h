#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_D837DED66799FBE3_DelegateParseJson_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByContainEntityTag___O_TypeDefinitionIndex = 19815;

	class RA_ByContainEntityTag___O : public ::System::Object
	{
	public:
		static ::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::EntityTag>** StaticGet__0___FromJson()
		{
			return (::Class_1_D837DED66799FBE3_DelegateParseJson_1<::RPG::GameCore::EntityTag>**)Il2CppClass::FromTypeDefinitionIndex(RA_ByContainEntityTag___O_TypeDefinitionIndex)->GetStaticField(0x4B50);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierStatusTypeList___O_TypeDefinitionIndex = 16198;

	class ModifierStatusTypeList___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EnumStatusType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EnumStatusType>**)Il2CppClass::FromTypeDefinitionIndex(ModifierStatusTypeList___O_TypeDefinitionIndex)->GetStaticField(0x3DDC0);
		}
	};
}

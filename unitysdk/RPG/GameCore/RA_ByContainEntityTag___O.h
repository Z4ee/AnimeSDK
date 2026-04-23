#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByContainEntityTag___O_TypeDefinitionIndex = 18970;

	class RA_ByContainEntityTag___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityTag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EntityTag>**)Il2CppClass::FromTypeDefinitionIndex(RA_ByContainEntityTag___O_TypeDefinitionIndex)->GetStaticField(0x3E0F0);
		}
	};
}

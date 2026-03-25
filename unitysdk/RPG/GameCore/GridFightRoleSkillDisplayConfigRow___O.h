#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSkillDisplayConfigRow___O_TypeDefinitionIndex = 12357;

	class GridFightRoleSkillDisplayConfigRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightRoleSkillTag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightRoleSkillTag>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleSkillDisplayConfigRow___O_TypeDefinitionIndex)->GetStaticField(0x22870);
		}
	};
}

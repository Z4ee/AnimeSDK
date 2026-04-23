#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDragOpRoleSelector___O_TypeDefinitionIndex = 18874;

	class GridFightDragOpRoleSelector___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightRegion>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::GridFightRegion>**)Il2CppClass::FromTypeDefinitionIndex(GridFightDragOpRoleSelector___O_TypeDefinitionIndex)->GetStaticField(0x34C10);
		}
	};
}

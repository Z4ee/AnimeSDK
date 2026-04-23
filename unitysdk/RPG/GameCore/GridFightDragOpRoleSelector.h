#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightDragOpParamBase.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR_METHOD_3_0D6A0AAD6F56CFD2_OFFSET UNITYSDK_OFFSET(0x189A8D70)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR_METHOD_3_527A6A0DCA80CC38_OFFSET UNITYSDK_OFFSET(0x189A8AF0)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x189A8AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDragOpRoleSelector_TypeDefinitionIndex = 18873;

	class GridFightDragOpRoleSelector : public ::RPG::GameCore::GridFightDragOpParamBase
	{
	public:
		::System::UInt32 RoleID; // 0x10
		::Il2CppArray<::RPG::GameCore::GridFightRegion>* GridRegion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0D6A0AAD6F56CFD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDragOpRoleSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDragOpRoleSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR_METHOD_3_0D6A0AAD6F56CFD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_527A6A0DCA80CC38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightDragOpRoleSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightDragOpRoleSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPROLESELECTOR_METHOD_3_527A6A0DCA80CC38_OFFSET))(a1, a2);
		}
	};
}

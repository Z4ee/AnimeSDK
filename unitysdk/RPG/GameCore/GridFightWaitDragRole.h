#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightDragOpGridSelector; }
namespace RPG::GameCore { class GridFightDragOpRoleSelector; }

#define RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE_METHOD_3_04D1BC2296B299A7_OFFSET UNITYSDK_OFFSET(0x1D3C10C0)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE_METHOD_3_74BE9A38E0C4489A_OFFSET UNITYSDK_OFFSET(0x1D3C1100)
#define RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C10F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightWaitDragRole_TypeDefinitionIndex = 19730;

	class GridFightWaitDragRole : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightDragOpRoleSelector* Role; // 0x18
		::RPG::GameCore::GridFightDragOpRoleSelector* TargetRole; // 0x20
		::RPG::GameCore::GridFightDragOpGridSelector* TargetGrid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04D1BC2296B299A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaitDragRole*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaitDragRole*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE_METHOD_3_04D1BC2296B299A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_74BE9A38E0C4489A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightWaitDragRole* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightWaitDragRole*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTWAITDRAGROLE_METHOD_3_74BE9A38E0C4489A_OFFSET))(a1, a2);
		}
	};
}

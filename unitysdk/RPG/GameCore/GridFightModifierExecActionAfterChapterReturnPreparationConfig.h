#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG_METHOD_3_99782C147ED2F033_OFFSET UNITYSDK_OFFSET(0x17266300)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG_METHOD_3_AF49F575B4B9407A_OFFSET UNITYSDK_OFFSET(0x1726A470)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172662B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterChapterReturnPreparationConfig_TypeDefinitionIndex = 17760;

	class GridFightModifierExecActionAfterChapterReturnPreparationConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AF49F575B4B9407A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterChapterReturnPreparationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterChapterReturnPreparationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG_METHOD_3_AF49F575B4B9407A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99782C147ED2F033(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterChapterReturnPreparationConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterChapterReturnPreparationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERRETURNPREPARATIONCONFIG_METHOD_3_99782C147ED2F033_OFFSET))(a1, a2);
		}
	};
}

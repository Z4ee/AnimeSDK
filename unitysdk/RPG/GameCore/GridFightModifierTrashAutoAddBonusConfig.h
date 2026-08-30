#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRASHAUTOADDBONUSCONFIG_METHOD_3_83FD8D91FC2ABC7B_OFFSET UNITYSDK_OFFSET(0x1D15B1E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRASHAUTOADDBONUSCONFIG_METHOD_3_CD0F85C651055197_OFFSET UNITYSDK_OFFSET(0x1D15B190)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRASHAUTOADDBONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15B1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierTrashAutoAddBonusConfig_TypeDefinitionIndex = 19165;

	class GridFightModifierTrashAutoAddBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRASHAUTOADDBONUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD0F85C651055197(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierTrashAutoAddBonusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierTrashAutoAddBonusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRASHAUTOADDBONUSCONFIG_METHOD_3_CD0F85C651055197_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_83FD8D91FC2ABC7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierTrashAutoAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierTrashAutoAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRASHAUTOADDBONUSCONFIG_METHOD_3_83FD8D91FC2ABC7B_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG_METHOD_3_AD23FFB1FBB295A9_OFFSET UNITYSDK_OFFSET(0x1C5D0E60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG_METHOD_3_D50F994535A2EF25_OFFSET UNITYSDK_OFFSET(0x1C5D0E10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D0E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterChapterBeginConfig_TypeDefinitionIndex = 18589;

	class GridFightModifierExecActionAfterChapterBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D50F994535A2EF25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterChapterBeginConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterChapterBeginConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG_METHOD_3_D50F994535A2EF25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD23FFB1FBB295A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterChapterBeginConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterChapterBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCHAPTERBEGINCONFIG_METHOD_3_AD23FFB1FBB295A9_OFFSET))(a1, a2);
		}
	};
}

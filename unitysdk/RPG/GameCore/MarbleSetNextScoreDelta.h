#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_METHOD_3_8AAE93CE089D4CF7_OFFSET UNITYSDK_OFFSET(0x1D8485F0)
#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_METHOD_3_F3DDF13BA85DB6B3_OFFSET UNITYSDK_OFFSET(0x1D848650)
#define RPG_GAMECORE_MARBLESETNEXTSCOREDELTA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D848640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetNextScoreDelta_TypeDefinitionIndex = 16861;

	class MarbleSetNextScoreDelta : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Int32 Score; // 0x10
		::System::String* ScoreDynamic; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8AAE93CE089D4CF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetNextScoreDelta*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetNextScoreDelta*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_METHOD_3_8AAE93CE089D4CF7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3DDF13BA85DB6B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetNextScoreDelta* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetNextScoreDelta*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETNEXTSCOREDELTA_METHOD_3_F3DDF13BA85DB6B3_OFFSET))(a1, a2);
		}
	};
}

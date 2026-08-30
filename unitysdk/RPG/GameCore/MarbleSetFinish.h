#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESETFINISH_METHOD_3_3DA1697A2883161B_OFFSET UNITYSDK_OFFSET(0x1D4B2C00)
#define RPG_GAMECORE_MARBLESETFINISH_METHOD_3_6771130C752EB8FA_OFFSET UNITYSDK_OFFSET(0x1D4B2CA0)
#define RPG_GAMECORE_MARBLESETFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B2C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetFinish_TypeDefinitionIndex = 16662;

	class MarbleSetFinish : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3DA1697A2883161B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETFINISH_METHOD_3_3DA1697A2883161B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6771130C752EB8FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETFINISH_METHOD_3_6771130C752EB8FA_OFFSET))(a1, a2);
		}
	};
}

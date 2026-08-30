#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMEPUZZLELITBOARD_METHOD_3_36E99F86866ED823_OFFSET UNITYSDK_OFFSET(0x1E01C840)
#define RPG_GAMECORE_CHIMEPUZZLELITBOARD_METHOD_3_40F5B1B598C685B8_OFFSET UNITYSDK_OFFSET(0x1E01C800)
#define RPG_GAMECORE_CHIMEPUZZLELITBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E01C830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimePuzzleLitBoard_TypeDefinitionIndex = 21729;

	class ChimePuzzleLitBoard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELITBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40F5B1B598C685B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimePuzzleLitBoard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimePuzzleLitBoard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELITBOARD_METHOD_3_40F5B1B598C685B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36E99F86866ED823(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimePuzzleLitBoard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimePuzzleLitBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLELITBOARD_METHOD_3_36E99F86866ED823_OFFSET))(a1, a2);
		}
	};
}

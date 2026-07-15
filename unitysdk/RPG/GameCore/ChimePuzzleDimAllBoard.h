#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_METHOD_3_1554D49FC5A8D12D_OFFSET UNITYSDK_OFFSET(0x1C38BA50)
#define RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_METHOD_3_EAEFC9E68C221CF0_OFFSET UNITYSDK_OFFSET(0x1C38BB20)
#define RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38BB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimePuzzleDimAllBoard_TypeDefinitionIndex = 21168;

	class ChimePuzzleDimAllBoard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1554D49FC5A8D12D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimePuzzleDimAllBoard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimePuzzleDimAllBoard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_METHOD_3_1554D49FC5A8D12D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EAEFC9E68C221CF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimePuzzleDimAllBoard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimePuzzleDimAllBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMEPUZZLEDIMALLBOARD_METHOD_3_EAEFC9E68C221CF0_OFFSET))(a1, a2);
		}
	};
}

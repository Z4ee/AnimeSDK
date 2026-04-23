#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEREMOVEBUFF_METHOD_3_2C94E9117EEAD3A0_OFFSET UNITYSDK_OFFSET(0x18AA4CB0)
#define RPG_GAMECORE_MARBLEREMOVEBUFF_METHOD_3_4044CFFDFF7EFF0D_OFFSET UNITYSDK_OFFSET(0x18AA4BD0)
#define RPG_GAMECORE_MARBLEREMOVEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA4C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRemoveBuff_TypeDefinitionIndex = 15936;

	class MarbleRemoveBuff : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 BuffId; // 0x14
		::System::UInt32 StackCount; // 0x18
		::System::Boolean UseFactor; // 0x1C
		::System::Single RemoveFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVEBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4044CFFDFF7EFF0D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRemoveBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRemoveBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVEBUFF_METHOD_3_4044CFFDFF7EFF0D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C94E9117EEAD3A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRemoveBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRemoveBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEREMOVEBUFF_METHOD_3_2C94E9117EEAD3A0_OFFSET))(a1, a2);
		}
	};
}

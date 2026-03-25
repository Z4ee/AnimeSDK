#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class OpticalIllusionPuzzleBoard_Class_1_29346FA79C775DFC_1; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F2B70)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_1___BFS_B__1_OFFSET UNITYSDK_OFFSET(0xA0F3510)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___c__DisplayClass100_1_TypeDefinitionIndex = 64156;

	class OpticalIllusionPuzzleBoard___c__DisplayClass100_1 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OpticalIllusionPuzzleBoard_Class_1_29346FA79C775DFC_1* nextNode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_1__CTOR_OFFSET))(this);
		}

		::System::Void __BFS_b__1(::System::UInt32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPLAYCLASS100_1___BFS_B__1_OFFSET))(this, i);
		}
	};
}

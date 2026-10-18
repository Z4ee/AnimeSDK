#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMAKEITEMDIE_METHOD_3_1439E5AF0779624D_OFFSET UNITYSDK_OFFSET(0x1D840060)
#define RPG_GAMECORE_MARBLEMAKEITEMDIE_METHOD_3_E38F0C2CE29A02FC_OFFSET UNITYSDK_OFFSET(0x1D8400C0)
#define RPG_GAMECORE_MARBLEMAKEITEMDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8400B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMakeItemDie_TypeDefinitionIndex = 16872;

	class MarbleMakeItemDie : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Int32 DisplayDamage; // 0x14
		::RPG::GameCore::MarbleTarget AttackerType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAKEITEMDIE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1439E5AF0779624D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleMakeItemDie*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMakeItemDie*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAKEITEMDIE_METHOD_3_1439E5AF0779624D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E38F0C2CE29A02FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleMakeItemDie* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMakeItemDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMAKEITEMDIE_METHOD_3_E38F0C2CE29A02FC_OFFSET))(a1, a2);
		}
	};
}

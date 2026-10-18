#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE_METHOD_3_3418A2148B220F13_OFFSET UNITYSDK_OFFSET(0x1D808B70)
#define RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE_METHOD_3_7FFAF2C2C834F51D_OFFSET UNITYSDK_OFFSET(0x1D808BD0)
#define RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D808BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleActionAgainTowardBuffSource_TypeDefinitionIndex = 16836;

	class MarbleActionAgainTowardBuffSource : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 BuffId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3418A2148B220F13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleActionAgainTowardBuffSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleActionAgainTowardBuffSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE_METHOD_3_3418A2148B220F13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FFAF2C2C834F51D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleActionAgainTowardBuffSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleActionAgainTowardBuffSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAINTOWARDBUFFSOURCE_METHOD_3_7FFAF2C2C834F51D_OFFSET))(a1, a2);
		}
	};
}

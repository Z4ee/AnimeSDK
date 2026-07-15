#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENTERTRAINPARTYGAME_METHOD_3_3E5182C3A6D4DE00_OFFSET UNITYSDK_OFFSET(0x1C053880)
#define RPG_GAMECORE_ENTERTRAINPARTYGAME_METHOD_3_E5BC8B9A175AB4BD_OFFSET UNITYSDK_OFFSET(0x1C053950)
#define RPG_GAMECORE_ENTERTRAINPARTYGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1C053940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterTrainPartyGame_TypeDefinitionIndex = 21543;

	class EnterTrainPartyGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERTRAINPARTYGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E5182C3A6D4DE00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterTrainPartyGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterTrainPartyGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERTRAINPARTYGAME_METHOD_3_3E5182C3A6D4DE00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E5BC8B9A175AB4BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterTrainPartyGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterTrainPartyGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERTRAINPARTYGAME_METHOD_3_E5BC8B9A175AB4BD_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESEALPLAYANIM_METHOD_3_4FCA15F982F026CF_OFFSET UNITYSDK_OFFSET(0x1D4B1B20)
#define RPG_GAMECORE_MARBLESEALPLAYANIM_METHOD_3_7A90D78D9B1D07FC_OFFSET UNITYSDK_OFFSET(0x1D4B1AE0)
#define RPG_GAMECORE_MARBLESEALPLAYANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B1B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealPlayAnim_TypeDefinitionIndex = 21796;

	class MarbleSealPlayAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALPLAYANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A90D78D9B1D07FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSealPlayAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealPlayAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALPLAYANIM_METHOD_3_7A90D78D9B1D07FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4FCA15F982F026CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSealPlayAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealPlayAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALPLAYANIM_METHOD_3_4FCA15F982F026CF_OFFSET))(a1, a2);
		}
	};
}

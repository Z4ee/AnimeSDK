#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESEALPLAYANIM_METHOD_3_4B84E9FC3DBE24AE_OFFSET UNITYSDK_OFFSET(0x198D9710)
#define RPG_GAMECORE_MARBLESEALPLAYANIM_METHOD_3_4FCA15F982F026CF_OFFSET UNITYSDK_OFFSET(0x198D9790)
#define RPG_GAMECORE_MARBLESEALPLAYANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x198D9760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealPlayAnim_TypeDefinitionIndex = 20821;

	class MarbleSealPlayAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALPLAYANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B84E9FC3DBE24AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSealPlayAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealPlayAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALPLAYANIM_METHOD_3_4B84E9FC3DBE24AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4FCA15F982F026CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSealPlayAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealPlayAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALPLAYANIM_METHOD_3_4FCA15F982F026CF_OFFSET))(a1, a2);
		}
	};
}

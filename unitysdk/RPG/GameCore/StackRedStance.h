#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_STACKREDSTANCE_METHOD_3_6CC2BD20692645B1_OFFSET UNITYSDK_OFFSET(0x1B0A5E30)
#define RPG_GAMECORE_STACKREDSTANCE_METHOD_3_B8E9FA3B3A16729A_OFFSET UNITYSDK_OFFSET(0x1B0A5D50)
#define RPG_GAMECORE_STACKREDSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A5DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackRedStance_TypeDefinitionIndex = 21815;

	class StackRedStance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RedStanceRatio; // 0x18
		::RPG::GameCore::DynamicFloat* RedStanceValue; // 0x20
		::RPG::GameCore::DynamicFloat* StanceCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B8E9FA3B3A16729A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackRedStance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackRedStance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE_METHOD_3_B8E9FA3B3A16729A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6CC2BD20692645B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackRedStance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackRedStance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKREDSTANCE_METHOD_3_6CC2BD20692645B1_OFFSET))(a1, a2);
		}
	};
}
